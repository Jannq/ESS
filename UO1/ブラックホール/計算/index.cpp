#include <iostream>
#include <cmath>

using namespace std;

class BlackHoleAI {
public:
    BlackHoleAI(double mass) {
        this->mass = mass;
    }

    void calculateRadius() {
        const double G = 6.67430e-11; // 重力定数 (m^3 / kg s^2)
        const double c = 299792458; // 光速 (m/s)
        const double solarMass = 1.98892e30; // 太陽質量 (kg)

        // 質量を太陽質量に変換する
        double massInSolarMass = mass / solarMass;

        // Schwarzschild半径を計算する
        double schwarzschildRadius = (2 * G * mass) / pow(c, 2);

        // イベントホライズン半径を計算する
        double eventHorizonRadius = schwarzschildRadius * (1 + sqrt(1 - (4 * G * pow(mass, 2)) / pow(c, 4))) / 2;

        // 結果を出力する
        cout << "質量 " << mass << " kgのブラックホールのSchwarzschild半径は、" << schwarzschildRadius << " mです。" << endl;
        cout << "質量 " << mass << " kgのブラックホールのイベントホライズン半径は、" << eventHorizonRadius << " mです。" << endl;
    }

private:
    double mass; // 質量 (kg)
};

int main() {
    double mass = 5.0e31; // ブラックホールの質量 (kg)

    BlackHoleAI ai(mass);
    ai.calculateRadius();

    return 0;
}

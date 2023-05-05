#include <iostream>
#include <cmath>

using namespace std;

class LightSpeedAI {
public:
    LightSpeedAI() {
        distance = 7 * 9.46e12; // 7光年をメートルに変換
    }

    void calculateSpeed() {
        // c = distance / timeの式を使って光速を計算する
        double speed = distance / c;

        // 結果を出力する
        cout << "地球から7光年の距離を移動する光の速度は、" << speed << " m/sです。" << endl;
    }

private:
    const double c = 299792458; // 光速 (m/s)
    double distance; // 目的地までの距離 (メートル)
};

int main() {
    LightSpeedAI ai;
    ai.calculateSpeed();

    return 0;
}

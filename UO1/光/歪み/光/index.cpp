#include <iostream>
#include <cmath>

using namespace std;

double calculateDistortion(double v)
{
    double c = 299792458.0; // 光速度（m/s）
    double gamma = 1.0 / sqrt(1 - pow(v/c, 2)); // ローレンツ因子
    double distortion = gamma - 1.0; // 光の歪み

    return distortion;
}

int main()
{
    double velocity = 100000000.0; // 速度（m/s）
    double distortion = calculateDistortion(velocity);

    cout << "速度 " << velocity << " m/s の場合の光の歪みは " << distortion << " です" << endl;

    return 0;
}

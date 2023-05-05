#include <iostream>
#include <cmath>
#include <SFML/Graphics.hpp>

using namespace std;

int main() {
    // 定数
    const double c = 299792458; // 光速度（m/s）
    const double gamma = 1.0 / sqrt(1.0 - pow(c / c, 2)); // ローレンツ因子

    // 描画ウィンドウ
    sf::RenderWindow window(sf::VideoMode(800, 600), "時間の歪み");

    // 時計
    sf::CircleShape clock(50);
    clock.setFillColor(sf::Color::White);
    clock.setOrigin(clock.getRadius(), clock.getRadius());
    clock.setPosition(window.getSize().x / 2, window.getSize().y / 2);

    // 秒針
    sf::RectangleShape secondHand(sf::Vector2f(2, 50));
    secondHand.setFillColor(sf::Color::Red);
    secondHand.setOrigin(secondHand.getSize().x / 2, secondHand.getSize().y - clock.getRadius());
    secondHand.setPosition(clock.getPosition());

    // 固有時刻
    double t0 = 1;

    while (window.isOpen()) {
        // ウィンドウのイベント
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // 観測時刻
        double t_obs = gamma * t0;

        // 秒針の角度
        double angle = 2 * M_PI * t_obs / 60;
        secondHand.setRotation(angle * 180 / M_PI);

        // 描画
        window.clear();
        window.draw(clock);
        window.draw(secondHand);
        window.display();
    }

    return 0;
}

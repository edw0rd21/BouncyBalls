#include <SFML/Graphics.hpp>
#include "Ball.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    Ball ball1(50, sf::Color::Red, 100, 100);
    Ball ball2(20, sf::Color::Blue, 200, 150);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        
        ball1.draw(window);
        ball2.draw(window);

        ball1.update();
        ball2.update();

        window.display();
    }

    return 0;
}
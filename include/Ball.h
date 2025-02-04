#pragma once

#include <SFML/Graphics.hpp>

class Ball
{
    public:
        Ball(float radius, sf::Color color, float x, float y);
        void update();
        void draw(sf::RenderWindow &window);
    private:
        sf::CircleShape m_ball;
        sf::Vector2f m_velocity;
};
#include "Ball.h"

Ball::Ball(float radius, sf::Color color, float x, float y)
    : m_velocity(0.0f, 1.0f)
{
    m_ball.setRadius(radius);
    m_ball.setFillColor(color);
    m_ball.setPosition(x, y);
}

void Ball::update()
{
    m_ball.move(m_velocity);
}
void Ball::draw(sf::RenderWindow &window)
{
    window.draw(m_ball);
}
#ifndef BIRD_HPP
#define BIRD_HPP

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>

class Bird
{
public:
    sf::RectangleShape bird;

private:
    sf::Vector2f birdDimensions;
    sf::Vector2f birdPosition;

public:
    Bird(const int windowX, const int windowY);
    Bird(const Bird& b);
    Bird& operator =(const Bird& b);
    ~Bird();
    sf::Vector2f getPosition();
    sf::Vector2f getDimensions();
};

#endif /* BIRD_HPP */

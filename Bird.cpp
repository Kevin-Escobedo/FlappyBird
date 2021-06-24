#include "Bird.hpp"

Bird::Bird(const int windowX, const int windowY)
:bird(), birdDimensions(), birdPosition()
{
    birdDimensions.x = windowX / 20;
    birdDimensions.y = windowY / 50;

    birdPosition.x = 0;
    birdPosition.y = windowY / 2;

    bird.setSize(birdDimensions);
}

Bird::Bird(const Bird& b)
:bird(), birdDimensions(), birdPosition()
{
    bird.setSize(b.birdDimensions);
    bird.setPosition(b.birdPosition);

    birdDimensions.x = b.birdDimensions.x;
    birdDimensions.y = b.birdDimensions.y;

    birdPosition.x = b.birdPosition.x;
    birdPosition.y = b.birdPosition.y;
}

Bird& Bird::operator =(const Bird& b)
{
    bird.setSize(b.birdDimensions);
    bird.setPosition(b.birdPosition);

    birdDimensions.x = b.birdDimensions.x;
    birdDimensions.y = b.birdDimensions.y;

    birdPosition.x = b.birdPosition.x;
    birdPosition.y = b.birdPosition.y;
    return *this;
}

Bird::~Bird()
{
    
}

sf::Vector2f Bird::getPosition()
{
    return birdPosition;
}

sf::Vector2f Bird::getDimensions()
{
    return birdDimensions;
}

void Bird::move(const bool up)
{
    const int windowY = getPosition().y * 2;

    if(up)
    {
        if(birdPosition.y - (0.006 * windowY) >= 0)
        {
            birdPosition.y -= 0.006 * windowY;
        }
    }

    else
    {
        if(birdPosition.y + (0.003 * windowY) <= windowY)
        {
            birdPosition.y += 0.003 * windowY;
        }
    }

    bird.setPosition(birdPosition.x, birdPosition.y);
}

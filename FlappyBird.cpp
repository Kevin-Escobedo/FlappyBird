#include "FlappyBird.hpp"

FlappyBird::FlappyBird(const int windowX, const int windowY)
:window(), bird()
{
    window.create(sf::VideoMode(windowX, windowY), "Flappy Bird", sf::Style::Titlebar | sf::Style::Close);
    bird = Bird(windowX, windowY);
    window.setFramerateLimit(FRAMERATE);
}

FlappyBird::FlappyBird(const FlappyBird& fb)
:window(), bird()
{
    const unsigned width = fb.window.getSize().x;
    const unsigned length = fb.window.getSize().y;

    window.create(sf::VideoMode(width, length), "Flappy Bird", sf::Style::Titlebar | sf::Style::Close);
    bird = fb.bird;
    window.setFramerateLimit(FRAMERATE);
}

FlappyBird& FlappyBird::operator =(const FlappyBird& fb)
{
    const unsigned width = fb.window.getSize().x;
    const unsigned length = fb.window.getSize().y;

    window.create(sf::VideoMode(width, length), "Flappy Bird", sf::Style::Titlebar | sf::Style::Close);
    bird = fb.bird;

    window.setFramerateLimit(FRAMERATE);
    
    return *this;
}

FlappyBird::~FlappyBird()
{

}

void FlappyBird::run()
{
    while(window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            bird.move(true);
        }

        else
        {
            bird.move(false);
        }

        window.clear();
        drawAllShapes();
        window.display();
    }
}

void FlappyBird::drawAllShapes()
{
    window.draw(bird.bird);
}

#include "FlappyBird.hpp"

FlappyBird::FlappyBird(const int windowX, const int windowY)
:window()
{
    window.create(sf::VideoMode(windowX, windowY), "Flappy Bird", sf::Style::Titlebar | sf::Style::Close);
}

FlappyBird::FlappyBird(const FlappyBird& fb)
:window()
{
    const unsigned width = fb.window.getSize().x;
    const unsigned length = fb.window.getSize().y;

    window.create(sf::VideoMode(width, length), "Flappy Bird", sf::Style::Titlebar | sf::Style::Close);
}

FlappyBird& FlappyBird::operator =(const FlappyBird& fb)
{
    const unsigned width = fb.window.getSize().x;
    const unsigned length = fb.window.getSize().y;

    window.create(sf::VideoMode(width, length), "Flappy Bird", sf::Style::Titlebar | sf::Style::Close);
    
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

        window.clear();
        window.display();
    }
}

#ifndef FLAPPYBIRD_HPP
#define FLAPPYBIRD_HPP

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "Bird.hpp"

class FlappyBird
{
private:
    sf::RenderWindow window;
    Bird bird;

public:
    FlappyBird(const int windowX, const int windowY);
    FlappyBird(const FlappyBird& fb);
    FlappyBird& operator =(const FlappyBird& fb);
    ~FlappyBird();
    void run();

private:
    void drawAllShapes();
};

#endif /* FLAPPYBIRD_HPP */

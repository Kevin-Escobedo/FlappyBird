#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

int main(int argc, char** argv)
{
    int windowX = 1200;
    int windowY = 600;

    if(argc == 3)
    {
        windowX = atoi(argv[1]);
        windowY = atoi(argv[2]);
    }

    sf::RenderWindow window(sf::VideoMode(windowX, windowY), "Flappy Bird", sf::Style::Titlebar | sf::Style::Close);

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

    return 0;
}

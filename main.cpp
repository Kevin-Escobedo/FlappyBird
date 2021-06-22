#include "FlappyBird.hpp"

int main(int argc, char** argv)
{
    int windowX = 1200;
    int windowY = 600;

    if(argc == 3)
    {
        windowX = atoi(argv[1]);
        windowY = atoi(argv[2]);
    }

    FlappyBird fb(windowX, windowY);
    fb.run();

    return 0;
}

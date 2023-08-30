#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Engine {
public:
    //functions
    Engine();

    void input();

    void draw();

    void run();


private:
    //functions

private:
    //Window
    sf::Vector2f resolution;
    sf::RenderWindow window;
    const unsigned int FPS = 60;
    static const sf::Time TimePerFrame;

};

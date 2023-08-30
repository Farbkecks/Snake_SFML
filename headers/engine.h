#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

#include <vector>

#include "snakesection.h"

class Engine {
public:
    //functions
    Engine();

    void input();

    void draw();

    void run();

    void newSanke();

    void addSankeSection();

private:
    //functions

private:
    //Window
    sf::Vector2f resolution;
    sf::RenderWindow window;
    const unsigned int FPS = 60;
    static const sf::Time TimePerFrame;
    std::vector<SnakeSection> snake;

};

#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

#include <vector>
#include <deque>

#include "snakesection.h"

class Engine {
    enum Directions {
        UP, RIGHT, DOWN, LEFT
    };
public:
    //functions
    Engine();

    void input();

    void addDirection(int newDirections);

    void update();

    void draw();

    void run();

    void newSanke();

    void addSankeSection();

private:
    //functions
    void handelFirstElementInQueue();

private:
    //Window
    sf::Vector2f resolution;
    sf::RenderWindow window;
    const unsigned int FPS = 60;
    static const sf::Time TimePerFrame;

    std::vector<SnakeSection> snake;
    int snakeDirection;
    std::deque<int> directionQueue; //queue for inputs
    int speed;
    sf::Time timeSinceLastMove;

};

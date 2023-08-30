#pragma once

#include <SFML/Graphics.hpp>

class SnakeSection {
public:
    //functions
    explicit SnakeSection(sf::Vector2f startPosition);

    sf::Vector2f getPostion();

    void setPostion(sf::Vector2f newPostion);

    sf::RectangleShape getShape();

    void update();

private:
    //functions

private:
    //variables
    sf::Vector2f position;
    sf::RectangleShape section;

};

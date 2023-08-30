#include "snakesection.h"

using namespace sf;
using namespace std;

SnakeSection::SnakeSection(sf::Vector2f startPosition) {
    //TODO remove magic number
    section.setSize(Vector2f(20, 20));
    section.setFillColor(Color::Green);
    section.setPosition(startPosition);
}

sf::Vector2f SnakeSection::getPostion() {
    return position;
}

void SnakeSection::setPostion(sf::Vector2f newPostion) {
    position = newPostion;
}

sf::RectangleShape SnakeSection::getShape() {
    return section;
}

void SnakeSection::update() {
    section.setPosition(position);
}





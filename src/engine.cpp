#include "engine.h"

using namespace sf;
using namespace std;

const sf::Time Engine::TimePerFrame = sf::seconds(1.f / 60.f);

Engine::Engine() {
    resolution = Vector2f(800, 600);
    window.create(VideoMode(resolution.x, resolution.y), "Nibbles", Style::Default);
    window.setFramerateLimit(FPS);
    newSanke();
}

void Engine::newSanke() {
    snake.clear();
    snake.emplace_back(Vector2f(100, 100));
    snake.emplace_back(Vector2f(80, 100));
    snake.emplace_back(Vector2f(60, 100));
}

void Engine::addSankeSection() {
    // Just add the section at the same position as the last section of the snake, it will follow normally
    Vector2f newSectionPostion = snake.at(snake.size() - 1).getPostion();
    snake.emplace_back(newSectionPostion);
}

void Engine::run() {
    while (window.isOpen()) {
        input();
        draw();
    }
}

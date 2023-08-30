#include "Engine.h"

using namespace sf;
using namespace std;

const sf::Time Engine::TimePerFrame = sf::seconds(1.f / 60.f);

Engine::Engine() {
    resolution = Vector2f(800, 600);
    window.create(VideoMode(resolution.x, resolution.y), "Nibbles", Style::Default);
    window.setFramerateLimit(FPS);
}

void Engine::run() {
    while (window.isOpen()) {
        draw();
    }
}


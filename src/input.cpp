#include "engine.h"

using namespace sf;
using namespace std;

void Engine::input() {
    Event event{};
    while (window.pollEvent(event)) {
        // Window closed
        if (event.type == Event::Closed) {
            window.close();
        }

        // handel keyboard input
        if (event.type == Event::KeyPressed) {
            if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                window.close();
            }
        }
    }
}

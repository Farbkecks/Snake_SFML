#include "engine.h"

using namespace sf;
using namespace std;

void Engine::draw() {
    window.clear(Color::Black);

    // Draw sanke sections
    for (auto &section: snake) {
        window.draw(section.getShape());
    }

    window.display();
}

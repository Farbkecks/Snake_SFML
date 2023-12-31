#ifndef NIBBLES_01_ENGINE_HPP
#define NIBBLES_01_ENGINE_HPP

#include "snakesection.hpp"
#include "apple.hpp"
#include "wall.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <vector>
#include <deque>
#include <fstream>

using namespace sf;
using namespace std;

class Engine {
public:
    enum class Direction {
        UP, RIGHT, DOWN, LEFT
    };
    enum class GameState {
        RUNNING, PAUSED, GAMEOVER
    };
private:
    // Window
    Vector2f resolution;
    RenderWindow window;
    const unsigned int FPS = 60;
    static const Time TimePerFrame;

    vector<SnakeSection> snake;

    Direction snakeDirection;
    deque<Direction> directionQueue; // queue for direction key presses
    int speed;
    int sectionsToAdd; // how many sections to add to the snake
    int applesEatenThisLevel;
    int applesEatenTotal;
    unsigned long long int score;

    Apple apple;

    vector<Wall> wallSections;
    int currentLevel;
    int maxLevels;
    vector<String> levels;

    Font mainFont;
    Text titleText;
    Text applesEatenText;
    Text currentLevelText;
    Text scoreText;
    Text gameOverText;
    Text pressEnterText;

    Time timeSinceLastMove;

    GameState currentGameState;
    GameState lastGameState; // For storing the last state the game was in when pausing.

public:

    Engine();

    void input();

    void addDirection(Direction newDirection);

    void update();

    void draw();

    static void setupText(Text *textItem, const Font &font, const String &value, int size, Color colour);

    void newSnake();

    void addSnakeSection();

    void moveApple();

    void checkLevelFiles();

    void loadLevel(int levelNumber);

    void beginNextLevel();

    void startTheGame();

    void togglePause();

    // The main loop will be in the run function
    void run();

};


#endif //NIBBLES_01_ENGINE_HPP

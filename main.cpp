// Copyright 2024 Jessica Vu

#include <iostream>
#include "PTree.hpp"

const int HEIGHT = 700;
const int WIDTH = 900;

int main(int argc, char* argv[]) {
    double base_len = atof(argv[1]);
    int depth = atoi(argv[2]);

    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Pythagoras Tree");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        draw_Ptree(window, sf::Vector2f(WIDTH/2, HEIGHT - base_len/2 - 20), base_len, depth, 1);
        window.display();
    }

    return 0;
}

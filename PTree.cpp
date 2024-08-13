// Copyright 2024 Jessica Vu

#include "PTree.hpp"
#include <cmath>

void draw_Ptree(sf::RenderTarget& window, sf::Vector2f center, double length, int depth, int type) {
    if (depth >= 0) {
        sf::RectangleShape square(sf::Vector2f(length, length));
        square.setPosition(center);
        square.setOrigin(square.getSize().x / 2, square.getSize().y / 2);
        square.setFillColor(sf::Color::Transparent);
        square.setOutlineThickness(2);
        square.setOutlineColor(sf::Color(21, 71, 52));
        double len_child = (sqrt(2)/2)*length;

        if (type == 1) {
            square.rotate(0);
            window.draw(square);
            sf::Vector2f left_child(center.x - length/2, center.y - length);
            sf::Vector2f right_child(center.x + length/2, center.y - length);
            draw_Ptree(window, left_child, len_child, depth-1, 8);
            draw_Ptree(window, right_child, len_child, depth-1, 7);
        } else if (type == 2) {
            square.rotate(0);
            window.draw(square);
            sf::Vector2f left_child(center.x - length, center.y + length/2);
            sf::Vector2f right_child(center.x - length, center.y - length/2);
            draw_Ptree(window, left_child, len_child, depth-1, 5);
            draw_Ptree(window, right_child, len_child, depth-1, 8);
        } else if (type == 3) {
            square.rotate(0);
            window.draw(square);
            sf::Vector2f left_child(center.x - length/2, center.y + length);
            sf::Vector2f right_child(center.x + length/2, center.y + length);
            draw_Ptree(window, left_child, len_child, depth-1, 5);
            draw_Ptree(window, right_child, len_child, depth-1, 6);
        } else if (type == 4) {
            square.rotate(0);
            window.draw(square);
            sf::Vector2f left_child(center.x + length, center.y + length/2);
            sf::Vector2f right_child(center.x + length, center.y - length/2);
            draw_Ptree(window, left_child, len_child, depth-1, 6);
            draw_Ptree(window, right_child, len_child, depth-1, 7);
        } else if (type == 5) {
            square.rotate(45);
            window.draw(square);
            sf::Vector2f left_child(center.x - (3*len_child)/2 , center.y + len_child/2);
            sf::Vector2f right_child(center.x - len_child/2 , center.y + (3*len_child)/2);
            draw_Ptree(window, left_child, len_child, depth-1, 2);
            draw_Ptree(window, right_child, len_child, depth-1, 3);
        } else if (type == 6) {
            square.rotate(45);
            window.draw(square);
            sf::Vector2f left_child(center.x + len_child/2, center.y + (3*len_child)/2);
            sf::Vector2f right_child(center.x + (3*len_child)/2, center.y + len_child/2);
            draw_Ptree(window, left_child, len_child, depth-1, 3);
            draw_Ptree(window, right_child, len_child, depth-1, 4);
        } else if (type == 7) {
            square.rotate(45);
            window.draw(square);
            sf::Vector2f left_child(center.x + len_child/2 , center.y - (3*len_child)/2);
            sf::Vector2f right_child(center.x + (3*len_child)/2, center.y - len_child/2);
            draw_Ptree(window, left_child, len_child, depth-1, 1);
            draw_Ptree(window, right_child, len_child, depth-1, 4);
        } else if (type == 8) {
            square.rotate(45);
            window.draw(square);
            sf::Vector2f left_child(center.x - (3*len_child)/2 , center.y - len_child/2);
            sf::Vector2f right_child(center.x - len_child/2 , center.y - (3*len_child)/2);
            draw_Ptree(window, left_child, len_child, depth-1, 2);
            draw_Ptree(window, right_child, len_child, depth-1, 1);
        }
    }
}

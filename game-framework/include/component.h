#pragma once

#include <SFML/Graphics.hpp>

// this is just for testing porpuses it will get remove in future commits
void createWindow() {
    sf::Window window(sf::VideoMode(560, 720), "Pac-man clone");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }
}
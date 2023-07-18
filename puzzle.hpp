#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <array>
#include <iostream>

class Puzzle {
  std::shared_ptr<sf::RenderWindow> window;
  std::shared_ptr<sf::Event> event;

  sf::Texture texture;
  int w, n, x, y, dx, dy;
  std::array<std::array<int, 6>, 6> grid;
  std::array<sf::Sprite, 17> sprite;

  protected:
    void events();
    void draw();
    void logic();
  
  public:
    Puzzle(const std::vector<int>&);
    void run();
};

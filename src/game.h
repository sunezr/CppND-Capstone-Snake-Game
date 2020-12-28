#ifndef GAME_H
#define GAME_H

#include <random>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "snake.h"

class Game {
 public:
  Game(std::size_t grid_width, std::size_t grid_height);
  void Run(Controller &controller, Renderer &renderer,
           std::size_t target_frame_duration);
  int GetScore() const;  // get game score
  int GetSize() const;  // get size of snake

 private:
  Snake snake;
  SDL_Point food;  // appear randomly each time it is eaten
  int _level;  // level represent the update ratio of speed, which is read from parameters

  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  int score{0};  // record the times of food eaten by snake

  void PlaceFood();  // place food randomly
  void Update(const Controller &controller);
};

#endif
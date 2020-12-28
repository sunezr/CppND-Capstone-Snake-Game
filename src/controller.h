#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

class Controller {
 public:
  Controller(): _pause(false) {}
  void HandleInput(bool &running, Snake &snake);
  void ChangeStatus();
  bool GetStatus() const;

 private:
  bool _pause;
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;

};

#endif
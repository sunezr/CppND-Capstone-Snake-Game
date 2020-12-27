#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

class Controller {
 public:
  Controller(): _changeStatus(false) {}
  void HandleInput(bool &running, Snake &snake);
  void ChangeStatus();
  bool GetStatus() const;

 private:
  bool _changeStatus;
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;

};

#endif
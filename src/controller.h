#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

class Controller {
 public:
  Controller(): _pause(false), _restart(false) {}
  void HandleInput(bool &running, Snake &snake);
  void ChangePauseState();
  bool GetPauseState() const;
  void SetRestartState(bool &running, bool alive);
  bool GetRestartState() const;

 private:
  bool _pause;
  bool _restart;
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;

};

#endif
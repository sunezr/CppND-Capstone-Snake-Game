#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

class Controller {
 public:
  Controller(): _pause(false), _restart(false) {}
  void HandleInput(bool &running, Snake &snake);
  void ChangePauseState();  // change _pause to !_pause
  bool GetPauseState() const;
  void SetRestartState(bool &running, bool alive); // set _restart, if true, stop running
  bool GetRestartState() const;

 private:
  bool _pause;  // control the pause state of game
  bool _restart;  // game will restart in while loop in main if true
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;
};

#endif
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

class Controller {
 public:
<<<<<<< HEAD
  void HandleInput(bool &running, Snake &lsnake) const;

=======
  void HandleInput(bool &running, Snake &snake) const;
  void HandleInputPlayer2(bool &running, Snake &snake) const;
  
>>>>>>> tmp
 private:
  void ChangeDirection(Snake &snake, Snake::Direction input, Snake::Direction opposite) const;
};

#endif
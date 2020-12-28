# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## New Features

Here are new features are add to this project.

- A input file `parameters` is created to provide parameters. And a `helper.h` is created to read input data.
- There are 2 input parameters(`Bounded` and `Level`):
  -  `Bounded` decides whether there are walls at boundary. If there is a wall, then snake will die when crossing. 
  -  `Level` decides the update rate of speed at each time the snake eats the food.
- The game can be paused and resumed both by keyboard P.
- The game can be restart when it is paused or snake is not alive.
- The `WindowTitle` is modified to show the usage of keyboard and more output is add to show the game status.

## Rubric Points

### Loops, Functions, I/O

- A variety of control structures are used in the project. The project code is clearly organized into functions.
- The project reads data from an external file as part of the necessary operation of the program. See class constructor in `game.cpp` and `snake.h`
- The project accepts input from a user as part of the necessary operation of the program.

### Object Oriented Programming

- The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks. 
- All class data members are explicitly specified as public, protected, or private.
- Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.
- One function is declared with a template that allows it to accept a generic parameter. See `helper.h`.

### Memory Management

- At least two variables are defined as references, or two functions use pass-by-reference in the project code.
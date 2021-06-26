#include <iostream>
#include <time.h>
#include "ZombieHorde.hpp"

int main ()
{
  std::srand(time(nullptr));
  int n;

  std::cout << "Input count of Zombie: ";
  std::cin >> n;
  std::cout << std::endl;
  if (n < 0)
    return (1);
  ZombieHorde zombies(n);
  zombies.brain();
  return 0;
} 
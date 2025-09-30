#include "Zombie.hpp"

int main()
{
    Zombie* a = newZombie("hamza");
    a->announce();
    randomChump("abba");
    delete a;
}

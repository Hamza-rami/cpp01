#include "Zombie.hpp"

int main()
{
    Zombie* a = newZombie("Hamza");
    a->announce();
    randomChump("Rami");
    delete a;
}

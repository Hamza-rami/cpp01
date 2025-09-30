#include "Harl.hpp"


Harl::Harl()
{
}

Harl::~Harl()
{
}
void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int getLevel(std::string level) 
{
    if (level == "DEBUG")   
        return 0;
    if (level == "INFO")
        return 1;
    if (level == "WARNING")
        return 2;
    if (level == "ERROR")
        return 3;
    return -1;
}

void Harl::complainFilter(std::string level) 
{
    int index = getLevel(level);

    switch (index) {
        case 0:
            std::cout << "[ DEBUG ]\n";
            debug();
            // fall through
        case 1:
            std::cout << "[ INFO ]\n";
            info();
            // fall through
        case 2:
            std::cout << "[ WARNING ]\n";
            warning();
            // fall through
        case 3:
            std::cout << "[ ERROR ]\n";
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}

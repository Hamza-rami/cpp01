#include "Replace.hpp"

int main(int ac, char* av[])
{
    if (ac != 4)
    {
        std::cerr << "Usage: ./replace filename s1 s2\n";
        return 1;
    }

    std::string content = readFile(av[1]);
    if (content.empty())
        return 1;

    content = replace_str(content, av[2], av[3]);

    std::string outputName = std::string(av[1]) + ".replace";
    if (!writeFile(outputName.c_str(), content))
        return 1;

    return 0;
}

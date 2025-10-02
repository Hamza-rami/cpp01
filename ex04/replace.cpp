#include "Replace.hpp"


std::string replace_str(const std::string& line, const std::string s1, const std::string s2)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        result += line.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += line.substr(pos);
    return result;
}


std::string readFile(const char* filename)
{
    std::ifstream inputFile(filename);
    
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening input file!\n";
        return "";
    }
    
    std::string line;
    std::getline(inputFile, line, '\0');
    inputFile.close();
    return line;
}

bool writeFile(const char* filename, const std::string& content)
{
    std::ofstream outputFile(filename);
    if (!outputFile.is_open())
    {
        std::cerr << "Error opening output file!\n";
        return false;
    }

    outputFile << content;
    outputFile.close();
    return true;
}
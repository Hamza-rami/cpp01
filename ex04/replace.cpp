#include "Replace.hpp"


std::string replace_str(std::string line, std::string s1, std::string s2)
{
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) 
    {
        line.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
    return line;
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
    std::string all_line;
    bool firstLine = true;

    while (std::getline(inputFile, line)) 
    {
        if (!firstLine)
            all_line += "\n";
        all_line += line;
        firstLine = false;
    }

    inputFile.close();
    return all_line;
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
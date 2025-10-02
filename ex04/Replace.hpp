#ifndef Replace_HPP
#define Replace_HPP

#include <iostream>
#include <fstream> 

std::string readFile(const char* filename);
bool writeFile(const char* filename, const std::string& content);
std::string replace_str(const std::string& line, const std::string s1, const std::string s2);

#endif
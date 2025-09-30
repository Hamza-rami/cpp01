#pragma once

#include <iostream>
#include <fstream> 

std::string readFile(const char* filename);
bool writeFile(const char* filename, const std::string& content);
std::string replace_str(std::string line, std::string s1, std::string s2);
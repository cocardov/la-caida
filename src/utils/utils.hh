#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <thread>
#include <string>
#include <chrono>

std::ostream &operator<<(std::ostream &stream, const char *text);

std::ostream &operator<<(std::ostream &stream, const std::string &text);

#endif
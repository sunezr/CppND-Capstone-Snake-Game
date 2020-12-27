#ifndef HELPER_H
#define HELPER_H

#include "helper.h"
#include <string>
#include <fstream>
#include <sstream>

template<typename T>
T readParameter(std::string parameterName) {
    std::string filePath = "../parameters";
    std::string line;
    std::string key;
    T value;
    std::ifstream filestream(filePath);
    if (filestream.is_open()) {
        while (std::getline(filestream, line)) {
            std::istringstream linestream(line);
            if (linestream >> key >> value) {
                if (key == parameterName + ':') {
                    break;
                }
            }
        }
    }
    return value;
}


#endif

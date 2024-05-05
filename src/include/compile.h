#pragma once
#include <string>

using namespace std;

class Compile
{
    private:
    /* data */
    public:
        Compile(string filename);
        std::string ReadFile(string filename);
};

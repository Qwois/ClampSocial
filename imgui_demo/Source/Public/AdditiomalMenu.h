#pragma once

#include "imgui.h"
#include <random>
#include <string>
#include <ctime>


class AdditionalMenuTest 
{
private:
    struct RandomGenerator
    {
        std::mt19937 rng;
        std::uniform_int_distribution<int> intDist;
        std::uniform_int_distribution<int> charDist;

        RandomGenerator()
            : rng(static_cast<unsigned int>(std::time(nullptr))),
              intDist(0, 100),
              charDist(0,35)
        {}

        int generateRandomNumber()
        {
            return intDist(rng);
        }

        std::string GeneratedRandomString(int lenght_t_x)
        {
            std::string result_t_x;
            for (int i = 0; i < lenght_t_x; + + i)
            {
                int randValue = charDist(rng);
                if (randValue < 10)
                {
                    result_t_x += "0";
                }
                else
                {
                    char letter_t_x = 'a' + (randValue - 10);
                    result_t_x += letter_t_x;
                }
            }
            return result_t_x;
        }
    };

public:
    void Construct_A_Menu();
};

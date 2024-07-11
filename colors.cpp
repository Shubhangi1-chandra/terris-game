#include "colors.h"

const Color darkGrey = {26, 31, 40, 255};
const Color green = {47, 230, 23, 200};
const Color red = {212, 18, 18, 200};
const Color orange = {206, 116, 17, 200};
const Color yellow = {237, 234, 4, 200};
const Color purple = {186, 0, 247, 200};
const Color cyan = {31, 234, 209, 200};
const Color blue = {20, 64, 216, 200};
const Color lightBlue = {50, 85, 162, 200};
const Color darkBlue = {30, 44, 127, 200};

std::vector<Color> GetCellColors()
{
    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}
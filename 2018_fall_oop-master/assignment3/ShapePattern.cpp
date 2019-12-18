#include "ShapePattern.h"
#include <string>
#include <iostream>

using namespace std;

ShapePattern::ShapePattern()
{
    pattern='*';
}

void ShapePattern::set_pattern(char c)
{
    pattern=c;
}

char ShapePattern::get_pattern() const
{
    return pattern;
}

void ShapePattern::printPattern()
{
    
}

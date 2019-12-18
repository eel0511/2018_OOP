#include "RectanglePattern.h"
#include <string>
#include <iostream>

using namespace std;

RectanglePattern::RectanglePattern()
{

}

RectanglePattern::RectanglePattern(int x,int y)
{
    length=x;
    width=y;
}

void RectanglePattern::set_length(int x)
{
    length=x;
}

void RectanglePattern::set_width(int y)
{
    width=y;
}

int RectanglePattern::patternHelper(int l,int w)
{
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<get_pattern();
        }
        cout<<endl;
    }
    return l;
}

void RectanglePattern::printPattern()
{
    if(length<0)
    {
        cout<<"Invalid size!"<<endl;
    }
    else{
        cout<<"The Rectangle Pattern: (length = "<<length<<": width = "<<width<<")"<<endl;
        patternHelper(length, width);
    }
}

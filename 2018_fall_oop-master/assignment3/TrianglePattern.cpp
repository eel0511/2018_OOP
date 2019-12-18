#include "TrianglePattern.h"
#include <string>
#include <iostream>

using namespace std;

TrianglePattern::TrianglePattern()
{

}

TrianglePattern::TrianglePattern(int x)
{
    height=x;
}

void TrianglePattern::set_height(int x)
{
    height=x;
}

int TrianglePattern::patternHelper(int h)
{
    for(int i=0;i<h;i++)
    {
        for(int j=i;j<h;j++)
        {
            cout<<get_pattern();
        }
        cout<<endl;
        
    }
    return h;
}

void TrianglePattern::printPattern()
{
    cout<<"The Right Triangle Pattern: (height = "<<height<<")"<<endl;
    patternHelper(height);
}

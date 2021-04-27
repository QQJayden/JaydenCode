#include <iostream>
#include "all_algorithm.h"

using namespace std;

int main()
{
    
    WindowMaxArray test;
    std::vector<int> input = {4,3,5,4,3,3,6,7};
    test.genMaxArray(input);
    return 0;
}
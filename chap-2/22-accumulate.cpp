#include <iostream>
#include <vector>
#include <numeric>
using std::cout;
using std::vector;
using std::accumulate;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.
int AdditionFunction(const vector<int> &v)
{
    return accumulate(v.begin(), v.end(), 0);
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}

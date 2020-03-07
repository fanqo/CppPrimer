#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<vector<int>> ivec;
    
    // vector<string> svec = ivec;  // vector<int> cannot trans to string

    vector<string> svec (10, "null");

    return 0;
}

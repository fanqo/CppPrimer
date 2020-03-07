#include <iostream>
using std::cout;
using std::endl;

#include <map>
using std::map;

#include <string>
using std::string;

#include <utility>
using std::pair;

int main()
{
    map<string, size_t> word_count {pair<string, size_t>{"a", 2},
                                    pair<string, size_t>{"b", 3}};

    map<string, size_t>::iterator map_it = word_count.begin();
    cout << map_it->first;
    cout << " " << map_it->second;
    cout << endl;
    
    ++map_it->second;
    cout << map_it->first;
    cout << " " << map_it->second;
    cout << endl;

    return 0;
}

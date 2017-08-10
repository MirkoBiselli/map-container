/*
 * main.cpp
 *
 *  Created on: Aug 10, 2017
 *      Author: mirko
 */

/*
 * main.cpp
 *
 *  Created on: Aug 8, 2017
 *      Author: mirko
 */

// map::insert (C++98)
#include <iostream>
#include <map>
using namespace std;

int main()
{
    std::map<char, string> mymap;

    // first insert function version (single parameter):
    mymap.insert(std::pair<char, string>('a', "aaaaaa"));

    {
        string zPayload = string("dddddd");
        mymap.insert(std::pair<char, string>('z', zPayload));
    }

    {
        std::pair<std::map<char, string>::iterator, bool> ret;
        ret = mymap.insert(std::pair<char, string>('z', "r"));
        if (ret.second == false)
        {
            std::cout << "element " << ret.first->first << " already existed";
            std::cout << " with a value of " << ret.first->second << '\n';

            // update z payload
            ret.first->second = "zzzzzzzz";
        }
    }

    // second insert function version (with hint position):
    std::map<char, string>::iterator it = mymap.begin();
    mymap.insert(it, std::pair<char, string>('b', "bbbb"));  // max efficiency inserting
    mymap.insert(it, std::pair<char, string>('c', "cccc"));  // no max efficiency inserting

    // showing contents:
    std::cout << "mymap contains:\n";
    for (it = mymap.begin(); it != mymap.end(); it++)
        std::cout << it->first << " => " << it->second << '\n';

    return 0;
}


#include <iostream>
#include <list>
#include <numeric>  // https://devdocs.io/cpp/header/numeric
#include <algorithm> // https://devdocs.io/cpp/header/algorithm

int main()  {
    std::list<int> theList{1, 2, 3, 4, 5};

    std::cout << "min:" << *std::min_element(theList.begin(), theList.end()) << std::endl;
    std::cout << "max:" << *std::max_element(theList.begin(), theList.end()) << std::endl;

    std::cout << accumulate(theList.begin(), theList.end(), 0) << std::endl;

}
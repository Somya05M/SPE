#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Obtain an iterator pointing to the third element
    auto it = vec.begin() ;

    // Use std::next to get an iterator pointing to the next element
    auto nextIt = std::next(it);

    // Print the value of the next element
    std::cout << "Next element: " << *nextIt << std::endl;

    return 0;
}

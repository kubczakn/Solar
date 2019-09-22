/**
 * lab1.cpp
 * 
 * <#Nathan Kubczak#>
 * <#kubczakn#>
 * 
 * EECS 183:Lab 1
 *
 * <#Create a "Hello World" C++ Program With a Puppies Add On#>
 */

#include <iostream>
using namespace std;

int main() {
    int initialPugs = 20;
    int adoptedPugs;
    int remainingPugs;

    cout << "Pug Adoption Program" << endl;
    cout << "How many Pugs will be adopted today? ";
    cin >> adoptedPugs;
    remainingPugs = initialPugs - adoptedPugs;
    cout << "Pugs Remaining: " << remainingPugs;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

// Function to explain Pair usage
void explanPair() {
    // A simple pair of integers
    pair<int, int> p1 = {1, 2};
    cout << p1.first << " " << p1.second << endl;  // Outputs: 1 2

    // Nested pair, pair of pair
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; 
    // Outputs: 1 3 4

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[1].second << " " << arr[2].first << endl;
    // Outputs: 1 4 5
}

// Function to explain Vector usage
void explanVector() {
    // Simple vector of integers
    vector<int> v;

    // Adding elements to the vector
    v.push_back(1);   // Adds 1 to the vector
    v.emplace_back(2); // Adds 2 to the vector (faster than push_back for certain cases)

    // Vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});     // Adds a pair (1, 2) to the vector
    vec.emplace_back(1, 2);    // Adds a pair (1, 2) to the vector (faster than push_back)

    // Vector initialization: 5 elements, all initialized to 100
    vector<int> v100(5, 100); // [100, 100, 100, 100, 100]

    // Vector initialization with size 5 (default-initialized elements, 0 by default for ints)
    vector<int> v0(5); // [0, 0, 0, 0, 0]

    // Copy constructor, copying v1 to v2
    vector<int> v1(5, 20);  // [20, 20, 20, 20, 20]
    vector<int> v2(v1);     // v2 is now a copy of v1

    // Iterating using iterators   
    vector<int>::iterator it = v1.begin();  // Iterator to the first element
    it++;  // Move to the second element
    cout << *(it) << " ";  // Outputs: 20

    it = it + 2;  // Move iterator 2 positions forward
    cout << *(it) << " ";  // Outputs: 20

    // An iterator acts as a pointer to the element in the container. You can dereference it to access the element, and you can increment or decrement it to move between elements.

    cout << endl;
}

int main() {
    // Calling function to explain Pair usage
    //explanPair();
    
    // Calling function to explain Vector usage
    explanVector();
    
    return 0;
}

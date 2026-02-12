#include<bits/stdc++.h>
using namespace std;

void explainPair();
void explainVector();
void explainIterator();

int main() {
    cout<< "Pairs: " <<endl;
    explainPair();
    cout<< "\nVectors: " <<endl;
    explainVector();
    cout<< "\nIterators: " <<endl;
    explainIterator();
    
    return 0;
}

// Pair : stores a pair of values
void explainPair() {

    pair<int, int> p = {1, 3};
    cout<< p.first << " " << p.second <<endl;
    
    pair<int, pair<int, int>> p2= {1, {3, 5}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first <<endl;

    //Can be treated as an Data Type
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}}; 
    cout << arr[1].second <<endl;
}

// Vector : it is "Dynamic" in nature, The size can be modified where as an array can't.
void explainVector() {

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> vec1(5, 100);  // {100, 100, 100, 100, 100}
    vector<int> vec2(5);   // {0, 0, 0, 0, 0} default val. depends on compiler
    vec2.push_back(1); // increased the size to 6 and added 1 as last value

    vector<int> v1(5, 20);
    vector<int> v2(v1); // copy of v1

    cout<< vec2[5] <<endl; // garbage value
    cout<< v1[0] << " " << v1[1] <<endl;
}

//  Iterator : 
void explainIterator() {
    vector<int> vec = {10, 20, 30, 40, 50, 60};
    vector<int>::iterator it1 = vec.begin(); // begin() points to the "Memory Address" of first element of the vector.

    cout<< *(it1) << " "; // 10
    it1++;
    cout<< *(it1) << " "; // 20
    it1 += 2;
    cout<< *(it1) << " "; // 40

    vector<int>::iterator it2 = vec.end(); // end() points to the "Memory Address" just after the last element of the vector.
    it2--;
    cout<<endl << *(it2) <<endl; // 60
    
    cout<< vec[0] << " " << vec.at(1) <<endl; // 10 20
    cout<< vec.front() << " " << vec.back() <<endl; // 10 60

    // Loop through vector
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<<endl;
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<<endl;
    for(auto it : vec) {
        cout<< it << " ";
    }
    cout<<endl;

    // Delete an element 
    vec.erase(vec.begin() + 1); // deletes the element at index 1 (20)
    vec.erase(vec.begin() + 1, vec.end() - 2); // deletes [start, end) excludes end.]
    for(auto it : vec) {
        cout<< it << " ";
    }
    cout<<endl;
}

// Insert function





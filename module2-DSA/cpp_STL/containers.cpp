#include<bits/stdc++.h>
using namespace std;

void explainPair();
void explainVector();
void explainIterator();
void explainInsert();
void explainStack();

int main() {
    cout<< "Pairs: " <<endl;
    explainPair();
    cout<< "\nVectors: " <<endl;
    explainVector();
    cout<< "\nIterators: " <<endl;
    explainIterator();
    cout<< "\nInsert function: " <<endl;
    explainInsert();
    cout << "\nStack: " <<endl;
    explainStack();
    
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

    // using auto keyword
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<<endl;

    // range-based for loop
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
void explainInsert() {
    vector<int> v2(2, 100); // {100, 100}
    v2.insert(v2.begin(), 300); // {300, 100, 100}
    v2.insert(v2.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy2(2, 50); // {50, 50}
    v2.insert(v2.begin(), copy2.begin(), copy2.end()); // {50, 50, 300, 10, 10, 100, 100}

    cout << "size of v2 is: " << v2.size() <<endl; // 7

    v2.pop_back(); // removes the last element
    
    vector<int> v3(2, 200); // {200, 200}
    v2.swap(v3); // v2 becomes {200, 200} and v3 becomes {50, 50, 300, 10, 10, 100}

    v2.clear(); // removes all the elements from v2, size becomes 0 but capacity remains unchanged.
    cout << v2.empty();
}

// List : it is a "Doubly Linked List" in C++. It is not stored in contiguous memory locations like vector, so it doesn't support random access. It provides fast insertion and deletion at any position.
void explainList() {
    list<int> ls;
    ls.push_back(1); // {1}
    ls.emplace_back(2); // {1, 2}

    ls.push_front(3); // {3, 1, 2}
    ls.emplace_front(4); // {4, 3, 1, 2}    
    
    //rest tif the fucnitons are sililar to vector function
    // begin, end, insert, rend, rbegin, size, empty, clear, swap, pop_back, pop_front, erase 
}

// Deque : it is "Double Ended Queue" in C++. 
// It is stored in contiguous memory locations like vector, so it supports random access. 
// It provides fast insertion and deletion at both ends.
void explainDeque() {
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}

    dq.push_front(3); // {3, 1, 2}
    dq.emplace_front(4); // {4, 3, 1, 2}

    dq.pop_back(); // {4, 3, 1}
    dq.pop_front(); // {3, 1}

        //rest of the functions are similar to vector function
}

// Stack: it is a "Last In First Out" (LIFO) data structure in C++. It provides fast insertion and deletion at the top of the stack.
void explainStack() {

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {1, 2}       
    st.push(3); // {1, 2, 3}
    st.push(4); // {1, 2, 3, 4}
    st.emplace(5); // {1, 2, 3, 4, 5}

    cout << st.top() <<endl; // prints 5 " ** st[i] ** " is invalid!
    st.pop();
    cout << st.top() <<endl;
    cout << st.size() <<endl;
    cout << st.empty() <<endl;

    stack<int> st1, st2;
    st1.swap(st2);
}

// Queue: it is a "First In First Out" (FIFO) data structure in C++. It provides fast insertion at the back and deletion at the front of the queue.
void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(3); // {1, 2, 3}

    q.back() += 5; // {1, 2, 8}
    cout << q.back() <<endl; // prints 8
    q.pop(); // {2, 8}
    cout << q.front() <<endl; // prints 2
}
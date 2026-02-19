#include<bits/stdc++.h>
using namespace std;

void explainPair();
void explainVector();
void explainIterator();
void explainInsert();
void explainStack();
void explainQueue();
void explainPQ();
void explainSet();
void explainMap();

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
    cout << "\nSet: " <<endl;
    explainSet();
    cout << "\nMap: " <<endl;
    explainMap();
    
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

// Priority Queue: it is a data structure that provides fast access to the largest (or smallest) element. It is implemented as a max-heap by default, but can be implemented as a min-heap by using a custom comparator.
void explainPQ() {

    // Max-Heap
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}   
    pq.push(8); // {8, 5, 2}
    pq.emplace(1); // {8, 5, 2, 1}

    cout << pq.top() <<endl; // prints 8
    pq.pop(); // {5, 2, 1}
    cout << pq.top() <<endl; // prints 5

    // size, swap and empty functions are similar to stack and queue.

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(5); // {5}
    minpq.push(2); // {2, 5}
    minpq.push(8); // {2, 5, 8}
    minpq.emplace(1); // {1, 2, 5, 8}
    
    cout << minpq.top() <<endl; // prints 1
    minpq.pop(); // {2, 5, 8}
    cout << minpq.top() <<endl; // prints 2
}

// Set: it is a data structure that stores "unique elements in sorted order". It provides fast access to the elements and allows for efficient insertion and deletion.
void explainSet() {
    set<int> s; 
    s.insert(1); // {1}
    s.emplace(2); // {1, 2}
    s.insert(2); // {1, 2} duplicate element, will not be added
    s.insert(4); // {1, 2, 4}
    s.insert(3); // {1, 2, 3, 4}
    s.erase(3); // {1, 2, 4}
    s.insert(5); // {1, 2, 4, 5}

    // begin(), end(), size(), empty(), swap() functions are similar to vector and list.

    // {1, 2, 4, 5}
    auto it = s.find(2); // returns an iterator to the element if found, otherwise returns s.end()
    cout << *it <<endl; // prints 2
    
    auto it0 = s.find(6); // returns s.end() since 6 is not found in the set
    int cnt = s.count(2); // will always return 1 if present else 0 since set stores unique elements

    auto it1 = s.find(2);
    auto it2 = s.find(5); 
    s.erase(it1, it2); // deletes the elements in the range [it1, it2) i.e. deletes 2 and 4

    // {1, 5}
    for(auto it3 : s) {
        cout << it3 << " ";
    }

    set<int> s1 = {2, 4, 6, 8, 10, 12};

    auto it_l = s1.lower_bound(6); // returns an iterator to the first element that is greater than or equal to 5, i.e. 6
    auto it_u = s1.upper_bound(6); // returns an iterator to the first element that is greater than 5, i.e. 6

    cout << endl << *it_l << " " << *it_u <<endl; // prints 6 6
}

// MultiSet: it is a data structure that stores "multiple occurrences of elements in sorted order". 
// It provides fast access to the elements and allows for efficient insertion and deletion.
void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1} duplicate element, will be added    
    ms.insert(1); // {1, 1, 1} 
    ms.insert(2); // {1, 1, 1, 2}
    ms.insert(2); // {1, 1, 1, 2, 2} sorted order but duplicates are allowed!

    int cnt = ms.count(1); // returns the occurrence, in this case it will return 3

    ms.erase(1); // deletes all the occurrences of 1, ms becomes {2, 2}

    // single occurrence of 2 will be deleted
    ms.erase(ms.find(2)); // ms becomes {2}

    multiset<int> ms1 = {1, 2, 3, 4, 5, 6};
    ms.erase(ms1.find(2), ms1.find(6)); // deletes the elements in the range [2, 6) i.e. deletes 2, 3, 4, 5

     for(auto it : ms1) {
        cout << it << " ";
    }
}

void explainUSet() {
    unordered_set<int> us;
    us.insert(1); // {1}
    us.insert(1); // {1} duplicate element, will not be added   
    us.insert(2); // {1, 2}
    us.insert(6); // {1, 2, 6}
    us.insert(5); // {1, 2, 6, 5} not in sorted order
    us.insert(3); // {1, 2, 6, 5, 3} not in sorted order 

    // except lower_bound and upper_bound functions, all other functions are similar to set.]
    // it has better time complexity than set in most of the cases, 
    // excpet for some when collisons occur.
}

// Map: it is a data structure that stores "key-value pairs". 
// It provides fast access to the values based on the keys and allows for efficient insertion and deletion. 
// Keys are " unique and sorted " by default.
void explainMap() {

    map<int, int> m; // {key, value} pairs, keys are unique and sorted by default
    m[1] = 100; // {1: 100}
    m[2] = 200; // {1: 100, 2: 200}
    m.emplace(3, 300); // {1: 100, 2: 200, 3: 300}
    m.insert({4, 400}); // {1: 100, 2: 200, 3: 300, 4: 400}

    for(auto it : m) {
        cout << it.first << " " << it.second << ","; // prints key and value pairs
    }

    // -------------------
    map<pair<int, int>, int> m2; // { {key1, key2} : value } pairs, keys are unique and sorted by default
    m2[ {1, 2} ] = 100; // { {1, 2} : 100 }
    m2[ {3, 4} ] = 200; // { {1, 2} : 100, {3, 4} : 200 }

    cout <<endl << m2[{3,4}] <<endl; // prints 200

    // -------------------
    map<int, pair<int, int>> m3; // { key : {value1, value2} } pairs, keys are unique and sorted by default
    m3[1] = {100, 200}; // { 1 : {100, 200} }
    m3.insert({2, {300, 400}}); // { 1 : {100, 200}, 2 : {300, 400} }
    m3.emplace(3, make_pair(500, 600)); // { 1 : {100, 200}, 2 : {300, 400}, 3 : {500, 600} }
    cout << m3[2].first << " " << m3[2].second <<endl; // prints 300 400
     
    // { 1 : {100, 200}, 2 : {300, 400}, 3 : {500, 600} }  
    auto it = m3.find(3); // returns an iterator to the element if found, otherwise returns m3.end()
    cout << (*it).first << " " << (*it).second.first << " " << (*it).second.second <<endl; // prints 3 {500, 600}
    cout << it->first << " " << it->second.first << " " << it->second.second <<endl; // prints 3 {500, 600}

    for(auto i : m3) {
        cout << i.first << " " << i.second.first << " " << i.second.second <<endl;
    }

}

void explainMultiMap() {
    // similar to map but "allows duplicate keys",
    // values are "sorted" by default based on keys.
}

void explainUMqp() {
    // similar to unordered_set, it does not store the key-value pairs in sorted order,
    // but it provides faster access to the values based on the keys in most of the cases.
}

// --- EXTRAS ---

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) true;
    if(p1.second > p2.second) false;
    
    if(p1.second == p2.second) {
        if(p1.first > p1.first) return true;
        else return false;
    }
}

void explianExtra() {

    // Sort function
    int a[] = {8, 9, 7, 3, 5, 2, 6, 1};
    
    sort(a, a+8);
    sort (a+2, a+6); // sorts the elements in the range [a+2, a+6) i.e. sorts 7, 3, 5, 2
    sort(a, a+8, greater<int>()); // sorts in descending order
    int max = *max_element(a, a+8); // returns the maximum element in the array, in this case it will return 9

    // for vector
    // sort(v.begin(), v.end());

    pair<int, int> arr[] = {{1, 2}, {3, 1}, {2, 3}};
    sort(arr, arr+3); // sorts based on the first element of the pair, if the first elements are same then it sorts based on the second element of the pair.

    // sort it according to second element, 
    // if second elements are same then 
    // sort it according to first element in descending order.
    sort(arr, arr+3, comp); 
    // arr becomes {{3, 1}, {1, 2}, {2, 3}}

    int num = 7; // 0111 in binary
    cout << __builtin_popcount(num) <<endl; // returns the number of set bits: 3 in this case
    num = 6; // 0110 in binary
    cout << __builtin_popcount(num) <<endl; // returns the number of set bits: 2 in this case
    
    long long num1 = 111123456789; // 64-bit number
    cout << __builtin_popcountll(num1) <<endl; // returns the number of set bits: 32 in this case

    string str = "123";
    sort(str.begin(), str.end()); // sorts the string in lexicographical order, str becomes "123"

    // string str2 = "231"; sort it first in order to get all the possible prermutations in lexicographical order.

    do{
        cout << str <<endl;
    } while (next_permutation(str.begin(), str.end())); // generates the next permutation of the string in lexicographical order, it will generate all the permutations of the string.  

}

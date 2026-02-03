#include<bits/stdc++.h>
using namespace std ; 

void pairs(){
    pair<int, int> p = {1, 3} ; // ek pair create hojayega p naam se jisme do int values store hongi

    cout << p.first << " " <<p.second << endl ; // to access elements of pairs

    pair<int,pair<int ,int>> p1 = {1 ,{3,4}} ; // nesting of pairs to store more than 2 elements in a pair

    cout << p.first << " " << p1.second.first << " " << p1.second.second << endl; // to access the elements of nested pair

    pair<int ,int> arr[] = {{1,2},{2,5},{5,1}}; // to create an array of pairs in which all the elements will be a pair of two integer values
    
    cout << arr[1].second << endl ; // to access those elements 
}
void vectors(){
    vector<int> v ;// ek vector container bangya jisme int values store hongi
    // vectors dynamically define hote jiski wjh se hum kisi bhi wqt inke size ko alter kr skte h

    v.push_back(1); /* ab jb humne upr vector v define kiya toh humne usse initialize nhi kiya tha jiske wjh se ek void vector container generate hua ab 
    jb humne pushback ka use kiya toh ek element add hogya usme with value of 1 i.e before v={} after v ={1} */

    v.emplace_back(2); // similar to pushback but generally faster than it now v ={1,2}
    // upr ke dono fun.s vector ke size ko increase krne ke kaam aate h

    cout << v[1] << endl ; // to access elements of vector container

    vector<pair<int,int>>vec; // vector container of pair datatype

    vec.push_back({1,2}); // before v ={} after v ={{1,2}}
    vec.emplace_back(1,2); // before v = {{1,2}} after v = {{1,2},{1,2}}

    cout << vec[1].second << endl ; // to access a vector container of pair data type 

    vector<int>v3(5,100) ; // ek vector container v create ho gya with 5 elements all being with 100 i.e. v ={100,100,100,100,100}

    vector<int>v4(5) ; // vector container create of size 5 with default values as 0 or any garbage value (depending upon the compiler)

    vector<int>v1(5,20); // v1 ={20,20,20,20,20}
    vector<int>v2(v1); // v2 ek andar v1 chlegya mtlb now v2 ={20,20,20,20,20}

    vector<int>::iterator it =v.begin(); // ek iterator bangya jo address of v container ke pehle element pr point kr rha h

    it++ ; // now iterator it pointing towards memmory location of second element stored in the vector container 
    cout << *it << endl ; // to access the elements of vector container through iterators 

    cout << v.at(0) << endl ; // ye tareeka bhi h to access elements in the vector container
    
    vector<int>::iterator it1  = v.end() ; // issme iterator it vector container ke last element ke baad ke consecutive place pr point kr rha h i.e vector ke bahar i.e v ={1,2} it is pointing towards right side of second element in the vector container

    for(vector<int>::iterator it2 = v.begin(); it2!= v.end(); it2++){
        cout << *it2 << " ";
    } // to print the elements of vector container using iterators and loop
    // ab hum humesha ek iterator ko define krne ke liye itna bda datatype toh likhte baithenge nhi i.e. vector<int>::iterator iss bdhiya hum auto datatype ka use kre jo value ko dekh kr datatype choose krleta h variable ke liye

    auto it3 = v.begin() ; // idhr auto ne dekha hoga ki it variable ke andar ek vector container ki memory location feed kri ja rhi h toh usne automatically hi it ko iteraator datatype assign krdiya hoga

    cout  << endl ;
    
     for(auto it4 : v ){
        cout<< it4 << " "; 
    }//idhr it ko int datatype assign hua h
    
    cout << endl ;

    vector<int>v5 = {10,20,12,13,56} ;
    for(auto it5 : v5){
        cout << it5 << " " ;
    }
    
    cout << endl ; 
    
    v5.erase(v5.begin()+1) ; // to remove one element from the vector container now we use erase fun. with use of iterators so v.begin points to first element i.e 10 and v.begin points to 20 means now v = {10,12,13,56}
    for(auto it5 : v5){
        cout << it5 << " " ;
    }

    v5.erase(v5.begin(),v5.end()-2) ; // to remove a no. of elements now its like [start,end) the end is not included in process of removal
    
    cout << endl ; 
    for(auto it5 : v5){
        cout << it5 << " " ;
    }
    
   // to insert elements
    vector<int>v6(2,100) ; // {100,100}
    v6.insert(v6.begin(),300) ; // {300,100,100}
    v6.insert(v6.begin()+1,2,10) ; // {300,10,10,100,100} 

    vector<int>v7 = {12,13,14} ;
    v6.insert(v6.begin(),v7.begin(),v7.end() - 1) ; // {12,13,300,10,10,100,100} // to insert a number of elements from one vector to another vector again [start,end) 
    cout << endl ;
    for(auto it : v6){
        cout << it << " " ;
    }

    cout << v7.back() ; // last element of vector container 

    cout << v6.size() ; // tells the size of the vector container
    
    v7.pop_back(); // deletes the last element of the vector container before v7 = {12,13,14} after v7 = {12,13}

    v6.swap(v7) ; // used for the swap of two vector containers
    // v6 ---> {12,13} 
    // v7 ---> {12,13,300,10,10,100,100}

    v6.clear() ; // erases the entire vector 
    
    cout << v.empty() ; // tells the true or false depending if the vector is empty or not 

}
void lists(){
    // similar to vectors but the difference is lists allow us to use front operations as well
    list<int> ls ;
    
    ls.push_back(2) ; // {2}
    ls.emplace_back(4) ; // {2,4} 

    ls.push_front(5) ; // {5,2,4}
    ls.emplace_front() ; // {0,5,2,4}

    cout << endl ;  
    for(auto it : ls ){
        cout << it << " " ;
    }
  
    // rest funs are same as vector 
    // begin , end , clear , insert , swap , size 

    //insert fun in vector is a more time consuming operation than front operation in lists thats why we use lists sometimes instead of vectors


}
void Deques(){
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    dq.pop_back(); // {3,4,1}
    dq.pop_front(); // {4,1}

    dq.back(); // 1
    dq.front(); // 4

    // rest functions same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap
}
void Stacks(){
    stack<int> st ; // LIFO ---> Last In First Out 
    st.push(1); // {1} // TC ---> O(1)
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.push(5); // {5,3,3,2,1}

    cout << st.top(); // prints 5 

    st.pop() ; // {3,3,2,1} // TC ---> 0(1)

    cout << st.top() ; // 3 // TC ---> 0(1)
    
    cout << st.size() ; // 4  
 
    cout << st.empty() ; 

    stack<int> st1, st2 ;
    st1.swap(st2);
    // In stack traditional Indexing not occurs due to which we cannot access by writing st[i] something
}
void Queue(){
    queue<int> q; // FIFO ---> First In First Out
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back()+=5 ;

    cout << q.back(); // prints 9 
    
    //q = {1,2,9}
    cout << q.front(); // prints 1

    q.pop(); // {2,9}

    cout << q.front(); // prints 2

    //size swap empty same as stack
}
void Priorityqueue(){
    priority_queue<int>pq; // Largest Value Stays On the Top (Maximum Heap)

    pq.push(5); // {5} // TC ---> log(N)
    pq.push(2); // {5,2} 
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10 // TC ---> O(1)

    pq.pop(); // {8,5,2} // TC ---> log(N)

    cout << pq.top(); // prints 8
    
    // size wap empty fum same as others

    // Minimum Heap(Smallest Value Stays On the Top)
    
    priority_queue<int, vector<int>, greater<int>>pq1; // declaration
    pq1.push(5); // {5}
    pq1.push(2); // {2,5}
    pq1.push(8); // {2,5,8}
    pq1.emplace(10); // {2,5,8,10}

    cout << pq1.top();// prints 2
}
void Sets(){
    set<int>st; // Sorted // Unique // every fun takes log(N)
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}
    st.emplace(5); // {1,2,3,4,5}

    //begin(), end(), rebegin(), rend(), size()
    // empty and swap() are same as those of above

    //st = {1,2,3,4,5}
    auto it = st.find(3); // returns an iterator having memory address for the element 3

    auto it1 = st.find(6); // element 6 does not exists in this set which means it will returns an iterator end();
    
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt = st.count(1); // tells if the element exists in the set or not by giving 1 or 0 respectively

    auto it2 = st.find(3);
    st.erase(it); // takes constant time

    auto it3 = st.find(2);  
    auto it4 = st.find(4); 
    st.erase(it3, it4); // after erase {1,4} // [start,end)
}
void Mutlisets(){
    // Everything is same as sets
    // only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1) ; // all 1's erased

    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}
    ms.insert(1); // {1,1,1,1}
    ms.insert(1); // {1,1,1,1,1}
    ms.insert(1); // {1,1,1,1,1,1}


    int cnt = ms.count(1);

    // only a single 1 erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), std::next(ms.find(1),2));// [start,end) // ms ke iterators main hum direct plus minus nhi kr skte
    // rest all funs same as set 
}
void UnorderedSets(){
    unordered_set<int>st; // All the operations have TC of O(1) // only in worst cases TC will be O(N)
    // Unique but Not Sorted
}
void Maps(){
    // {Key,Value} // Key is always Unique // values will be stored in a sorted order of key // Map works in log(N) TC
    map<int, int> mpp ;
    map<int, pair<int, int>> mpp1 ; // {key,{x,y}}
    map<pair<int, int>, int> mpp2 ; // {{x,y},value}

    mpp[1] = 2 ; // {1,2} key 1 having value 2
    mpp.emplace({3,1});
    mpp.insert({2,4});

    // mpp={{1,2},{2,4},{3,1}}

    mpp2[{2,3}] = 10;

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl ;
    }

    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints 0 or Any Garbage Value

    auto it = mpp.find(3); // {3,1}
    cout << *(it).second;
    
    auto it2 = mpp.find(5); // returns the iterator mpp.end()

    // erase, swap, size ,empty are same as above
}
void MultiMaps(){
    // everythiing same as map, only it cAN STORE MULTIPLE KEYS
    // only mpp[key] cannot be used here
}
void UnorderedMap(){
    // same as set but not sorted // all operations occurs in O(1)
}
int main(){
    
    return 0 ;
}
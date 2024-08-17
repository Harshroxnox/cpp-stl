#include <iostream>
#include <map>

using namespace std;

// Map stores key value pairs and every key can point to only one object 
// search insert delete all have time complexity of O(logn) because red black tree implementation
// In unordered map the time complexity of search, insert and delete is O(1) because of 
// hash table implementation 
int main(){
    map<int, string> m;

    m[1] = "love";
    m[13] = "babbar";
    m[12] = "harsh";
    m[2] = "kumar";

    m.insert({ 5, "bheem"});
    
    cout << "Before erasing: " << endl;
    for(auto i:m){
        cout<< i.first <<"  "<< i.second<< endl;
    }

    cout << "Finding 13 -> " << m.count(13) << endl;
    m.erase(13);

    cout<<"After erasing: " << endl;
    for(auto i:m){
        cout<< i.first <<"  "<< i.second<< endl;
    }

    cout << "Printing values from 2 : " << endl;
    map<int, string>::iterator it = m.find(2);
    for(auto itr=it; itr != m.end(); itr++){
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    
}
#include <iostream>
#include <vector>

using namespace std;
// STL vector is just dynamic array
// In vector STL capacity means max number of elements it can hold 
// and size means no of elements

int main(){
    // This means that a vector of size 5 all elements initialized to 1
    vector<int> a(5,1); 

    // a vector named last in which a is copied
    vector<int> last(a);
    cout << "print a " << endl;
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;

    vector<int> v;
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;

    cout << "Element at 2nd index: " << v.at(2) << endl;
    cout << "Element at 2nd index: (another way) " << v[2] << endl;

    cout << "Front -> " << v.front() << endl;
    cout << "Back -> " << v.back() << endl;

    cout << "Before Pop: " << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After Pop: " << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    cout << "Size before clear: " << v.size() << endl;
    v.clear();
    cout << "Size after clear: " << v.size() << endl;
    cout << "Capacity after clear: " << v.capacity() << endl;

}
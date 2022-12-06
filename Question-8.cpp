#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

//❓❓ Question 8:
template<class T>
void print(vector<T> someVector) {
    if (someVector.empty()) {
        cout << "[empty]";
    } else {
        for (T item : someVector) {
            cout << item << " ";
        }
        cout << endl;
    }
}

int main() {
    //Same code from the last file
    vector<string> myStrings;
    myStrings.insert(myStrings.end(), "Helium");
    myStrings.insert(myStrings.end(), "Lithium");
    myStrings.insert(myStrings.begin(), "Hydrogen");
    print(myStrings);

    //Same code from the last file
    vector<int> myNumbers;
    myNumbers.insert(myNumbers.end(), 42);
    myNumbers.insert(myNumbers.begin(), 12);
    myNumbers.insert(myNumbers.end(), 23);
    print(myNumbers);

}
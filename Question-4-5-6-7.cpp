#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print(vector<string> v) {
    if (v.empty()) {
        cout << "[empty]";
    } else {
        for (string s : v) {
            cout << s << " ";
        }
        cout << endl;
    }
}

//❓❓ Question 7:
// Put your new print function here:
void print(vector<int> v) {
    if (v.empty()) {
        cout << "[empty]";
    } else {
        for (int s : v) {
            cout << s << " ";
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

    //❓❓ Question 4:
    vector<int> myNumbers;

    //❓❓ Question 5:
    myNumbers.insert(myNumbers.end(), 42);
    myNumbers.insert(myNumbers.begin(), 12);
    myNumbers.insert(myNumbers.end(), 23);

    //❓❓ Question 6:
    print(myNumbers);

}
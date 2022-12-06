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

int main() {
    //❓❓ Question 1, 2:
    vector<string> myStrings;

    //❓❓ Question 3:
    myStrings.insert(myStrings.end(), "Helium");
    myStrings.insert(myStrings.end(), "Lithium");
    myStrings.insert(myStrings.begin(), "Hydrogen");
    print(myStrings);
}
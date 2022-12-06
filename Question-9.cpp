#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::endl;
using std::string;

//❓❓ Question 9, uncomment the next line, then change the function declarations.
//template<class T>
class LinkedList {
   private:
    // The internal linked-list node struct
    struct List {
        string value;
        List *next;
    };

    // A pointer to this objects internal list
    List *theList;

   public:
    // Print the list to the provided ostream
    void print(std::ostream &out);

    // Returns the number of items in the list
    int length();

    // Get the Nth item from the list
    string get(int index);

    // Returns true if the list contains needle
    bool contains(string needle);

    // Add an item to the list
    void insertAt(int pos, string value);

    // Remove an item from the list
    void deleteAt(int pos);
};

int main() {}
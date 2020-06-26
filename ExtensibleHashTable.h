#include <iostream>
#include <map>
#include <vector>
#include "Bucket.h"

class ExtensibleHashTable{


    public:
        ExtensibleHashTable();
        ExtensibleHashTable(int key);
        bool find(int key);
        void insert(int key);
        bool remove(int);
        void print();
       ~ExtensibleHashTable();
        ExtensibleHashTable(const ExtensibleHashTable &hashtable);
        ExtensibleHashTable& operator=(const ExtensibleHashTable& other);

};

//this constructor creates an empty hash table; the 
// number of keys that can be stored in a bucket size 
// should be set to 4;
// the directory should initially consist of two entries 
// and the hash function should use only the last bit of the hash value
// remove 
// searches the hash table for the key; if found,
// removes all matching values (as there may be duplicate keys) 
// from the hash table; returns true if the key was found and removed, 
// false otherwise
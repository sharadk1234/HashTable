#include <iostream>
#include <map>
#include <vector>
#include "Bucket.h"
#include <bitset>
#include <math.h> 
using namespace std;

class ExtensibleHashTable{

    Bucket * directory_ptr;
    int global_depth;
    int number_buckets;

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

ExtensibleHashTable:: ExtensibleHashTable(){
    global_depth = 1;
    number_buckets = pow(2, global_depth);
    directory_ptr =  new Bucket[number_buckets];
}

ExtensibleHashTable:: ExtensibleHashTable(int key){
    global_depth = 1;
    // The hash table must have a directory which should be an array of size 2^global depth....
    number_buckets = pow(2, global_depth);

}

int main()
{
    int key = 299;
    bitset<9> x(key);
    cout << x << endl;
   

}
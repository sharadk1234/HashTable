#include "hash_table.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


/* Directory class functions */

Directory:: Directory(int depth, int bucket_size)
{
    this->global_depth = depth;
    this->bucket_size = bucket_size;

    for(int i = 0; i < 1 << depth; i++)
    {   
        
      Bucket myNewBucket(global_depth, bucket_size);
       // myNewBucket.insert(1, "sharad_kochhar");
    }   
}

int Directory:: hash(int n)
{
    return n&((1 << global_depth) - 1);
} 


int main()
{   
    Directory(2, 4);
    cout << "Creating Bucket" << endl;
    return 0;
}




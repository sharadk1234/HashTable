#include <iostream>
using namespace std;
#include <map>
#include "Bucket.h"


Bucket:: Bucket(){
    this->size_bucket = 4;
    this->local_depth = 1;
}
Bucket:: Bucket(int local_depth, int size_bucket){
    this->size_bucket = size_bucket;
    this->local_depth = local_depth;
}








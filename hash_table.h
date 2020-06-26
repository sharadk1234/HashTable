#include <iostream>
#include <map>
#include <vector>
#include "Bucket.h"

using namespace std;


class Directory
{
    int global_depth, bucket_size;
    std:: vector<Bucket*> buckets;  
    int hash(int n);
    int pairIndex(int bucket_no, int depth);
    void grow();
    void shrink();
    void split(int bucket_no);
    void merge(int bucket_no);
    string bucket_id(int n);

public:
    Directory(int depth, int bucket_size);
    void insert(int key, string value, bool reinserted);
    void remove(int key, int mode);
    void update(int key, string value);
    void search(int key);
    void display(bool duplicates);
};
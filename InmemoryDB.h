#include <iostream>
#include <string>

#ifndef HASHTABLE_H
#define HASHTABLE_H

template <class TKey, class Value> class Hashtable;
template <class TKey, class Value> class HashableItem;
template <class TKey, class Value> class HashtableDataMember;

template <class TKey, class TValue> class HashtableDataMembers
{

    public:
        HashtableItem<TKey, TValue> ** table;
        Hashtable<Tkey, Tvalue> * cur_table_item;
        unsigned int cur_index, table_size;
        HashtableDataMember();
        ~HashtableDataMember();
}

template <class TKey, class TValue> class Hashtable
{
    private:
        HashtableDataMember<TKey, TValue> * dm;

    public:
        Hashtable();
        Hashtable(const Hashtable & obj); // Copy Constructor
       ~Hashtable();

        bool Add(const TKey & key, const TValue & value); // Add a new entries key into the Table
        const Hashtable<TKey,TValue> & operator= (const Hashtable<TKey,TValue> & obj);
        HashtableItem<TKey, TValue> * operator[](const TKey & key)const;
        void Remove(const TKey & key); // Remove one Table Entries 
        void clear(); // Remove all Table Entries
        
        HashtableItem<TKey, TValue> * GetFirst; // Used to loop through Table Entries
        HashtableItem<TKey, TValue> * GetNext;  // Used to loop through Table Entries

};

template<class TKey, class TValue> class HashtableItem{

    private:
        HashableItem<TKey, TValue> * pnext;
        TKey key;
        TValue value;

    // keep construction Private so that client cannot create Hashtable object Directly 
    HashtableItem();
    HashtableItem(const TKey & key, const TValue & value);

    public:
        const TKey & key() const;
        const TValue & Value() const;
        const TValue & operator= (const  TValue & value);

    // Because constructor are Private must have some friend function 
    friend bool Hashtable<TKey, TValue> :: Add(const TKey & key, const TValue & value);
    friend HashtableDataMembers <TKey, TValue> :: HashtableDataMembers();
    friend HashtableDataMembers <TKey, TValue> :: ~HashtableDataMembers();
    friend void Hashtable <TKey, TValue> :: Remove(const TKey & key);
    friend const Hashtable <TKey, TValue> &Hashtable <TKey, TValue>:: operator  = (const Hashtable <TKey, TValue> & obj);
    friend const Hashtable <TKey, TValue> &Hashtable <TKey, TValue>:: operator  = (const Hashtable <TKey, TValue> & obj);
    friend void  Hashtable <TKey, TValue> :: Clear;

};


#endif
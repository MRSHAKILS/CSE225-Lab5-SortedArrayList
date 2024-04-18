#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED

const int MAX_ITEMS = 7;

template <class ItemType>
class SortedList {
public:
    SortedList();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    bool InsertItem(ItemType item);
    bool DeleteItem(ItemType item);
    bool RetrieveItem(ItemType& item);
    void ResetList();
    bool GetNextItem(ItemType& item);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#include "SortedList.tpp"

#endif // SORTEDLIST_H_INCLUDED

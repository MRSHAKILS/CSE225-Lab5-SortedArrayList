#include "SortedList.h"
#include "timeStamp.h"

int main() {
    SortedList<timeStamp> timestamp_list;

    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);

    timestamp_list.InsertItem(t1);
    timestamp_list.InsertItem(t2);
    timestamp_list.InsertItem(t3);

    cout << "Length : " << timestamp_list.LengthIs() << endl;

    timeStamp t;
    cout << "\nDeleting 13:13:02 ";
    t.setHour(13); t.setMinute(13); t.setSec(02);

    if (timestamp_list.DeleteItem(t)) {
        cout << "Deleted" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    cout << "\nSearching 13:13:02 ";
    t.setHour(13); t.setMinute(13); t.setSec(02);
    if (timestamp_list.RetrieveItem(t)) {
        cout << "Found : " << t << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}

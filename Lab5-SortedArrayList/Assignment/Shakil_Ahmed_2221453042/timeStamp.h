#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

#include <iostream>
using namespace std;

class timeStamp {
private:
    int h, m, s;

public:
    timeStamp();
    timeStamp(int h, int m, int s);

    void printTime() const;
    int getHour() const;
    int getMinute() const;
    int getSec() const;

    void setHour(int h);
    void setMinute(int m);
    void setSec(int s);

    bool operator==(const timeStamp& t) const;
    bool operator!=(const timeStamp& t) const;
    bool operator<(const timeStamp& t) const;
    bool operator>(const timeStamp& t) const;
    bool operator>=(const timeStamp& t) const;

    friend ostream& operator<<(ostream& os, const timeStamp& t);
    friend istream& operator>>(istream& is, timeStamp& t);
};

#endif // TIMESTAMP_H_INCLUDED

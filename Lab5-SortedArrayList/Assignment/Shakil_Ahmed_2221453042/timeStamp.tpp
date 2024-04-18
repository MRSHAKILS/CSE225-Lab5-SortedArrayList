#include "timeStamp.h"

timeStamp::timeStamp() : h(0), m(0), s(0) {}

timeStamp::timeStamp(int h, int m, int s) : h(h), m(m), s(s) {}

void timeStamp::printTime() const {
    cout << h << ":" << m << ":" << s;
}

int timeStamp::getHour() const { return h; }

int timeStamp::getMinute() const { return m; }

int timeStamp::getSec() const { return s; }

void timeStamp::setHour(int h) { this->h = h; }

void timeStamp::setMinute(int m) { this->m = m; }

void timeStamp::setSec(int s) { this->s = s; }

bool timeStamp::operator==(const timeStamp& t) const {
    return (s == t.s) && (m == t.m) && (h == t.h);
}

bool timeStamp::operator!=(const timeStamp& t) const {
    return !(*this == t);
}

bool timeStamp::operator<(const timeStamp& t) const {
    if (h < t.h) return true;
    if (h == t.h && m < t.m) return true;
    if (h == t.h && m == t.m && s < t.s) return true;
    return false;
}

bool timeStamp::operator>(const timeStamp& t) const {
    if (h > t.h) return true;
    if (h == t.h && m > t.m) return true;
    if (h == t.h && m == t.m && s > t.s) return true;
    return false;
}

bool timeStamp::operator>=(const timeStamp& t) const {
    return !(*this < t) || *this == t;
}

ostream& operator<<(ostream& os, const timeStamp& t) {
    os << t.h << ":" << t.m << ":" << t.s;
    return os;
}

istream& operator>>(istream& is, timeStamp& t) {
    char discard; // For discarding the colons
    is >> t.h >> discard >> t.m >> discard >> t.s;
    return is;
}

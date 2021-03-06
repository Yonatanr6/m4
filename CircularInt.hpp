/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircularInt.hpp
 * Author: Yoni
 *
 * Created on April 21, 2018, 9:01 PM
 */

#include <iostream>
#include <vector>
using namespace std;

class CircularInt {
public:
    int min_range, max_range, curr;


    friend ostream& operator<<(ostream& out, CircularInt hour); //return cout << obj.
    CircularInt& operator+(int a);
    CircularInt& operator+=(const CircularInt &a);
    CircularInt& operator+=(int a);
    CircularInt& operator-=(int a);
    CircularInt& operator-=(const CircularInt &a);
    CircularInt& operator/=(int a);
    CircularInt& operator*=(int a);
    friend istream &operator>>(istream& in, CircularInt &a);
    CircularInt& operator=(int b);

    bool operator==(int a);
    bool operator!=(int a);

    friend bool operator==(const CircularInt &a, const CircularInt &b);
    friend bool operator==(const CircularInt &b, int a);
    friend bool operator==(int a, const CircularInt &b);

    friend bool operator!=(const CircularInt &a, const CircularInt &b);
    friend bool operator!=(int a, const CircularInt &b);
    friend bool operator!=(const CircularInt &b, int a);

    CircularInt& operator++(int);
    const CircularInt& operator++();

    CircularInt& operator--();
    CircularInt& operator--(int a);

    friend CircularInt operator/(const CircularInt &a, int b);
    friend CircularInt operator/(int b, const CircularInt &a);
    friend CircularInt operator/(const CircularInt &b, const CircularInt &a);
    friend CircularInt operator/=(const CircularInt &b, const CircularInt &a);

    friend CircularInt operator+(const CircularInt &a, int b);
    friend CircularInt operator+(const CircularInt &b, const CircularInt &a);
    friend CircularInt operator+(int b, const CircularInt &a);
    friend CircularInt operator+(const CircularInt &a);
    friend CircularInt operator+=(const CircularInt &b, const CircularInt &a);



    friend CircularInt operator-(const CircularInt &a);
    friend CircularInt operator-(const int a, const CircularInt &b);
    friend CircularInt operator-(const CircularInt &b, const int a);
    friend CircularInt operator-(const CircularInt &b, const CircularInt &a);
    friend CircularInt operator-=(const CircularInt &b, const CircularInt &a);

    friend CircularInt operator*=(const CircularInt &b, const CircularInt &a);

    friend CircularInt operator*(const CircularInt &b, const CircularInt &a);
    friend CircularInt operator*(const int b, const CircularInt &a);
    friend CircularInt operator*(const CircularInt &b, const int a);

    friend bool operator<(const CircularInt &b, const CircularInt &a);
    friend bool operator<(const int b, const CircularInt &a);
    friend bool operator<(const CircularInt &b, const int a);

    friend bool operator>(const CircularInt &b, const CircularInt &a);
    friend bool operator>(const int a, const CircularInt &b);
    friend bool operator>(const CircularInt &a, const int b);

    friend bool operator<=(const CircularInt &b, const CircularInt &a);
    friend bool operator<=(const int b, const CircularInt &a);
    friend bool operator<=(const CircularInt &b, const int a);

    friend bool operator>=(const CircularInt &b, const CircularInt &a);
    friend bool operator>=(const int b, const CircularInt &a);
    friend bool operator>=(const CircularInt &b, const int a);

    CircularInt() {
    };

    CircularInt(int a, int b) {
        if (a > b) {
            max_range = a;
            min_range = b;
            curr = min_range;
        }
        if (b > a) {
            max_range = b;
            min_range = a;
            curr = min_range;
        } else
            cout << "There is no range!" << endl;
    }

    CircularInt(const CircularInt &a) {
        max_range = a.max_range;
        min_range = a.min_range;
        curr = a.curr;
    }

};

inline CircularInt operator-(const CircularInt &a) {
    CircularInt temp(a);
    temp.curr = temp.max_range - temp.curr;
    return temp;

}

inline CircularInt operator-(const int a, const CircularInt &b) {
    return -(b - a);
}

inline CircularInt operator-(const CircularInt &b, const int a) {
    CircularInt temp(b);
    temp -= a;
    return temp;
}

inline CircularInt operator-(const CircularInt &b, const CircularInt &a) {
    return b - a.curr;
}

inline CircularInt operator-=(const CircularInt &b, const CircularInt &a) {
    CircularInt temp(b);
    temp - a.curr;
    return -temp;
}

inline CircularInt operator+(const CircularInt &a) {
    CircularInt temp(a);
    temp.curr = temp.curr + temp.curr;
    return temp;

}

inline CircularInt operator+(const CircularInt &b, const CircularInt &a) {
    CircularInt temp(a);
    temp + b.curr;
    return temp;

}

inline CircularInt operator+(const CircularInt &c, int b) {
    CircularInt temp(c);
    temp += b;
    return temp;
}

inline CircularInt operator+(int b, const CircularInt &c) {
    CircularInt temp(c);
    temp += b;
    return temp;
}

inline CircularInt operator+=(const CircularInt &b, const CircularInt &a) {
    CircularInt temp(b);
    temp + a.curr;
    return temp;
}

inline bool operator==(const CircularInt &a, const CircularInt &b) {
    if (a.curr == b.curr)
        return true;
    return false;
}

inline bool operator==(int a, const CircularInt &b) {
    if (b.curr == a)
        return true;
    return false;
}

inline bool operator==(const CircularInt &b, int a) {
    if (b.curr == a)
        return true;
    return false;
}

inline bool operator!=(const CircularInt &a, const CircularInt &b) {
    if (b.curr != a.curr)
        return true;
    return false;
}

inline bool operator!=(int a, const CircularInt &b) {
    if (b.curr != a)
        return true;
    return false;
}

inline bool operator!=(const CircularInt &b, int a) {
    if (b.curr != a)
        return true;
    return false;
}

inline CircularInt operator/(const CircularInt &a, int b) {
    CircularInt temp(a);
    temp /= b;
    return temp;
}

inline CircularInt operator/(int b, const CircularInt &a) {
    return a / b;
}

inline CircularInt operator/(const CircularInt &a, const CircularInt &b) {
    return a / b.curr;
}

inline CircularInt operator/=(const CircularInt &b, const CircularInt &a) {
    return b*a;
}

inline CircularInt operator*=(const CircularInt &b, const CircularInt &a) {
    return b*a;
}

inline CircularInt operator*(const CircularInt &b, const CircularInt &a) {
    return b * a.curr;
}

inline CircularInt operator*(const int b, const CircularInt &a) {
    return a*b;
}

inline CircularInt operator*(const CircularInt &b, const int a) {

    CircularInt temp(b);
    temp *= a;
    return temp;
}

inline bool operator<(const CircularInt &b, const CircularInt &a) {
    if (b.curr < a.curr)
        return true;
    return false;
}

inline bool operator<(const int b, const CircularInt &a) {
    if (b < a.curr)
        return true;
    return false;
}

inline bool operator<(const CircularInt &b, int a) {
    if (b.curr < a)
        return true;
    return false;
}

inline bool operator>(const CircularInt &b, const CircularInt &a) {
    if (b.curr > a.curr)
        return true;
    return false;
}

inline bool operator>(const int b, const CircularInt &a) {
    if (b > a.curr)
        return true;
    return false;
}

inline bool operator>(const CircularInt &a, const int b) {
    if (a.curr > b)
        return true;
    return false;
}

inline bool operator<=(const CircularInt &b, const CircularInt &a) {
    if (b.curr <= a.curr)
        return true;
    return false;
}

inline bool operator>=(const CircularInt &b, const CircularInt &a) {
    if (b.curr >= a.curr)
        return true;
    return false;
}

inline bool operator>=(const int b, const CircularInt &a) {
    if (b >= a.curr)
        return true;
    return false;
}

inline bool operator>=(const CircularInt &b, int a) {
    if (b.curr >= a)
        return true;
    return false;
}

inline bool operator<=(const int b, const CircularInt &a) {
    if (b <= a.curr)
        return true;
    return false;
}

inline bool operator<=(const CircularInt &b, int a) {
    if (b.curr <= a)
        return true;
    return false;
}

inline istream &operator>>(istream& in, CircularInt &a) {

    int temp, temp2, temp3;
    in >> temp >> temp2>> temp3;
    if (temp >= a.min_range && temp >= a.min_range && temp2 >= a.min_range && temp2 >= a.min_range && temp3 >= a.min_range && temp3 >= a.min_range) {
        if (temp > temp2 && temp > temp3) {
            a.max_range = temp;
            if (temp2 > temp3) {
                a.min_range = temp3;
                a.curr = temp2;
            } else {
                a.min_range = temp2;
                a.curr = temp3;
            }
        } else if (temp2 > temp && temp2 > temp3) {
            a.max_range = temp2;
            if (temp > temp3) {
                a.min_range = temp3;
                a.curr = temp;
            } else {
                a.min_range = temp;
                a.curr = temp3;
            }
        } else if (temp3 > temp && temp3 > temp) {
            a.max_range = temp3;
            if (temp > temp2) {
                a.min_range = temp2;
                a.curr = temp;
            } else {
                a.min_range = temp;
                a.curr = temp2;
            }
        }
    } else
        throw "not a number";
    return in;
}
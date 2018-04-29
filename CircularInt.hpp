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

class CircularInt{
    
 public:   
    int min_range, max_range, dis_max,curr;
    

    friend ostream& operator<<(ostream& out,CircularInt hour);//return cout << obj.
    CircularInt& operator+(int a);
    //CircularInt& operator-(int a);
    CircularInt& operator*(int a);
    CircularInt& operator/(int a);
    
    CircularInt& operator+=(int a);
    CircularInt& operator-=(int a);
    CircularInt& operator/=(int a);
    CircularInt& operator*=(int a);
    
    CircularInt& operator++();
    const CircularInt& operator++(int a);
    
    CircularInt& operator--();
    CircularInt& operator--(int a);
    
     friend CircularInt operator+(const CircularInt &a,int b);
    friend CircularInt operator+(const CircularInt &b,const CircularInt &a);
   
    
   friend CircularInt operator-(const CircularInt &a);
   friend CircularInt operator-(const int a,const CircularInt &b);
    
   
   
    
    CircularInt(){};
    
    CircularInt(int a,int b){
        if (a>b){
            max_range=a;
            min_range=b;
            curr=min_range;
        }
        if(b>a){
            max_range=b;
            min_range=a;
            curr=min_range;
        }
        else
            cout << "There is no range!" << endl;
    }
    CircularInt(const CircularInt &a){
        max_range= a.max_range;
        min_range= a.min_range;
        curr= a.curr;
    }
    
};


inline CircularInt operator-(const int a,const CircularInt &b){
    CircularInt temp(b);
    temp.curr-=a;
    return -temp;
    }

inline CircularInt operator-(const CircularInt &a){
  CircularInt temp(a);
  temp.curr=temp.max_range-temp.curr;
  return temp;
        
    }
inline CircularInt operator+(const CircularInt &b,const CircularInt &a){
       CircularInt temp(a);
  temp+a.curr;
  return temp;
        
    }
inline CircularInt operator+(const CircularInt &c,int b){
    CircularInt temp(c);
    temp+=b;
           return temp;
    }
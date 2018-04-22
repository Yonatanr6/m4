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
    

    ostream& operator<<(CircularInt hour);//return cout << obj.
    CircularInt& operator+(int a);
    CircularInt& operator-(int a);
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
    
};
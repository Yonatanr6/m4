/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "CircularInt.hpp"
#include <iostream>
using namespace std;

  ostream& operator<<(ostream& out,CircularInt hour){
      out << "";
      out << hour.curr;
      out << "";
  }
   CircularInt& CircularInt::operator+(int a){
//       if(this->curr+a<this->max_range){
//           this->curr=this->curr+a;
//            return this->curr;
//       }
//       if(this->curr+a>this->max_range)
    }
    
    CircularInt& CircularInt::operator-(int a){
        
    }
    CircularInt& CircularInt::operator*(int a){
        
    }
    CircularInt& CircularInt::operator/(int a){
        
    }
    
    CircularInt& CircularInt::operator+=(int a){
        
    }
    CircularInt& CircularInt::operator-=(int a){
        
    }
    CircularInt& CircularInt::operator/=(int a){
        
    }
    CircularInt& CircularInt::operator*=(int a){
        
    }
    
    CircularInt& CircularInt::operator++(){
        
    }
    const CircularInt& CircularInt::operator++(int a){
        
    }
    
    CircularInt& CircularInt::operator--(){
        
    }
    CircularInt& CircularInt::operator--(int a){
        
    }
    const CircularInt& CircularInt::operator+(CircularInt a){
        
    }
    CircularInt& CircularInt::operator-(const CircularInt a){
        
    }
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
  
  CircularInt& CircularInt::operator=(int a){
       this->curr= ((this->curr-this->min_range)+(a%(this->max_range-this->min_range+1)))%(this->max_range-this->min_range+1)+this->min_range;
       return *this;
    }
  
   CircularInt& CircularInt::operator+(int a){
       this->curr= ((this->curr-this->min_range)+(a%(this->max_range-this->min_range+1)))%(this->max_range-this->min_range+1)+this->min_range;
       return *this;
    }
    
   bool CircularInt::operator!=(int a){
        if(this->curr!=a)
        return true;
    return false;
   }
//    CircularInt& CircularInt::operator-(int a){
//        
//    }
    CircularInt& CircularInt::operator*(int a){
        
    }
    
    
    CircularInt& CircularInt::operator/(int a){
         this->curr=this->curr/a;
        return *this;
        
    }
    
    
    CircularInt& CircularInt::operator+=(int a){
           this->curr= ((this->curr-this->min_range)+(a%(this->max_range-this->min_range+1)))%(this->max_range-this->min_range+1)+this->min_range;
           return *this;        
    }
    CircularInt& CircularInt::operator-=(int a){
         this->curr= ((this->curr-this->min_range)-(a%(this->max_range-this->min_range+1)))%(this->max_range-this->min_range+1)+this->min_range;
           return *this;  
    }
    CircularInt& CircularInt::operator/=(int a){
        
    }
    CircularInt& CircularInt::operator*=(int a){
        for(int i=1;i<a;i++)
            *this+=this->curr;
        return *this;
    }
    
    CircularInt& CircularInt::operator++(int){
        return (*this+=1);
    }
    const CircularInt& CircularInt::operator++(){
        CircularInt temp (*this);  
   ++*this;  
   return temp;    
    }
    
    CircularInt& CircularInt::operator--(){
        
    }
    CircularInt& CircularInt::operator--(int a){
        
    }
    
   bool CircularInt::operator==(int a){
        if(this->curr==a)
        return true;
    return false;
   }
    
    
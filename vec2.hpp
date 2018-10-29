#ifndef __VEC2_HPP
#define __VEC2_HPP

#include <iostream>
#include <cmath>

template<typename T>
class Vec2
	{
        public:
		    Vec2<T>() { x=static_cast<T>(0); y=static_cast<T>(0);}
		    Vec2<T>(T nx, T ny) { x=static_cast<T>(nx); y=static_cast<T>(ny);}
       
            void operator=(const Vec2<T> op) {x=op.x; y=op.y;}     
            void operator=(const T op) {x=op; y=op;}     
            Vec2<T> operator+(const Vec2<T> op) {return Vec2(x+op.x, y+op.y);}     
            Vec2<T> operator+(const T op) {return Vec2(x+op, y+op);}     
            Vec2<T> operator-(const Vec2<T> op) {return Vec2(x-op.x, y-op.y);}     
            Vec2<T> operator-(const T op) {return Vec2(x-op, y-op);}     
            Vec2<T> operator*(const T op) {return Vec2(x*op, y*op);}     
            Vec2<T> operator/(const T op) {return Vec2(x/op, y/op);}     
            void operator+=(const Vec2<T> op) {x+=op.x; y+=op.y;}     
            void operator+=(const T op) {x+=op; y+=op;}     
            void operator-=(const Vec2<T> op) {x-=op.x; y-=op.y;}     
            void operator-=(const T op) {x-=op; y-=op;} 
            void operator*=(const T op) {x*=op; y*=op;} 
            void operator/=(const T op) {x/=op; y/=op;} 
            const T length() {return sqrt(pow(x, 2) + pow(y, 2));} //T or double ? 
            const T distanceWith(const Vec2<T> op) {(*this-op).length();} //T or double ?
            Vec2<T> normalized() {x/=length(); y/=length(); return Vec2<T>(x/length(), y/length());} //without asign
            Vec2<T> normalize() {x/=length(); y/=length(); return *this;}

            T x, y;
	};



#endif

#include "integral.h"

float RectangleRule(fun f,float x_min,float x_max,int num_intervals){
    float dx = (x_max - x_min ) / num_intervals;
    float total_area= 0;
    float x = x_min;
    for( int i =1 ; i<=num_intervals;i++){
        total_area += f(x);
        x = x+dx;
    }
    total_area *= dx;
    return total_area;
}
float TrapezoidRule(fun f,float x_min,float x_max,int num_intervals){
    float dx = (x_max - x_min ) / num_intervals;
    float total_area= 0;
    float x = x_min;
    for( int i =1 ; i<=num_intervals;i++){
        if (x+dx > x_max) total_area = total_area + dx*(f(x) + f(x_max))/2; 
        else total_area = total_area + dx*(f(x) + f(x+dx))/2;
        x = x+dx;
    }
    return total_area;
}
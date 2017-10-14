#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    
#include <cstdlib>
#include <vector>
    using std::vector;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}    
    
void selectionsort(vector<int>& v){
    int i, j;
    for(int j = 0; j < v.size()-1; ++j){
        int min = j;
        for(i = j+1; i < v.size(); ++i){
            if(v[i] < v[min]){
                min = i;
            }
        }
    
        if(min != j){
            swap(v[j], v[min]);
        }
    }
}

#endif
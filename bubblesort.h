/*
* just a bubble sort
*
*   Name:   Spencer Qualls
*   SID:    50362806
*/


#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    
#include <cstdlib>
#include <vector>
    using std::vector;
    
int bubblesort(vector<int> a)
{
    int size = a.size();
    int temp;
    int count = 0;
    while(size > 0)
    {
        count++;
        for(int j = 0; j < size - 1; j++)
        {
            count++;
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        size--;
        count++;
    }
    count++;
    /*
    cout << "printing vector:\n";
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;*/
    return count;
}

// void bubblesort(vector<int>& a, int& count)
// {
//     int size = a.size();
//     int temp;
//     //int count = 0;
//     while(size > 0)
//     {
//         count++;
//         for(int j = 0; j < size - 1; j++)
//         {
//             count++;
//             if(a[j] > a[j+1])
//             {
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//         size--;
//         count++;
//     }
//     count++;
//     return;
// }

#endif

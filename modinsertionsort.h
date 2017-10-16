#ifndef MODINSERTIONSORT_H
#define MODINSERTIONSORT_H
#include<iostream>
#include<vector>
   using std::vector;

/*
 *    modified insertion sort with binary search instead of linear search
 */

//void modinsertionsort(vector<int>& v, int& count)
//{
//    int i , key,  j, size, index;
//    //int count = 0;
//    count++;
//    for(i = 1; i < v.size(); ++i)
//    {
//        size = v.size();
//        index = size / 2;
//        size = size / 2;
//        key = v[index];
//        j = i - 1;
//        count++;
//        while (j >= 0)
//        {
//            count++;
//            if(v[j] >= key)
//            {
//                count++;
//                if(size != 1)
//                {
//                    index = size - size /2;
//                    size /= 2;
//                    key = v[index];
//                }
//                else
//                {
//                    index -= 1;
//                    key = v[index];
//                    v[index] = v[j];
//                    v[j] = key;
//                    j = -1;
//                }
//            }
//            else
//            {
//                count++;
//                if(size != 1)
//                {
//                    index = size + size / 2;
//                    size /= 2;
//                    key = v[index];
//                }
//               else
//                {
//                    index += 1;
//                    key = v[index];
//                    v[index] = v[j];
//                    v[j] = key;
//                    j = -1;
//                }
//            }
//        }
//    }
////     for(int i = 0; i < v.size(); i++)
////     {
////         cout << v[i] << endl;
////     }

//   return;
//}
 


int binarySearch(vector<int>& v, int item, int low, int high)
{
    if (high <= low){
        return (item > v[low])?  (low + 1): low;
    }
 
    int mid = (low + high)/2;
 
    if(item == v[mid]){
        return mid+1;
    }
 
    if(item > v[mid]){
        return binarySearch(v, item, mid+1, high);
    }
    return binarySearch(v, item, low, mid-1);
}
 
// Function to sort an array a[] of size 'n'
void modinsertionsort(vector<int>& v, int& count)
{
    int i, loc, j, k, selected;
 
    for (i = 1; i < v.size(); ++i)
    {
        j = i - 1;
        selected = v[i];
 
        // find location where selected sould be inseretd
        loc = binarySearch(v, selected, 0, j);
        count++;
        // Move all elements after location to create space
        while (j >= loc)
        {
            v[j+1] = v[j];
            j--;
            count++;
        }
        v[j+1] = selected;
    }
    count++;
    return;
}


#endif


// #endif

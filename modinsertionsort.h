#ifndef MODINSERTIONSORT_H
#define MODINSERTIONSORT_H
#include<iostream>
#include<vector>
   using std::vector;

/*
 *    modified insertion sort with binary search instead of linear search
 */

int modinsertionsort(vector<int> v)
{
    int i , key,  j, size, index;
    int count = 0;
    count++;
    for(i = 1; i < v.size(); ++i)
    {
        size = v.size();
        index = size / 2;
        size = size / 2;
        key = v[index];
        j = i - 1;
        count++;
        while (j >= 0)
        {
            count++;
            if(v[j] >= key)
            {
                count++;
                if(size != 1)
                {
                    index = size - size /2;
                    size /= 2;
                    key = v[index];
                }else
                {
                    index -= 1;
                    key = v[index];
                    v[index] = v[j];
                    v[j] = key;
                    j = -1;
                }
            }else
            {
                count++;
                if(size != 1)
                {
                    index = size + size / 2;
                    size /= 2;
                    key = v[index];
                }else
                {
                    index +=1;
                    key = v[index];
                    v[index] = v[j];
                    v[j] = key;
                    j = -1;
                }
            }
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
   return count;
}

#endif

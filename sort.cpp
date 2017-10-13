#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <time.h>
#include <cstdlib>
using namespace std;
#include<vector>
    using std::vector;
#include<algorithm>
//including the quicksort algorithm
#include "quicksort.h"


//prototype function
void printArray(int arr[], int size);
void increase (vector<int> v, int size);
void decrease (vector<int> v, int size);
void random   (vector<int> v, int size);
void phil_x   (vector<int> a1, vector<int> a2, vector<int> a3, int size);


int main(){
    
    //creating array sizes
    int size1 = 100;
    int size2 = 1000;
    int size3 = 10000;
    int size4 = 30000;
    //initializing the vectors
    //with the correct sizes
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    
    int x = 1;
    while(x != 0){
        cout << "Please choose a sorting method\n"
             << "0: Exit program\n"
             << "1: Selection sort\n"
             << "2: Bubble sort\n"
             << "3: Insertion sort\n"
             << "4: Modified insertion sort\n"
             << "5: Merge sort\n"
             << "6: Quicksort\n"
             << "7: Randomized Quicksort\n"
             << "8: Heap sort\n";
        cin >> x;
        if(x == 0){
            cout << "exiting program\n";
            break;
        }
        else if(x == 1){
            cout << "RUNNING SELECTION SORT\n";
        }
        else if(x == 2){
            cout << "RUNNING BUBBLE SORT\n";
        }
        else if(x == 3){
            cout << "RUNNING INSERTION SORT\n";
        }
        else if(x == 4){
            cout << "RUNNING MODIFIED INSERTION\n";
        }
        else if(x == 5){
            cout << "RUNNING MERGE SORT\n";
        }
        else if(x == 6){
            cout << "RUNNING QUICK SORT\n";
            int pass = 1;
            clock_t t1, t2;
            int count = 0;
            int size;
            while(pass < 5){
                if(pass == 1){
                    phil_x(v1,v2,v3,size1);
                    size = size1;
                }
                else if(pass == 2){
                    phil_x(v1,v2,v3,size2);
                    size = size2;
                }
                else if(pass == 3){
                    phil_x(v1,v2,v3,size3);
                    size = size3;
                }
                else{
                    phil_x(v1,v2,v3,size4);
                    size = size4;
                }
                    t1 = clock();
                    quicksort(v1,0,size,count);    //100 values
                    t2 = clock();
                    cout << "for" << size << " values increasing the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                         << " with " << count << " comparisons." << endl;
                    count = 0;
                    
                     t1 = clock();
                    quicksort(v2,0,size,count);    //100 values
                    t2 = clock();
                    cout << "for" << size << " values  decreasing the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                         << " with " << count << " comparisons." << endl;
                    count = 0;
                    
                     t1 = clock();
                    quicksort(v3,0,size,count);    //100 values
                    t2 = clock();
                    cout << "for" << size << " values  randomized the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                         << " with " << count << " comparisons." << endl;
                    count = 0;
                }
                {
                //else if(pass == 2){
                //    phil_x(v1,v2,v3,size2);
                //    t1 = clock();
                //    quicksort(v1,0,1000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 1000 values increasing the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //    
                //     t1 = clock();
                //    quicksort(v2,0,1000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 1000 values decreasing the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //    
                //     t1 = clock();
                //    quicksort(v3,0,1000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 1000 values randomized the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //}
                //else if(pass == 3){
                //    phil_x(v1,v2,v3,size3);
                //    t1 = clock();
                //    quicksort(v1,0,10000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 10000 values increasing the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //    
                //     t1 = clock();
                //    quicksort(v2,0,10000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 10000 values decreasing the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //    
                //     t1 = clock();
                //    quicksort(v3,0,10000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 10000 values randomized the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //}
                //else if(pass == 4){
                //    phil_x(v1,v2,v3,size4);
                //    t1 = clock();
                //    quicksort(v1,0,30000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 30000 values increasing the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //    
                //     t1 = clock();
                //    quicksort(v2,0,30000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 30000 values decreasing the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //    
                //     t1 = clock();
                //    quicksort(v3,0,30000,count);    //100 values
                //    t2 = clock();
                //    cout << "for 30000 values randomized the time is: " << ((t2 - t1)/CLOCKS_PER_SEC)
                //         << " with " << count << " comparisons." << endl;
                //    count = 0;
                //}
                }
                ++pass;
                ++size;
            }
        //}
        //else if(x == 7){
        //    cout << "RUNNING RANDOMIZED QUICK\n";
        //
        //}
        //else if(x == 8){
        //    cout << "RUNNING HEAP SORT\n";
        //}
        //else{
        //    cout << "Please pick a valid option\n";
        //}
    }
    return 0;
}


void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << "[" << arr[i] << "]  ";
        if((i % 10) == 0){              //prints 10 before moving to a new line
            cout << endl;
        }
    }
    return;
}


void increase (vector<int> v, int size){
    for (int i = 0; i < size; ++i){
        v[i] = i;
    }
    return;
}

void decrease(vector<int> v, int size){
    increase(v, size);
    reverse(v.begin(), v.end());
    return;
}

void random(vector<int> v, int size){
    for (int i = 0; i < size; ++i){
        srand(time(NULL));
        int randNum = rand() % 100 + 1;
        v[i] = randNum;
    }
    return;
}


/**
 * filling the vectors with inceasing, decreasing, and random values
 */
void phil_x(vector<int> a1, vector<int> a2, vector<int> a3, int size){
    increase(a1, size);
    decrease(a2, size);
    random(a3, size);
    return;
}

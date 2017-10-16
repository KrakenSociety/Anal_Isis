#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <time.h>
#include <cstdlib>
    using namespace std;
#include<vector>
    using std::vector;
#include<iomanip>
    using std::setw;
#include<algorithm>


//including the sorting files
#include "quicksort.h"
#include "mergesort.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "heapsort.h"
#include "bubblesort.h"



//prototype function
void printVector(vector<int>& v);
void increase (vector<int>& v, int size);
void decrease (vector<int>& v, int size);
void random   (vector<int>& v, int size);
void fill_x   (vector<int>& a1, vector<int>& a2, vector<int>& a3, int size);


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
            int pass = 1;   //creating number of passes to know when to increment the size of the vector
            clock_t t1, t2; //creating time variables to time the algorithms
            int count = 0;  //number of comparisons
            int size  = 0;  //size of vector
            while(pass < 5){
                if(pass == 1){
                    fill_x(v1,v2,v3,size1);
                    size = size1;
                }
                else if(pass == 2){
                    fill_x(v1,v2,v3,size2);
                    size = size2;
                }
                else if(pass == 3){
                    fill_x(v1,v2,v3,size3);
                    size = size3;
                }
                else{
                    fill_x(v1,v2,v3,size4);
                    size = size4;
                }
                //print unsorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                cout << "size: " << size << endl;
                t1 = clock();
                selectionsort(v1, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  increasing the time is: " << ((float)(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time1 = (t2 - t1)/CLOCKS_PER_SEC;

                t1 = clock();
                selectionsort(v2, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  decreasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time2 = (t2 - t1)/CLOCKS_PER_SEC;

                 t1 = clock();
                selectionsort(v3, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  randomized the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time3 = (t2 - t1)/CLOCKS_PER_SEC;
                double avg   = (time1 + time2 + time3) / 3;
                cout << "Having average time of: " << avg << endl;
                //print sorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                pass++;
            }
            
        }
        else if(x == 2){
            cout << "RUNNING BUBBLE SORT\n";
            int pass = 1;   //creating number of passes to know when to increment the size of the vector
            clock_t t1, t2; //creating time variables to time the algorithms
            int count = 0;  //number of comparisons
            int size  = 0;  //size of vector
            while(pass < 5){
                if(pass == 1){
                    fill_x(v1,v2,v3,size1);
                    size = size1;
                }
                else if(pass == 2){
                    fill_x(v1,v2,v3,size2);
                    size = size2;
                }
                else if(pass == 3){
                    fill_x(v1,v2,v3,size3);
                    size = size3;
                }
                else{
                    fill_x(v1,v2,v3,size4);
                    size = size4;
                }
                //print unsorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                cout << "size: " << size << endl;
                t1 = clock();
                bubblesort(v1, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  increasing the time is: " << ((float)(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time1 = (t2 - t1)/CLOCKS_PER_SEC;

                t1 = clock();
                bubblesort(v2, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  decreasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time2 = (t2 - t1)/CLOCKS_PER_SEC;

                 t1 = clock();
                bubblesort(v3, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  randomized the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time3 = (t2 - t1)/CLOCKS_PER_SEC;
                double avg   = (time1 + time2 + time3) / 3;
                cout << "Having average time of: " << avg << endl;
                //print sorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                pass++;
            }
            
        }
        else if(x == 3){
            cout << "RUNNING INSERTION SORT\n";
            int pass = 1;  //creating number of passes to know when to increment the size of the vector
            clock_t t1, t2; //creating time variables to time the algorithms
            int count = 0;  //number of comparisons
            int size  = 0;  //size of vector
            while(pass < 5){
                if(pass == 1){
                    fill_x(v1,v2,v3,size1);
                    size = size1;
                }
                else if(pass == 2){
                    fill_x(v1,v2,v3,size2);
                    size = size2;
                }
                else if(pass == 3){
                    fill_x(v1,v2,v3,size3);
                    size = size3;
                }
                else{
                    fill_x(v1,v2,v3,size4);
                    size = size4;
                }
                //print unsorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                cout << "size: " << size << endl;
                t1 = clock();
                insertionsort(v1, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values increasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time1 = (t2 - t1)/CLOCKS_PER_SEC;

                t1 = clock();
                insertionsort(v2, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  decreasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time2 = (t2 - t1)/CLOCKS_PER_SEC;

                 t1 = clock();
                insertionsort(v3, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  randomized the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time3 = (t2 - t1)/CLOCKS_PER_SEC;
                double avg   = (time1 + time2 + time3) / 3;
                //print sorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                ++pass;
            }
        }
        else if(x == 4){
            //cout << "RUNNING MODIFIED INSERTION\n";
            //int pass = 1;  //creating number of passes to know when to increment the size of the vector
            //clock_t t1, t2; //creating time variables to time the algorithms
            //int count = 0;  //number of comparisons
            //int size  = 0;  //size of vector
            //while(pass < 5){
            //    if(pass == 1){
            //        fill_x(v1,v2,v3,size1);
            //        size = size1;
            //    }
            //    else if(pass == 2){
            //        fill_x(v1,v2,v3,size2);
            //        size = size2;
            //    }
            //    else if(pass == 3){
            //        fill_x(v1,v2,v3,size3);
            //        size = size3;
            //    }
            //    else{
            //        fill_x(v1,v2,v3,size4);
            //        size = size4;
            //    }
            //    //print unsorted matrix
            //    printVector(v1);
            //    printVector(v2);
            //    printVector(v3);
            //    cout << "size: " << size << endl;
            //    t1 = clock();
            //    modifiedinsertionsort(v1, count);    //100 values
            //    t2 = clock();
            //    cout << "for " << size << " values increasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
            //         << " with " << count << " comparisons." << endl;
            //    count = 0;
            //    double time1 = (t2 - t1)/CLOCKS_PER_SEC;
            //
            //    t1 = clock();
            //    modifiedinsertionsort(v2, count);    //100 values
            //    t2 = clock();
            //    cout << "for " << size << " values  decreasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
            //         << " with " << count << " comparisons." << endl;
            //    count = 0;
            //    double time2 = (t2 - t1)/CLOCKS_PER_SEC;
            //
            //     t1 = clock();
            //    modifiedinsertionsort(v3, count);    //100 values
            //    t2 = clock();
            //    cout << "for " << size << " values  randomized the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
            //         << " with " << count << " comparisons." << endl;
            //    count = 0;
            //    double time3 = (t2 - t1)/CLOCKS_PER_SEC;
            //    double avg   = (time1 + time2 + time3) / 3;
            //    //print sorted matrix
            //    printVector(v1);
            //    printVector(v2);
            //    printVector(v3);
            //    ++pass;
            //}
        }
        else if(x == 5){
            cout << "RUNNING MERGE SORT\n";
            int pass = 1;  //creating number of passes to know when to increment the size of the vector
            clock_t t1, t2; //creating time variables to time the algorithms
            int count = 0;  //number of comparisons
            int size  = 0;  //size of vector
            while(pass < 5){
                if(pass == 1){
                    fill_x(v1,v2,v3,size1);
                    size = size1;
                }
                else if(pass == 2){
                    fill_x(v1,v2,v3,size2);
                    size = size2;
                }
                else if(pass == 3){
                    fill_x(v1,v2,v3,size3);
                    size = size3;
                }
                else{
                    fill_x(v1,v2,v3,size4);
                    size = size4;
                }
                //print unsorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                cout << "size: " << size << endl;
                t1 = clock();
                mergesort(v1, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  increasing the time is: " << ((float)(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time1 = (t2 - t1)/CLOCKS_PER_SEC;

                t1 = clock();
                mergesort(v2, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  decreasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time2 = (t2 - t1)/CLOCKS_PER_SEC;

                 t1 = clock();
                mergesort(v3, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  randomized the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time3 = (t2 - t1)/CLOCKS_PER_SEC;
                double avg   = (time1 + time2 + time3) / 3;
                cout << "Having average time of: " << avg << endl;
                //print sorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                pass++;
            }
        }
        else if(x == 6){
            cout << "RUNNING QUICK SORT\n";
            int pass = 1;  //creating number of passes to know when to increment the size of the vector
            clock_t t1, t2; //creating time variables to time the algorithms
            int count = 0;  //number of comparisons
            int size  = 0;  //size of vector
            while(pass < 5){
                if(pass == 1){
                    fill_x(v1,v2,v3,size1);
                    size = size1;
                }
                else if(pass == 2){
                    fill_x(v1,v2,v3,size2);
                    size = size2;
                }
                else if(pass == 3){
                    fill_x(v1,v2,v3,size3);
                    size = size3;
                }
                else{
                    fill_x(v1,v2,v3,size4);
                    size = size4;
                }
                //print unsorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                cout << "size: " << size << endl;
                t1 = clock();
                quicksort(v1,0,size - 1,count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  increasing the time is: " << ((float)(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time1 = (t2 - t1)/CLOCKS_PER_SEC;

                t1 = clock();
                quicksort(v2,0,size - 1,count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  decreasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time2 = (t2 - t1)/CLOCKS_PER_SEC;

                 t1 = clock();
                quicksort(v3,0,size - 1,count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  randomized the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time3 = (t2 - t1)/CLOCKS_PER_SEC;
                double avg   = (time1 + time2 + time3) / 3;
                cout << "Having average time of: " << avg << endl;
                //print sorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                pass++;
            }
        }
        else if (x == 7){
            cout << "RUNNING RANDOMIZED QUICK SORT\n";
            int pass = 1;  //creating number of passes to know when to increment the size of the vector
            clock_t t1, t2; //creating time variables to time the algorithms
            int count = 0;  //number of comparisons
            int size  = 0;  //size of vector
            while(pass < 5){
                if(pass == 1){
                    fill_x(v1,v2,v3,size1);
                    size = size1;
                }
                else if(pass == 2){
                    fill_x(v1,v2,v3,size2);
                    size = size2;
                }
                else if(pass == 3){
                    fill_x(v1,v2,v3,size3);
                    size = size3;
                }
                else{
                    fill_x(v1,v2,v3,size4);
                    size = size4;
                }
                //print unsorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                cout << "size: " << size << endl;
                t1 = clock();
                randomquicksort(v1,0,size - 1,count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  increasing the time is: " << ((float)(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time1 = (t2 - t1)/CLOCKS_PER_SEC;

                t1 = clock();
                randomquicksort(v2,0,size - 1,count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  decreasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time2 = (t2 - t1)/CLOCKS_PER_SEC;

                 t1 = clock();
                randomquicksort(v3,0,size - 1,count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  randomized the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time3 = (t2 - t1)/CLOCKS_PER_SEC;
                double avg   = (time1 + time2 + time3) / 3;
                cout << "Having average time of: " << avg << endl;
                //print sorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                pass++;
            }
        }
        else if (x == 8){
            cout << "RUNNING HEAP SORT\n";
            int pass = 1;  //creating number of passes to know when to increment the size of the vector
            clock_t t1, t2; //creating time variables to time the algorithms
            int count = 0;  //number of comparisons
            int size  = 0;  //size of vector
            while(pass < 5){
                if(pass == 1){
                    fill_x(v1,v2,v3,size1);
                    size = size1;
                }
                else if(pass == 2){
                    fill_x(v1,v2,v3,size2);
                    size = size2;
                }
                else if(pass == 3){
                    fill_x(v1,v2,v3,size3);
                    size = size3;
                }
                else{
                    fill_x(v1,v2,v3,size4);
                    size = size4;
                }
                //print unsorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                cout << "size: " << size << endl;
                t1 = clock();
                heapsort(v1, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  increasing the time is: " << ((float)(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time1 = (t2 - t1)/CLOCKS_PER_SEC;

                t1 = clock();
                heapsort(v2, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  decreasing the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time2 = (t2 - t1)/CLOCKS_PER_SEC;

                 t1 = clock();
                heapsort(v3, count);    //100 values
                t2 = clock();
                cout << "for " << size << " values  randomized the time is: " << (float(t2 - t1)/CLOCKS_PER_SEC)
                     << " with " << count << " comparisons." << endl;
                count = 0;
                double time3 = (t2 - t1)/CLOCKS_PER_SEC;
                double avg   = (time1 + time2 + time3) / 3;
                cout << "Having average time of: " << avg << endl;
                //print sorted matrix
                printVector(v1);
                printVector(v2);
                printVector(v3);
                pass++;
            }
        }
    }
    return 0;
}


void printVector(vector<int>& v){
    if (v.size() == 100){
        int count = 1;
        for(int i = 0; i < v.size(); i++){
            cout << "[" << setw(3) << v[i] << "] ";
            if(count == 10){              //prints 10 before moving to a new line
                count = 0;
                cout << endl;
            }
            count++;
        }
        cout << endl;
    }
    return;
}


void increase (vector<int>& v, int size){
    v.clear(); //make sure vector is empty
    for (int i = 0; i < size; ++i){
        v.push_back(i+1);
        //cout << v[i] << endl;
    }
    return;
}

void decrease(vector<int>& v, int size){
    v.clear(); //make sure vector is empty
    increase(v, size);
    reverse(v.begin(), v.end());
    return;
}

void random(vector<int>& v, int size){
    v.clear(); //make sure vector is empty
    for (int i = 0; i < size; ++i){
        //srand(time(NULL));
        int randNum = rand() % 100 + 1;
        v.push_back(randNum);
    }
    return;
}


/**
 * filling the vectors with inceasing, decreasing, and random values
 */
void fill_x(vector<int>& a1, vector<int>& a2, vector<int>& a3, int size){
    increase(a1, size);
    decrease(a2, size);
    random(a3, size);
    return;
}

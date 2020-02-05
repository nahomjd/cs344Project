//Jackson nahom
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include "The_h_File.h"

using namespace std;

//int Integer_count = 0;




int main()
{
    int ran;
    int n = 10000;
    Integer test[n];
   // int test2[10000];

    for(int i = 0; i < n; i++){
        test[i] = Integer(i);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //insertion sort
    cout<<"insertion sort sorted array: " << endl;
    insertion_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //quicksort
    cout<<"quicksort sorted array: " << endl;
    quicksort(test, 0, n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort Random sorted array: " << endl;
    quicksortRandom(test, 0, n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;



    cout<<"quicksort in place sorted array: " << endl;
    quicksort_in_place(test, 0, n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"selection sort sorted array: " << endl;
    selection_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"mergesort sorted array: " << endl;
    mergesort(test, 0, n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"sort sorted array: " << endl;
    sort(test, test + n);
    cout << Integer_count;
    cout << endl;

    //Reversed array/////////////////////
    /////////////////////////////////////
    /////////////////////////////////////

    for(int i = 0; i < n; i++){
        test[n] = Integer(i);
        n--;
    }
    n = 10000;

   // reverse(test, test + 10000);
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //insertion sort
    cout<<"insertion sort reversed array: " << endl;
    insertion_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        test[n] = Integer(i);
        n--;
    }
    n = 10000;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //quicksort
    cout<<"quicksort reversed array: " << endl;
    quicksort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        test[n] = Integer(i);
        n--;
    }
    n = 10000;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort Random reversed array: " << endl;
    quicksortRandom(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        test[n] = Integer(i);
        n--;
    }
    n = 10000;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort in place reversed array: " << endl;
    quicksort_in_place(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        test[n] = Integer(i);
        n--;
    }
    n = 10000;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"selection sort reversed array: " << endl;
    selection_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        test[n] = Integer(i);
        n--;
    }
    n = 10000;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"mergesort reversed array: " << endl;
    mergesort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        test[n] = Integer(i);
        n--;
    }
    n = 10000;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"sort reversed array: " << endl;
    sort(test, test + n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //Random arrays//////////////////////
    /////////////////////////////////////
    /////////////////////////////////////
    //Part1
    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //insertion sort
    cout<<"insertion sort random1 array: " << endl;
    insertion_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //quicksort
    cout<<"quicksort random1 array: " << endl;
    quicksort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort Random random1 array: " << endl;
    quicksortRandom(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort in place random1 array: " << endl;
    quicksort_in_place(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"selection sort random1 array: " << endl;
    selection_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"mergesort random1 array: " << endl;
    mergesort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"sort random1 array: " << endl;
    sort(test, test + n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //Part2
    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //insertion sort
    cout<<"insertion sort random2 array: " << endl;
    insertion_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //quicksort
    cout<<"quicksort random2 array: " << endl;
    quicksort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort Random random2 array: " << endl;
    quicksortRandom(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort in place random2 array: " << endl;
    quicksort_in_place(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"selection sort random2 array: " << endl;
    selection_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"mergesort random2 array: " << endl;
    mergesort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"sort random2 array: " << endl;
    sort(test, test + 10000);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //Part3
    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //insertion sort
    cout<<"insertion sort random3 array: " << endl;
    insertion_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    //quicksort
    cout<<"quicksort random3 array: " << endl;
    quicksort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort random3 array: " << endl;
    quicksortRandom(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"quicksort in place random3 array: " << endl;
    quicksort_in_place(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"selection sort random3 array: " << endl;
    selection_sort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"mergesort random3 array: " << endl;
    mergesort(test, 0, n);
    cout << Integer_count;
    cout << endl;

    for(int i = 0; i < n; i++){
        ran = rand() % 10;
        test[i] = Integer(ran);
    }
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;

    cout<<"sort random3 array: " << endl;
    sort(test, test + n);
    cout << Integer_count;
    cout << endl;
    Integer_count = 0;
    cout << Integer_count;
    cout << endl;


    return 0;
}

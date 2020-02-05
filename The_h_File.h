//Jackson Nahom
#ifndef THE_H_FILE_H_INCLUDED
#define THE_H_FILE_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <algorithm>

int Integer_count = 0;

class Integer{

    public:
//default constructor
        Integer() : value(0) {}
//constructor
        Integer(int & x) : value(x) {}
//copy constructor
        Integer(const Integer & x2) { value = x2.value; Integer_count++;}
//method value() will return value of integer
        friend int Value(const Integer & x){ return x.value; }
/*< less than operator returns true if value
to left is less than value to the right
Also adds 1 to integer_count
Makes sure operator is either constant method with
constant argument or a standalone function with two
arguments. Will require operator overloading*/
        friend bool operator<(const Integer & a1, const Integer & a2);

/*An assignment operator (=) that sets the value of the Integer on
the left to be equal to the value of the Integer on the right. In
addition, the operator adds 1 to the count of the Integer on the
left.
*/
        Integer& operator=(const Integer a){

            Integer_count++;
            value = a.value;
            return *this;
        }

    private:
        int value;
};

inline bool operator<(const Integer & a1, const Integer & a2){
    if(a1.value < a2.value){
        Integer_count++;
        return true;
    }else
        Integer_count++;
        return false;
}


template <class T>
void insertion_sort(T a[], int start, int stop){
    T x;
    int pivot;
    for(int k = start+1; k < stop-1; k++){
        x = a[k];
        pivot = k-1;
        while(pivot >= start && x < a[pivot]){
            a[pivot+1] = a[pivot];
            --pivot;
            a[pivot+1] = x;
        }
    }
}

template <class T>
void partition(T a[], int start, int stop, int & pivot)
{
    std::swap(a[pivot], a[start]);
    // moves pivot to start
    T * temp1 = new T[stop - start];
    T * temp2 = new T[stop - start];

    int k = 0; // next available position in temp1
    int j = 0; // next available position in temp2
    for (int i = start + 1; i < stop; ++i){
        //cout << "loop ran" << i << " " << a[i] << " " << a[start] <<" \n";
        if (a[i] < a[start]) {
            temp1[k] = a[i];
          //  cout << "copying " << a[i] << endl;
            ++k;
        }else if (!(a[i] < a[start])){
           temp2[j] = a[i];
            ++j;
        }
    }
    temp1[k] = a[start]; // pivot
    pivot = start + k; // final index in a
    ++k;

    std::copy(temp1, temp1 + k, a + start);
    std::copy(temp2, temp2 + j, a + k + start);

    delete temp1;
    delete temp2;
}

template <class T>
void partition_in_place(T a[], int start, int stop, int & pivot){

    int p, q, r = 0;
    p = start;
    q = start;
    r = stop - 1;

    std::swap(a[pivot], a[r]);
    pivot = Value(a[r]);
    while(q < r){
        if(a[q] < pivot){
            std::swap(a[p], a[q]);
            p++;
        }
        q++;
    }
    std::swap(a[p], a[r]);
    pivot = p;

}

template <class T>
void quicksort(T a[], int start, int stop)
{
        if(stop - start >= 2) {
            int pivot = start;
            partition(a, start, stop, pivot);

            quicksort(a, start, pivot);
            quicksort(a, pivot + 1, stop);
        }
}

template <class T>
void quicksort_in_place(T a[], int start, int stop)
{
        if(stop - start >= 2) {
            int pivot = start;
            partition_in_place(a, start, stop, pivot);

            quicksort(a, start, pivot);
            quicksort(a, pivot + 1, stop);
        }
}

template <class T>
void quicksortRandom(T a[], int start, int stop)
{
// Sorts elements in a in increasing order using the
// quicksort algorithm. Sorts elements in the range
// [start,stop). Sorts according to the < operator.
//
// PRECONDITION: The indices are valid and start
// occurs before stop.
//
// ASSUMPTION ON TEMPLATE ARGUMENT: Values of type T
// can be compared using the < operator.
    if (stop - start > 1) {
        int pivot = start + rand() % (stop - start);
        partition(a, start, stop, pivot);
        quicksort(a, start, pivot);
        quicksort(a, pivot + 1, stop);
        }
}

template <class T>
void merge_(T a[], int start, int middle, int stop);

template<class T>
void mergesort(T a[], int start, int stop){

    if(stop - start > 1){
        int middle = (start + stop) / 2;

        mergesort(a, start, middle);
        mergesort(a, middle, stop);

        merge_(a, start, middle, stop);
    }
}

template<class T>
void merge_(T a[], int start, int middle, int stop){

    int i1 = start;
    int i2 = middle;

    T * result = new T[stop - start];
    int j = 0;

    while(i1 < middle && i2 < stop){
        if(a[i1] < a[i2]){
            result[j] = a[i1];
            ++i1;
        }else{
            result[j] = a[i2];
            ++i2;
        }
        ++j;
    }
    std::copy(a + i1, a + middle, result + j);
    std::copy(a + i2, a + stop, result + j);
    std::copy(result, result +(stop - start), a + start);

    delete [] result;

}

template<class T>
void selection_sort(T a[], int start, int stop){
    while(stop -start > 1){
        auto itr_max = std::max_element(a + start, a + stop);
        std::swap(*itr_max, a[stop - 1]);
        --stop;
    }
}


#endif // THE_H_FILE_H_INCLUDED

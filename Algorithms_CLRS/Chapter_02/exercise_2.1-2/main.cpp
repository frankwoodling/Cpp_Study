// CLRS Exercises
// 2.1-2
// Rewrite the insertion-sort procedure to sort into non-increasing instead of non-decreasing order

#include <iostream>
#include <vector>

std::vector<int> insertion_sort_reverse(std::vector<int> a){
    for(int j = 1; j < a.size(); j++){
        int key = a[j];
        // insert a[j] into the sorted sequence A[1..j-1]
        int i = j - 1;

        while(i < a.size() and a[i] < key){
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = key;
    }

    return a;
}

int main(){
    std::vector<int> vec(6);

    vec = {5, 2, 4, 6, 1, 3};
    //vec = {1, 1, 1, 4, 1, 2};
    //vec = {31, 41, 59, 26, 41, 58};
    //vec = {1, 2, 3, 4, 5, 6, 7};
    vec = insertion_sort_reverse(vec);

    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    return 0;
}

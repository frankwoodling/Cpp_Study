// CLRS Exercise
// 2.1-3
// Write pseudocode for a linear search looking for v in a sequence of numbers


// for i in 1:a.length
//      if a[i] == v
//          print i
//          break loop
//      else if i = a.length
//          print NIL

#include <iostream>
#include <vector>

int main(){
    std::vector <int> a;
    a = {1, 2, 3, 4, 5, 6};
    int v = 6;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == v){
            std::cout << i;
            break;
        }
        else if(i == a.size()){
            std::cout << "NIL";
            break;
        }
    }
}

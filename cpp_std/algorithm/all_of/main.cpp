//
// Created by 冯伟明 on 2023/3/12.
//

// all_of <page 15>
// 当给定范围中的每个元素均满足条件时饭回true

#include <list>
#include <algorithm>
#include <iostream>

int main() {
    using namespace std;
    list<int> li {50,40,10,20,20,11};
    list<int>::iterator iter;
    cout << "li = (" ;
    for (iter = li.begin(); iter != li.end(); iter++)
        cout << *iter << " ";
    cout << ")" << endl;

    // check if all elements in li are even.
    auto is_even = [](int elem) {
        return !(elem % 2);
    };
    if (all_of(li.begin(),li.end(), is_even))
        cout << "All the elements are even numbers.\n";
    else
        cout << "Not all the elements are even numbers.\n";
}

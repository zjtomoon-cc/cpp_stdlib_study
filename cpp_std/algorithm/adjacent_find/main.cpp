#include <list>
#include <algorithm>
#include <iostream>

// adjacent_find <page13>
// 搜索相等或满足指定条件的两个相邻元素
// params: exec first last pred
// exec 要使用的执行策略
// first 要搜索的范围中的第一个元素位置处的前向迭代器
// last 要搜索的范围中的最后一个元素之后下一个元素位置处的前向迭代器
// pred 给定要搜索范围内相邻元素的值需满足的条件的二元谓词
// 返回值：指向相互之间相等（第一个版本中）或满足二元谓词给定条件（第二个版本中）的相邻元
//素中第一个元素的前向迭代器（如果找到了此类元素对）。 否则，将返回指向 last 的
//迭代器。

// adjacent_find算法是不改变顺序的算法

bool twice (int elem1,int elem2) {
    return elem1 * 2 == elem2;
}

int main() {
    using namespace std;
    list<int> L;
    list<int>::iterator  Iter;
    list<int>::iterator  result1,result2;

    L.push_back(50);
    L.push_back(40);
    L.push_back(10);
    L.push_back(20);
    L.push_back(20);

    cout << "L = (" ;
    for (Iter = L.begin(); Iter != L.end(); Iter++)
        cout << *Iter << " " ;
    cout << ")" << endl;

    result1 = adjacent_find(L.begin(),L.end());
    if (result1 == L.end())
        cout << "There are no two adjacent elements that are equal."
            << endl;
    else
        cout << "There are two adjacent elements that are equal.\n"
            << "They have a value of "
            << *(result1) << "." << endl;

    result2 = adjacent_find(L.begin(),L.end(), twice);
    if (result2 == L.end())
        cout << "There are not two adjacent elements where the "
            << "second is twice the first." << endl;
    else
    {
        cout << "There are two adjacent elements where the"
            << "second is twice the first.\n"
            << "They have values of " << *(result2++)
            << " & " << *result2 << "." << endl;
    }

    return 0;
}

/**
    测试已排序范围中是否有等于指定值的元素，或在二元谓词指定的意义上与指定值等效的元素
*/

#include<list>
#include<vector>
#include<algorithm>
#include<functional>
#include<iostream>

bool mod_lesser(int elem1,int elem2)
{
    if (elem1 < 0)
        elem1 = -elem1;
    if (elem2 < 0)
        elem2 = -elem2;
    return elem1 < elem2;
}

int main() {
    using namespace std;

    list<int> List1;
    List1.push_back(50); 
    List1.push_back(10); 
    List1.push_back(30); 
    List1.push_back(20); 
    List1.push_back(25); 
    List1.push_back(5); 

    List1.sort();

    cout << "List1 = (";
    for (auto Iter : List1)
        cout << Iter << " ";
    cout << ")" << endl;
    // default binary search for 10
    if (binary_search(List1.begin(),List1.end(),10))
        cout << "There is an element in list List1 with a value equal to 10." << endl;
    else 
        cout << "There is no element in list List1 with a value equal to 10." << endl;
    
    // a binary_search under the binary predicate greater
    List1.sort(greater<int>());
    if (binary_search(List1.begin(),List1.end(),10,greater<int>()))
        cout << "There is an element in List1 with a value greater than 10"
        << "under greater than" << endl;
    else 
        cout << "No element in list List1 a value greater than 10"
        << " under greater than." << endl;

    // a binary_search underf the user-defined binary predicate mod_lesser
    vector<int> v1;

    for (auto i = -2; i <= 4; ++i)
    {
         v1.push_back(i);
    }
    sort(v1.begin(),v1.end(),mod_lesser);

    cout << "Ordered using mod_lesser,vector v1 = (" ;
    for (auto Iter : v1)
        cout << Iter << " ";
    cout << ")" << endl;

    if (binary_search(v1.begin(),v1.end(),-3, mod_lesser))
        cout << "There is an element with a value equipvalent to -3"
        << "under mod_lesser." << endl;

    else
        cout << "There is not an element with a value eqivalent to -3"
        << "under mod_lesser." << endl;
    
}

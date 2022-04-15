#include <bits/stdc++.h>
using namespace std;

// C++ STL Algorithms

// COMPARATORS

// 1
// bool comp(int el1, int el2)
// {
//     if(el1>=el2)
//     {
//         return true;
//     }
//     return false;
// }

// int main()
// {
    
//     int arr[10] = {5,2,1,10,4,9,3,6,8,7};

//     sort(arr, arr+10, comp);

//     for(int i=0; i<10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// 2
// bool comp(pair<int,int> el1, pair<int,int> el2)
// {
//     if(el1.first < el1.second)
//     {
//         return true;
//     }
//     if(el1.first == el2.first)
//     {
//         if(el1.second > el2.second)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     pair<int,int> arr[] = {{4,1},{2,5},{2,9}};

//     for(int i=0; i<3; i++)
//     {
//         cout << arr[arr->first, arr->second ] << " ";
//     }
//     cout << endl;

// }



// Array
int main()
{
    int n = 5;
    int arr[n] = {10,9,3,4,1};

    // sorting
    sort(arr, arr+n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // reverse
    reverse(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Descending Order With greater<int>
    // sort(arr, arr+n, greater<int>);
    // for(int i=0; i<n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // Minimum/Maximum element
    int element_min = *min_element(arr, arr+n);
    cout << element_min << endl;

    int element_max = *max_element(arr, arr+n);
    cout << element_max << endl;

    // Sum of a Range of Elements
    int sum = accumulate(arr, arr+n, 0);
    cout << sum << endl;

    // COUNTS "Repeatation" of an Element
    int cnt = count(arr, arr+n, 9);
    cout << cnt << endl;

    // "First OCCURRENCE" of an Element
    auto it = find(arr, arr+n, 4);    // Find Index of 4
    int index = it - arr;         // iterator it point on the location of the 4, so we have to find index by subtracting
    cout << index << endl;

    // Binary Search --True/False --(Only Works in Sorted Arrays/Vector)

    // First Sort The Unsorted Array/Vector
    sort(arr, arr+n);

    bool result = binary_search(arr, arr+n, 9);
    if(result==1)    // Because It Returns 1/0 1==True and 0==False
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    // Lower Bound
    auto it2 = lower_bound(arr, arr+n, 5);
    cout << *it2 << endl;    // "9" is the only element which is not less than 5

    // Upper Bound
    auto it3 = upper_bound(arr, arr+n, 5);
    cout << *it3 << endl;    // "9" is the only element which is Just Greater Than 5

    // NEXT Permutaion
    bool res = next_permutation(arr, arr+n);
    cout << res << endl;

    // PREVIOUS Permutation
    bool res2 = next_permutation(arr, arr+n);
    cout << res2 << endl;
}



// Vector
// int main ()
// {
//     // Sort
//     vector <int> vec = {222, 33, 333, 44, 555};

//     sort(vec.begin(), vec.end());     // Sorts in Asscending Order
//     for(auto it: vec)
//     {
//         cout << it << " ";
//     }
//     cout << endl;

//     // sort(vec.begin()+1, vec.begin()+4);   // sort a given range
//     // for(auto it: vec)
//     // {
//     //     cout << it << " ";
//     // }
//     // cout << endl; 

//     // Reverse
//     reverse(vec.begin(), vec.end());   // Reverse in Descending Order (Because already sorted the vector above)
//     for(auto it: vec)
//     {
//         cout << it << " ";
//     }
//     cout << endl;

//     sort(vec.begin()+1, vec.begin()+4);   // sort a given range
//     for(auto it: vec)
//     {
//         cout << it << " ";
//     }
//     cout << endl; 

//     // Minimum/Maximum element
//     int element_min = *min_element(vec.begin(), vec.end());
//     cout << element_min << endl;

//     int element_max = *max_element(vec.begin(), vec.end());
//     cout << element_max << endl;

//     // Sum of Range of Elements
//     int sum = accumulate(vec.begin(), vec.begin()+2, 0);
//     cout << sum << endl;

//     // COUNTS Repeatation of an Element
//     int cnt = count(vec.begin(), vec.end(), 333);
//     cout << cnt << endl;

//     // First OCCURRENCE of an Element
//     auto it = find(vec.begin(), vec.end(), 555);    // Find Index of 555
//     int index = it - vec.begin();         // iterator it point on the location of the 555, so we have to find index by subtracting
//     cout << index << endl;

//     // Binary Search --(1/0)True/False --(Only Works in Sorted Arrays/Vector)
    
//     // First Sort The Unsorted Array/Vector
//     sort(vec.begin(), vec.end());

//     bool result = binary_search(vec.begin(), vec.end(), 555);
//     if(result==1)    // Because It Returns 1/0 1==True and 0==False
//     {
//         cout << "True" << endl;
//     }
//     else
//     {
//         cout << "False" << endl;
//     }

//     // Lower Bound
//     auto it2 = lower_bound(vec.begin(), vec.end(), 500);
//     cout << *it2 << endl;    // "555" is the only element which is not less than 500

//     // Lower Bound
//     auto it3 = lower_bound(vec.begin(), vec.end(), 500);
//     cout << *it3 << endl;    // "555" is the only element just greater than 500

//     // NEXT Permutaion
//     bool res = next_permutation(vec.begin(), vec.end());
//     cout << res << endl;

//     // PREVIOUS Permutation
//     bool res2 = next_permutation(vec.begin(), vec.end());
//     cout << res2 << endl;
// }

// struct node
// {
//     string str;
//     int i;
//     double doub;
//     char ch;

//     node(str_, i_, doub_, ch_)
//     {
//         str = str_;
//         i = i_;
//         doub = doub_;
//     }
// };

// int main()
// {
//     node raj = new node("Yuvraj", 777, 77.77, "");
// }


// Vector
// 1d vector
// int main()
// {
//     cout << "1d Vector: " << endl;

//     vector<int> v(4, 100);

//     v.emplace_back(3);    // or push_back();
//     v.emplace_back(8);

//     for(auto elements: v)       // loop for elements of vector
//     {
//         cout << elements << " ";
//     }
//     cout << endl;

//     cout << v[2] << endl; //or  v.at(2);   // ex. 100

//     cout << v.size() << endl << v.at(5) << endl;   // size of vector ex. 6 and 5th element {8}

//     v.pop_back();   // deletes last element we added ex {8}

//     sort(v.begin(), v.end());   // Sorts the elements in ASSCENDING Order

//     for(auto elements: v)  // loop for elements after pop_back();
//     {
//         cout << elements << " ";
//     }
//     cout << endl;
// }

// 2d Vector
// int main()
// {
//     //1
//     int m,n;
//     cin >> m >> n;

//     vector<vector<int>>vec(m, vector<int>(n, 22));    // 
    
//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cout << vec[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     vector<vector<int>>vec;

//     vector<int>v1;               //    |           |  i
//     v1.push_back(1);             //    |           |  3
//     v1.push_back(2);             //    |           |  2
//                                  //    |  10   20  |  1
//     vector<int>v2;               //    |__1____2___|  0
//     v2.push_back(10);            //   j   0    1  
//     v2.push_back(20);

//     vec.push_back(v1);
//     vec.push_back(v2);

//     for(auto i: vec)
//     {
//         for(auto j: i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }


//Reverse Vector
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int l;

//     vector<int> vec(n, l);

//     for(int i=0; i<n; i++)
//     {
//         cin >> vec[i];
//         l = vec[i];
//     }

//     for(auto it= vec.rbegin(); it!=vec.rend(); it++)
//     {
//         cout << *it << " ";
//     }
// }


// Vector Erase
// int main()
// {
//     int n,x,a,b;
//     cin >> n;

//     vector<int>v;
//     vector<int>::iterator it,it1,it2;    // Assigning Iterators for vector

//     for(int i=0; i<=n; i++)
//     {
//         int input;
//         v.emplace_back(input);
//         cin >> input;
//     }

//     v.erase(v.begin());

//     for(auto it = v.begin(); it<v.end(); it++)
//     {
//         cout << *it << " ";
//     }

//     // remove x
//     cin >> x;
//     it = v.begin();
//     v.erase(it+(x-1));

//     //remove a to b
//     cin >> a >> b;
//     it1 = v.begin()+(a-1);
//     it2 = v.begin()+(b-1);
//     v.erase(it1, it2);

//     cout << v.size() << endl;

//     for(auto it = v.begin(); it<v.end(); it++)
//     {
//         cout << *it << " ";
//     }    
// }


// Sets
// int main()
// {
//     // Unordered Set
//     unordered_set<int>us{5,3,1,3,5};
    
//     us.insert(9);
//     us.emplace(0);
//     us.insert(11);

//     for(auto elements: us)
//     {
//         cout << elements << " ";
//     }
//     cout << endl;    

    
//     // Oredered Set
//     set<int> myset{5,3,1,3,5};

//     int x;
//     cin >> x;

//     myset.insert(x);

//     for(auto elements: myset)
//     {
//         cout << elements << " ";    // {1,3,5,"cin"}
//     }
//     cout << endl;
    
//     myset.erase(myset.begin());

//     for(auto elements: myset)
//     {
//         cout << elements << " ";    // {3, 5, "cin"}
//     }
//     cout << endl;

//     myset.emplace(9);

//     for(auto elements: myset)
//     {
//         cout << elements << " ";    // {3,5,"cin", 9}
//     }
//     cout << endl;

//     myset.erase(myset.begin(), myset.end());

//     for(auto elements: myset)
//     {
//         cout << elements << " ";    // {3,5,"cin", 9}
//     }       

//     myset.insert(11);
//     for(auto elements: myset)
//     {
//         cout << elements << " ";    // {3,5,"cin", 9}
//     }     
//     cout << endl;


//     //Multiset 
//     multiset<int> ms{4,4,4,4,4,1,1,2,2,3,3,3};

//     for(auto elements: ms)
//     {
//         cout << elements << " ";
//     }         
//     cout << endl;

//     cout << ms.size() << endl;

//     cout << ms.count(4) << endl;
// }


// Iterators
// int main()
// {
//     print array 1
//     array<int,6>arr = {1,2,3,4,5,6};
//     for(auto it = arr.begin(); it!=arr.end(); it++)
//     {
//         cout << *it << " ";
//     }

//     REVERSE array
//     array<int,6>arr = {1,2,3,4,5,6};
//     for(auto it = arr.rbegin(); it<arr.rend(); it++)
//     {
//         cout << *it << " ";
//     }


//     print array 2
//     array<int,6>arr = {1,2,3,4,5,6};
//     for(auto it: arr)
//     {
//         cout << it << " ";
//     }
// }


// Map
//Time Complexity of map = log(n)
// int main()
// {
//     map<string, int>mpp;
//     mpp["Yuvraj"] = 11;
//     mpp["Paliwal"] = 11;      // 2 Unique Keys can have Same Values;
//     mpp["Rohan"] = 22;
//     mpp["Mohit"] = 33;
//     mpp["Yuvraj"] = 5;     // Overrites Value 11 to 5

//     mpp.emplace("Yuvraj", 7);   // Overrites Value 5 to 7

//     mpp.erase("Rohan");    // mpp.erase(Key);
//     mpp.erase(mpp.begin());    // Deletes first element

//     // mpp.insert()

//     // mpp.erase(mpp.begin(), mpp.begin()+1);   // Deletes Given Range

//     // mpp.clear();   // Entire Map Will be Deleted

//     auto it = mpp.find("Mohit");   // Point to the Given Key

//     if(mpp.empty())
//     {
//         cout << "Yes It is Empty!" << endl;
//     }
//     else 
//     {
//         cout << "Not Empty!" << endl;
//     }

//     mpp.count("Yuvraj");    // Always gives 1 as it stores only 1

//     // for(auto it: mpp)      // Prints Map  (1)
//     // {
//     //     cout << it.first << " " << it.second << endl;
//     // }

//     for(auto it = mpp.begin(); it!=mpp.end(); it++)    // Prints Map (2)
//     {
//         cout << it->first << " " << it->second << endl;
//     }
// }




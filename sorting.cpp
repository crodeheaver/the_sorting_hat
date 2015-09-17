#include <iostream>
#include <algorithm>
#include <vector>

#include <ctime>

using namespace std;


vector<int> bubble_sort(vector<int> vect)
{
    return vect;
}

vector<int> quicksort(vector<int> vect)
{
    return vect;
}

vector<int> radix_sort(vector<int> vect)
{
    return vect;
}

template <class ForwardIterator>
  bool is_sorted (ForwardIterator first, ForwardIterator last)
{
  if (first==last) return true;
  ForwardIterator next = first;
  while (++next!=last) {
    if (*next<*first)     // or, if (comp(*next,*first)) for version (2)
      return false;
    ++first;
  }
  return true;
}

int main()
{
    clock_t t;
    
    
    
    vector<int> vect1, vect2, vect3;
    for (int i=1; i<100; ++i) vect1.push_back(i);
    for (int i=1; i<10000; ++i) vect2.push_back(i);
    for (int i=1; i<1000000; ++i) vect3.push_back(i);
    random_shuffle ( vect1.begin(), vect1.end() );
    random_shuffle ( vect2.begin(), vect2.end() );
    random_shuffle ( vect3.begin(), vect3.end() );
    
    t = clock();
    vector<int> ret1 = bubble_sort(vect1);
    t = clock() - t;
    cout << "bubble_sort round 1: " << is_sorted(ret1.begin(),ret1.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    
    t = clock();
    vector<int> ret2 = bubble_sort(vect2);
    t = clock() - t;
    cout << "bubble_sort round 2: " << is_sorted(ret2.begin(),ret2.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    t = clock();
    vector<int> ret3 = bubble_sort(vect3);
    t = clock() - t;
    cout << "bubble_sort round 3: " << is_sorted(ret3.begin(),ret3.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    
    t = clock();
    ret1 = quicksort(vect1);
    t = clock() - t;
    cout << "QuickSort round 1: " << is_sorted(ret1.begin(),ret1.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    t = clock();
    ret2 = quicksort(vect2);
    t = clock() - t;
    cout << "QuickSort round 2: " << is_sorted(ret2.begin(),ret2.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    t = clock();
    ret3 = quicksort(vect3);
    t = clock() - t;
    cout << "QuickSort round 3: " << is_sorted(ret3.begin(),ret3.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    t = clock();
    ret1 = radix_sort(vect1);
    t = clock() - t;
    cout << "radix_sort round 1: " << is_sorted(ret1.begin(),ret1.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    t = clock();
    ret2 = radix_sort(vect2);
    t = clock() - t;
    cout << "radix_sort round 2: " << is_sorted(ret2.begin(),ret2.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    t = clock();
    ret3 = radix_sort(vect3);
    t = clock() - t;
    cout << "radix_sort round 3: " << is_sorted(ret3.begin(),ret3.end()) << " in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds" << endl;
    
    
    return 0;
}
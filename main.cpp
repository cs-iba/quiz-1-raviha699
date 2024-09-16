@ -1,4 +1,6 @@
#include <iostream>
#include<utility>

#include <bits/stdc++.h>

using namespace std;
@ -7,6 +9,15 @@ using namespace std;
// `pos` specifies the index to sort by if sorting a vector of pairs.
template <typename T>
void stableSelectionSort(vector<T>& a) {
    int n=a.size();
         for (int i = 0; i < n-1; i++) {
            int min = i;
            for (int j = i+1; j < n; j++) {
                if (a[j].first < a[min].first) min = j;
            }
            std::swap(a[i], a[min]);
        }
    
    
}

@ -34,7 +45,7 @@ int main() {
    cout << endl;

    // Sort by the second element of the pairs
    selectionSort(arr);
    stableSelectionSort(arr);

    // Print sorted array
    cout << "Sorted array by the first element:" << endl;

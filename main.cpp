#include<iostream>

using namespace std;

void insertion_sort()
{
    int i, j, n=10;
    string temp;
    string a[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    cout << "\nNama sebelum diurutkan: " << endl;
    for(i=0; i<n; i++)
    {
        cout << a[i] << " , ";
    }

    for(i=1; i<=n-1; i++)
    {
        temp = a[i];
        j = i-1;

        while((temp<a[j]) && (j>=0))
        {
            a[j+1] = a[j];
            j = j-1;
        }

        a[j+1] = temp;    //insert element in proper place
    }

    cout << "\n\nSetalah inserting sort:\n";
    for(i=0; i<n; i++)
    {
        cout << a[i] << " , ";
    }
}
int main()
{
    insertion_sort();
    cout << "\n\n";

    return 0;
}

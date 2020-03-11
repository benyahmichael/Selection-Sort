#include <iostream>

using namespace std;

int main()
{
	//take number of list in total
	int n,i,j;
	cout<<" Enter total elements number "<<endl;
	cin>>n;
	cout<<" number of items in list:"<<n<<endl;
	int A[n];

	//take list items
    cout << " key in list" << endl;
    for(i=0; i<n; i++)
    {
    	cin>>A[i];
    	cout<<" List item:"<<A[i]<<endl;
	}

    // Selection Sort
    for (i=0; i<n-1; i++)
      {
             int min = A[i];
             int loc=i;
        for(j = i+1; j < n; j++)

            if(min > A[j])
        {
            min = A[j];
            loc=j;

        }

        int temp = A[i];
        A[i]= A[loc];
        A[loc] = temp;
      }
    cout<<" sorted data:"<<A[i]<<endl;

    return 0;
}

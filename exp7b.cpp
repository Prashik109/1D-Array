//prashik maghade
//prn 22070123109
Experiment-no: 7(b)*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t";
    }
return 0;
}
/*OUTPUT
Enter the elements of the array: 1
Enter the elements of the array: 3
Enter the elements of the array: 6
Enter the elements of the array: 3
Enter the elements of the array: 4
1	3   6    3     4
*/

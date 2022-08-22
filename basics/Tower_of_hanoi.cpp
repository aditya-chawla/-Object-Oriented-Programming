#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char A,char C, char B)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " <<A<<" to rod " <<C<<endl;
        return;
    }
    towerOfHanoi(n - 1,A,B,C);
    cout << "Move disk " << n << " from rod " <<A<<" to rod " <<C<< endl;
    towerOfHanoi(n - 1,B,C,A);
}

int main()
{
	int n;
	cout<<"Enter the number of disks: "; 
	cin>>n;
	
	if(n<1)
	cout<<"There are no disks to shift";
	else
	cout<<"There are "<<n<<" disks in tower 1\n";
	
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}

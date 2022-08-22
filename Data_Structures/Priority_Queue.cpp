
#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

void heapify(vector<int> &hT, int i) {
  int size = hT.size();

  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  if (l < size && hT[l] > hT[largest])
    largest = l;
  if (r < size && hT[r] > hT[largest])
    largest = r;

  if (largest != i) {
    swap(&hT[i], &hT[largest]);
    heapify(hT, largest);
  }
}

void insert(vector<int> &hT, int newNum) {
  int size = hT.size();
  if (size == 0) {
    hT.push_back(newNum);
  } else {
    hT.push_back(newNum);
    for (int i = size / 2 - 1; i >= 0; i--) {
      heapify(hT, i);
    }
  }
}

void deleteNode(vector<int> &hT, int num) {
  int size = hT.size();
  int i;
  for (i = 0; i < size; i++) {
    if (num == hT[i])
      break;
  }
  swap(&hT[i], &hT[size - 1]);

  hT.pop_back();
  for (int i = size / 2 - 1; i >= 0; i--) {
    heapify(hT, i);
  }
}

// Print the tree
void printArray(vector<int> &hT) {
  for (int i = 0; i < hT.size(); ++i)
    cout << hT[i] << " ";
  cout << "\n";
}

int main() {
  vector<int> heapTree;

int x,n,y,temp;
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"Enter the elements\n";
for(int i=0;i<n;i++)
{
	cin>>x;
 insert(heapTree, x);
}
do
{
 cout<<"\nPriority Queue MENUE";

 cout<<"\n1.) print\n2.) delete\n";
  cout<<"enter your choice: ";
  cin>>temp;
  if(temp==1)
  {
  cout << "\nPriority queue: "<<endl;
  printArray(heapTree);
}

 if(temp==2)
  {  
  	cout<<"\nEnter the element to delete: ";
  	cin>>y;
  deleteNode(heapTree, y);
   cout<<"\nElements in a priority queue after deleting the element are : "<<endl;
  printArray(heapTree);
}
}
while(temp!=-1);
return 0;
}

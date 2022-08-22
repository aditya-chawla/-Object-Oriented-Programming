#include<bits/stdc++.h>
using namespace std;

template<typename K, typename V>

class HashNode
{
	public:
	V value;
	K key;

	HashNode(K key, V value)
	{
		this->value = value;
		this->key = key;
	}
};

template<typename K, typename V>

class HashMap
{
	HashNode<K,V> **arr;
	int capacity;
	int size;
	HashNode<K,V> *dummy;

	public:
	HashMap()
	{
		capacity = 20;
		size=0;
		arr = new HashNode<K,V>*[capacity];
		for(int i=0 ; i < capacity ; i++)
			arr[i] = NULL;
		dummy = new HashNode<K,V>(-1, -1);
	}
	int hashCode(K key)
	{
		return key % capacity;
	}

	void insertNode(K key, V value)
	{
		HashNode<K,V> *temp = new HashNode<K,V>(key, value);
		int hashIndex = hashCode(key);

		while(arr[hashIndex] != NULL && arr[hashIndex]->key != key
			&& arr[hashIndex]->key != -1)
		{
			hashIndex++;
			hashIndex %= capacity;
		}
		if(arr[hashIndex] == NULL || arr[hashIndex]->key == -1)
			size++;
		arr[hashIndex] = temp;
	}

	V deleteNode(int key)
	{
		int hashIndex = hashCode(key);

		while(arr[hashIndex] != NULL)
		{
			if(arr[hashIndex]->key == key)
			{
				HashNode<K,V> *temp = arr[hashIndex];

				arr[hashIndex] = dummy;

				size--;
				return temp->value;
			}
			hashIndex++;
			hashIndex %= capacity;
		}

		return NULL;
	}


	int sizeofMap()
	{
		return size;
	}

	bool isEmpty()
	{
		return size == 0;
	}

	void display()
	{
		cout << "key "<<"value"<<endl;
		for(int i=0 ; i<capacity ; i++)
		{
			if(arr[i] != NULL && arr[i]->key != -1)
				cout <<arr[i]->key<<" --> "<< arr[i]->value<<endl;
		}
	}
};

int main()
{
	HashMap<int, int> *h = new HashMap<int, int>;
	int dl;
    h->insertNode(1,1);
    h->insertNode(2,2);
    h->insertNode(3,3);
    h->insertNode(4,4);
    h->insertNode(5,5);
	h->display();
	cout<<"\nSize of map : " << h->sizeofMap() <<endl;
	cout<<"Enter the key to delete: ";
	cin>>dl;
	cout << h->deleteNode(dl)<<endl;
	h->display();


	return 0;
}


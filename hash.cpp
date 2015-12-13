#include<iostream>
#include<cstdlib>
using namespace std;
class hash
{
    private:
        int hash_table;
        int array[100];
    public:
        hash();
        int insert(int);
        int Hash(int );
        int reHash(int );
};

hash::hash()
{
    for(int i = 0; i < 100; i++){
        array[i] = '*';
    }
}
int hash::insert(int n)
	{
    int data;
    int count = 0;
    
    cout<<"Input Data : ";
    for (int i = 1;i <= n; i++)
    {
		cin >> data;
    	hash_table = Hash(data);
    	if(hash_table >= 100)
		{
        	hash_table = 0;
    	}
    	
    	if(array[hash_table] == '*')
		{
        	array[hash_table] = data;
    	}
    	cout<< hash_table << " : " << data << endl;
	}
}
int hash::Hash(int key)
{
    return key%100;
}
int hash::reHash(int key)
{
    return key%100;
}

int main()
	{    
	
	hash h;
	int n;
	
	cout << "Number of Insert to Hashing : ";
	cin >> n;
	
	h.insert(n);
            
    return 0;
}

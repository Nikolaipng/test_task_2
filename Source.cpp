#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int i, j, size=0;
	string mas1[9],buff;
	bool mas3[9];
	cout << "Enter mas2 size" << endl;
	cin >> size;
	vector<string> mas2;
	for (i = 0; i < 9; i++)
	{
		cout << "Enter " << i << " elem of mas1" << endl;
		cin >> mas1[i];
	}
	for (i = 0; i < size; i++)
	{
		cout << "Enter " << i << " elem of mas2" << endl;
		cin >> buff;
		mas2.push_back(buff);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (mas1[i] == mas2[j])
			{
				mas3[i] = 1;
				break;
			}
			else
				mas3[i] = 0;
		}
	}
	for (i = 0; i < 9; i++)
	{
		cout << mas3[i];
	}
	return 0;
}
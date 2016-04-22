#include"Vector.h"
#include"DoubleCapacity.h"

int main()
{
	vector<int> defaultVector; //create default test vector

	for (int n = 0; n < defaultVector.size(); n++)
	{
		defaultVector.push_back(n); //populate default vector
	}

	cout << "Default Vector data: ";

	for (int n = 0; n < defaultVector.size(); n++)
	{
		cout << defaultVector.at(n) << " ";
	}

	return 0;
}
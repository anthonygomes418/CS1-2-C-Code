#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (void) {
	string search;
	int offset, count;
	string line;


	ifstream MyFile;
	MyFile.open ("text.txt");
	cout << "The file has been opened" << endl;
	cout << "Enter the GPA that you want to enquire about"<< endl;
	cin >> search;

	if (MyFile.is_open())
	{
		while (!MyFile.eof())
		{
			getline(MyFile, line);
			if ((offset = line.find(search, 0))) 
			{
				count = count ++;
			}
		cout << count;
		}
		MyFile.close();
	}
	else {
		cout << "There was an error"<< endl;
		system("PAUSE");
	}

		return 0;
	}


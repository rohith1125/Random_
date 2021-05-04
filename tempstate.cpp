#include <iostream>
#include <fstream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	/* Using Files */
	//open file and write to file
	string filename = "c:\\temp\\test.txt";
	ofstream writer;

	writer << "Hello!" << endl;
	writer << 9 << endl;
	writer << 4.14 << endl;
	writer.close();

	//read from file
	ifstream reader;
	reader.open(filename);

	if(!reader)
	{
		cout << "Could not open file" << endl;
	}
	else
	{
		string line1;
		reader >> line1;

		int line2;
		reader >> line2;

		double line3;
		reader >> line3;

		reader.close();
	}

	/* Using Loops */
	//show menu
	cout << "Please select from the following options" << endl;
	cout << "1 - Display Greeting Message" << endl;
	cout << "2 - Display Exit Message" << endl;
	cout << "3 - Quit" << endl;

	int selection;
	cin >> selection;

	bool done = false;

	while(!done)
	{
		//process selection
		switch(selection)
		{
		case 1:
			cout << "Hello World" << endl;
			break;
		case 2:
			cout << "Goodbye!" << endl;
			break;
		case 3:
			break;
		default:
			cout << "You made an invalid selection.  Try again" << endl;
			cin.clear();
			cin.ignore();
			cin >> selection;
			done = false;
		}
	}

	system("pause");
	return 0;
}


#include "HeadList.h"


int main()
{
	HeadLST TheOne;

	TheOne.insert(111, 1);
	TheOne.DisplayAll();
	cout << endl;
	TheOne.insert(5, -10);
	TheOne.DisplayAll();
	cout << endl;
	TheOne.push_back(10);
	TheOne.DisplayAll();
	cout << endl;
	TheOne.push_back(100);
	TheOne.DisplayAll();
	cout << endl;
	TheOne.push_back(1000);
	TheOne.DisplayAll();
	cout << endl;
	TheOne.push_front(1);
	TheOne.DisplayAll();
	cout << endl;
	TheOne.insert(5, 8);
		
	TheOne.DisplayAll();
	cout << endl;
	cout << " The size of TheOne >>> " << TheOne.getSize() << endl;


	
	cout << endl;
	TheOne.pop_front();
	
	TheOne.DisplayAll();
	cout << endl;
	cout << " The size of TheOne >>> " << TheOne.getSize() << endl;
	TheOne.insert(111, 1);
	
	cout << endl;
	TheOne.pop_back();
	TheOne.DisplayAll();
	cout << endl;
	cout << " The size of TheOne >>> " << TheOne.getSize() << endl;

	

	cout << endl;
	TheOne.removeAt(3);
	TheOne.DisplayAll();
	cout << endl;
	cout << " The size of TheOne >>> " << TheOne.getSize() << endl;
	cout << endl;
   

	TheOne.push_back(111);
	TheOne.DisplayAll();
	cout << endl;
	cout << " The size of TheOne >>> " << TheOne.getSize() << endl;
	cout << "\n";
}


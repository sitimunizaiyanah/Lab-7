#include <iostream>
#include <cstdlib>

using namespace std;

void capit(char *, char *);

int main()
{
	char char1,char2;
	cout << "Enter a character: ";
	cin >> char1;
	cout << "Enter a character: ";
	cin >> char2;
	
	capit(&char1, &char2);
	
	system ("pause");
	return 0;
	
}
void capit(char *c1, char *c2)
{
	char ori1, ori2;
	
	ori1 = *c1;
	ori2 = *c2;
	
	if((*c1 >= 'a') && (*c1 <= 'z'))
	    *c1 = (*c1 - 'a' + 'A');
	    
	if((*c2 >= 'a') && (*c2 <= 'z'))
	    *c2 = (*c2 - 'a' + 'A');
		
		cout << "The four letters are: ";
		cout << ori1 << " " << ori2 << " " << *c1 << " " << *c2 <<endl;    
	
}

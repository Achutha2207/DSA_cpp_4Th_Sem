#include <string>
#include <iostream>

using namespace std;

int main()
{
	int a = 34;
	cout << a << endl;
	cout << "Redemption\n";

	// Usage of const

	cout << "Im Using const keyword and checking the mutability\n";
	const float b = 32.12;
	cout << b << endl;
	// b=23.12;
	cout << " I have set b=23.12 to check if this value changes now \n";
	cout << " As I can see here I cannot assign a new value to a const specified value b\n";
	// cout <<b <<endl;

	cout << "I have to take the inputs from the users ";
	int c;
	cin >> c;
	cout << "The Value Of C Is \n"
		 << c << endl;

	cout << "Usage Of e in expressions\n";
	cout << "e = 10 ^ something eg-> 34e3 ->> 34*10^3 \n";
	double x = 34e3;

	cout << x << endl;

	bool tr = true;
	bool fl = false;

	cout << tr << endl;
	cout << fl << endl;

	cout << " To use the STRING class I need to include the library #include<string> in the header schema of my cpp file\n";

	cout << "String is a CLASS and if we assign a string value to any variable we are creating instances for string class { Refering to the string class } so \n It is basically as pointing a variable {String } to the STRING class where we can utilize all of its methods\n";

	string f_n = "Berserk";
	string l_n = "Guts";
	string full_name = f_n.append(l_n);

	cout << full_name << " string1.append(string2)" << endl;
	cout << full_name.length() << " string.length()" << endl;

	cout << "String Is An Arry Of Characters So We Can Access Any String By Just Using string_name[index]\n";

	cout << "\n";
	cout << "\n";

	cout << "ARRAYS\n";

	int ar[6] = {5, 4, 3, 2, 1, 0};
	for (int i = 0; i < 6; i++)
	{
		cout << ar[i] << "\t" << endl;
	}
	cout << "\n";

	cout << "BUBBLE SORT\n";

	for (int i = 0; i < 6 - 1; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (ar[i] > ar[j])#include <string>
#include <iostream>

using namespace std;

int main()
{
	int a = 34;
	cout << a << endl;
	cout << "Redemption\n";

	// Usage of const

	cout << "Im Using const keyword and checking the mutability\n";
	const float b = 32.12;
	cout << b << endl;
	// b=23.12;
	cout << " I have set b=23.12 to check if this value changes now \n";
	cout << " As I can see here I cannot assign a new value to a const specified value b\n";
	// cout <<b <<endl;

	cout << "I have to take the inputs from the users ";
	int c;
	cin >> c;
	cout << "The Value Of C Is \n"
		 << c << endl;

	cout << "Usage Of e in expressions\n";
	cout << "e = 10 ^ something eg-> 34e3 ->> 34*10^3 \n";
	double x = 34e3;

	cout << x << endl;

	bool tr = true;
	bool fl = false;

	cout << tr << endl;
	cout << fl << endl;

	cout << " To use the STRING class I need to include the library #include<string> in the header schema of my cpp file\n";

	cout << "String is a CLASS and if we assign a string value to any variable we are creating instances for string class { Refering to the string class } so \n It is basically as pointing a variable {String } to the STRING class where we can utilize all of its methods\n";

	string f_n = "Berserk";
	string l_n = "Guts";
	string full_name = f_n.append(l_n);

	cout << full_name << " string1.append(string2)" << endl;
	cout << full_name.length() << " string.length()" << endl;

	cout << "String Is An Arry Of Characters So We Can Access Any String By Just Using string_name[index]\n";

	cout << "\n";
	cout << "\n";

	cout << "ARRAYS\n";

	int ar[6] = {5, 4, 3, 2, 1, 0};
	for (int i = 0; i < 6; i++)
	{
		cout << ar[i] << "\t" << endl;
	}
	cout << "\n";

	cout << "BUBBLE SORT\n";

	for (int i = 0; i < 6 - 1; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (ar[i] > ar[j])
			{
				int temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << ar[i] << "\t" << endl;
	}
	cout << "\n";

	cout << "STACK IMPLEMENTATINO USING ARRAYS\n";

	// CLASS STACK

	class stack
	{

	private:
		int top;
		int array[10];

	public:
		stack()
		{

			top = -1;

			for (int i = 0; i < 5; i++)
			{
				array[i] = 0;
			}
		}

		bool isempty()
		{
			if (top == -1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

	bool isfull()
	{
		if (top > 10)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	void push(int val)
	{

	
		if(isfull()){
			return true;
		}
		else
		{
			return false;
		}
	};

	void push(int val)
	{
		if(isfull()){
			
		cout<<"Stack Overflow\n"<<endl;	
			exit(1);}
		else{
			array[++top]=val;}};

int pop(){

	if(is_empty()){
		cout<<"Stack Underflow\n"<<endl;}

		else{
			return array[--top];}};

}


// time: 4 hour 47 min covered......



//bollean Values
// can be true and false
//took 8 bit in memory


#include <iostream>
using namespace std;

int main()
{

	bool red_light{ true };
	bool green_light{ false };

	if (red_light == true) {
		cout << "stop!" << endl;

	}
	else {
		cout << "go throught!" << endl;

	}
	//boolalpha is used to represent values As true and false.
	cout << "size of bool is : " << sizeof(bool) << endl;
}
///char data type<
//we use this data type to represent characters
//1 byte in memory

int char_data() {
	char a=65;  // a value is a ASSci   value
	cout << "value : " << a << endl;
	cout << "value int : " << static_cast<int>(a);
}

// the use of auto 
int auto_key(){


        auto var1 { 2 };
		cout << "size of var1" << sizeof(var1) << " bytes";



}
// if a variable is declear then we can again initilize it again
int value() {

	int value{ 20 };  //declare and initilize
	cout << value << endl;

	int value = 50; //Assign
	cout << value;

}



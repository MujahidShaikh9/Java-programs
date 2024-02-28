#include<iostream>
using namespace std;

class Train {

	public :
		int Train_Number;
		string Train_Name;
		string Source;
		string Destination;
		int Journey_Date;
		int Capacity;

		void initData() {
			Train_Number=0;
			Train_Name="";
			Source="";
			Destination = "";
			Journey_Date = 0;
			Capacity = 0;
		}

		void  inputTrainData() {
			cout<<"Enter Train number"<<endl;
			cin>>Train_Number;
			cout<<"Enter Train name"<<endl;
			cin>>Train_Name;
			cout<<"Enter Source"<<endl;
			cin>>Source;
			cout<<"Enter Destination"<<endl;
			cin>>Destination;
			cout<<"Enter Journey Date"<<endl;
			cin>>Journey_Date;
			cout<<"Enter Capacity"<<endl;
			cin>>Capacity;
		}

		void displayTrainDetails() {
			cout<<"Train Number = "<<Train_Number<<endl;
			cout<<"Train Name = "<<Train_Name<<endl;
			cout<<"Source = "<<Source<<endl;
			cout<<"Destination ="<<Destination<<endl;
			cout<<"Journey_Date = "<<Journey_Date<<endl;
			cout<<"Capacity = "<<Capacity<<endl;
		}

};

int main() {

	Train t;
	t.initData();
	t.inputTrainData();
	t.displayTrainDetails();

	return 0;
}
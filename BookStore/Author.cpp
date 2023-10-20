#include "Author.h"

class Book{

public : Book(){
	Author_id=100;
	Aut_name="xyz"
	string Bname="abc";
	Num_Book_pub=10;
	Total_sold=8;
}

public : Book(int Author_id, string Aut_name, string Bname, int Num_Book_pub, int Total_sold){
	this->Author_id=Author_id;
	this->Aut_name=Aut_name;
	this->Bname=Bname;
	this->Num_Book_pub=Num_Book_pub;
	this->Total_sold=Total_sold;
}

void Available_copies(int n, int cp){
	cout<<"Available Copies : "<<(Num_Book_pub-Total_sold);
}
};


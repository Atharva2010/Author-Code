#include<iostream>
#include<String>
using namespace std;

class Book{

private : int Author_id;
private : string Aut_name;
private : string Bname;
private : int Num_Book_pub;
private : int Total_sold;

public : Book();
public : Book(int Author_id, string Aut_name, string Bname, int Num_Book_pub, int Total_sold);


void Available_copies(int no, int cp);

};


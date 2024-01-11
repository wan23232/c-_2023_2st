#include <iostream>
#include <string>
using namespace std;
class Book{
	private:
		string mTitle;
		string mAuthor;
		int mPrice;
	public:
		Book(string title, string author){
			mTitle = title;
			mAuthor = author;
		}
		void print();
		void setPrice(int);
};

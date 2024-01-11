#include "person.h"

class Book{
	private:
		string mTitle;
		Person *mAuthor;
		int mPrice;
	public:
		Book(string title, Person * author);
		void print();
		void setPrice(int p);
};



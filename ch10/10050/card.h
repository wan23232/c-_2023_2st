#include <iostream>
using namespace std;
class CCard{
	private:
		short suit_, rank_;
	public:
		static const char * suitname[4] ;
		static const char * rankname[13] ;
		void SetSuitRank(short , short);
		void Show();
};


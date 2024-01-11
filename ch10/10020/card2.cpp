#include <iostream>
#include <string>
using namespace std;
//enum suit { spade, heart, diamond, club };

class Card{
private:
	const string suitname[4] = {"♠","♡","◇","♣"};
	const string rankname[13]={"A","2","3","4", "5","6","7","8","9","10", "J","Q","K"};
	short suit_, rank_;
public:
	void show(){
		cout << suitname[suit_]  << rankname[rank_] << endl;
	}
	// setSuitRank함수를 여기에...
	void setSuitRank(int a, int b){
		string s="Error";
		suit_=a;
		rank_=b;
		if(a>3 || b>12) throw s;
	}
	// 만일 suit나 rank 가 범위를 벗어나면 throw
};


int main(){
	Card myCard;
	short suit, rank;
	 
	while ( cin >> suit >> rank ){
		try{
		myCard.setSuitRank(suit, rank);  // try-catch로 둘러싼다.
		myCard.show();
		}catch(string a){
			cout << a << endl;
		}
	}
}

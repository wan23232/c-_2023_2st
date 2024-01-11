#include <iostream>
#include "card.h"
using namespace std;
enum suit { spade, heart, diamond, club };

// 클래스 상수의 초기화
const char * CCard::suitname[4] = { "♠","♡","◇","♣"};
const char * CCard::rankname[13]={ "A","2","3","4","5", "6","7","8","9","10", "J","Q","K"};

int main(){
	CCard myCard;
	myCard.SetSuitRank(club, 11);
	myCard.Show();
	myCard.SetSuitRank(heart, 2);
	myCard.Show();
	myCard.SetSuitRank(club, 0);
	myCard.Show();
}

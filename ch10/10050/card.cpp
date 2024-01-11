#include "card.h"

enum suit { spade, heart, diamond, club };
void CCard::SetSuitRank(short suit, short rank){
	if (suit < spade || suit > club || rank < 0 || rank > 12) return;
	suit_ = suit; 
	rank_ = rank;
}
void CCard::Show(){
	cout << suitname[suit_]  << rankname[rank_] << endl;
}

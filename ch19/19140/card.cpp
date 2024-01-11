#include <iostream>
class Card{
	public:
		Card(int r, int s):rank(r), suit(s){
			// Empty
		}
		void print() const{
			std::cout << "Rank: " << rank << " Suit: "<< suit ;
		}
	private:
		int rank;
		int suit;
};
void myprint(std::ostream &cout,Card c){		//1단계
	c.print();
	std::cout<<std::endl;
}
//void operator <<(std::ostream &cout,Card c){	2단계
//	c.print();
//}
std::ostream & operator <<(std::ostream &cout,Card c){
	c.print();
	return cout;
}
int main(){
	Card c(2,3);
	// 1단계:  아래와 같으 호출하면 카드를 출력해주는 전역 함수 myprint 를 작성하라. Hint2 참조.
	myprint( std::cout, c );
	// 2단계: 1 단계의 myprint 함수를 연산자 << 로 바꾸어 아래와 같이 호출할 수 있도록 정의하라.
	std::cout << c;
	// 3단계: 2단계를 확장하여 연속으로 출력될 수 있도록 수정하라.
	std::cout <<"카드는 " << c << "입니다." << std::endl;
	return 0;
}


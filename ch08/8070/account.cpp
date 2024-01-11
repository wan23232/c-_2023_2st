#include <iostream>
#include <string>
using namespace std;
class Account{
	private:
		string AccountNumber;
		string OwnerName;
		int Balance;
	public:
		void setAccountNumber(string a){
			AccountNumber=a;
		}
		void setOwnerName(string a){
			OwnerName=a;
		}
		void setBalance(int a){
			Balance=a;
		}
		void deposit(int a){
			Balance+=a;
		}
		void withdraw(int a){
			if(Balance>=a){
				Balance-=a;
			}
		}
		void transferTo(Account *a,int b){
			if(Balance>=b){
				Balance-=b;
				a->Balance+=b;
			}
		}
		void showStatus(){
			cout<<AccountNumber<<endl<<OwnerName<<endl<<Balance<<endl;
		}
};

int main(){
	Account *a, *b;
	a = new Account();
	b = new Account();
	a->setAccountNumber("212-30-222333");
	b->setAccountNumber("212-30-222444");
	a->setOwnerName("김길동");
	b->setOwnerName("홍길동");
	a->setBalance(0);    // 잔고를 0으로 설정
	b->setBalance(0);
	a->deposit(10000);   // 입금
	a->transferTo(b, 5000);   // b로 5000원 이체
	a->withdraw(1000);   // 인출
	a->showStatus();   // 계좌 정보를 전부 출력 - 계좌 번호  이름  잔고
	b->withdraw(6000);    // 잔고가 충분치 않으면 부분 출금하지 말고 반환
	b->showStatus();   // 계좌 정보를 전부 출력
	return 0;
}

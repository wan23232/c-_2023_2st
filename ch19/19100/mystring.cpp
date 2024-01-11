#include <cstring>
#include <iostream>
// 소멸자를 다래와 같이 작성할 것.
// 동일한 주소가 free되지 않는지 확인할 수 있다.

class MyString{
	public:
		MyString(){
			str=strdup("");
		}
		MyString(const char *a){
			str=(char *)malloc(strlen(a)+1);
			strcpy(str,a);
		}
		MyString(const MyString &other){
			this->str=strdup(other.str);
		}
		~MyString(){
			printf("free %p \n", str);  // 주소 값을 출력
			free(str);
		}
		void operator =(MyString b){
			free(this->str);
			this->str=strdup(b.str);
		
		}

		void operator +=(MyString b){
			char * temp;
			temp=strdup(this->str);
			free(this->str);
			str=(char *)malloc(strlen(temp)+strlen(b.str)+1);
			strcpy(str,temp);
			strcat(str,b.str);
						
		}
		char * GetStr(){
			return this->str;
		}
	private:
		char * str;
};
std::ostream & operator <<(std::ostream &a,MyString b){
	printf("%s",b.GetStr());
	return a;
}
int main(){
	MyString s1, s2("world");
	MyString s3;

	s1 = "Hello ";
	s3 = s1;
	s3 += s2;
	std::cout << s1 << " " << s2 << " " << s3 ;

}

#include "song.h"
#include <iostream>
Song::Song(std::string a,std::string b){
	singer_=a;
	title_=b;
}
void Song::show(){
	std::cout<<"가수는: "<<singer_<<" 곡명은 : "<<title_<<std::endl;
}
std::string Song::getSinger(){
	return singer_;
}
std::string Song::getTitle(){
	return title_;
}

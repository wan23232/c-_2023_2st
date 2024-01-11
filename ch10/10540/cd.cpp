#include "cd.h"

CD::CD(std::string title){
	title_=title;
}
void CD::addSong(Song *s){
	sptr_[numSong]=s;
	numSong++;

}
Song * CD::getSong(int index){
	return sptr_[index];

}
int CD::getNumSong(){
	return numSong;
}
std::string CD::getCDtitle(){
	return title_;
}

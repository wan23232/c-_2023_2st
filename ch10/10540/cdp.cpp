#include "cdp.h"
#include <iostream>

CDPlayer::CDPlayer(){
	cd_=nullptr;
}
void CDPlayer::insertCD(CD *c){
	if( cd_== nullptr){
		cd_=c;
	}else{
		return;
	}

}
void CDPlayer::play(){
	if( cd_==nullptr){
		std::cout << "CD가 없습니다." << std::endl;
	}else{
		std::cout<<"곡 "<<num_+1<<"."<<cd_->getSong(num_)->getSinger()<<"의 "<<cd_->getSong(num_)->getTitle()<<"가 play됩니다."<<std::endl;	
		
	}
}
void CDPlayer::showStatus(){
	std::cout<<cd_->getCDtitle()<<" 총 "<<cd_->getNumSong()<<" 곡이 들어있습니다."<<std::endl;
}
void CDPlayer::nextTrack(){
	num_++;
	if(cd_->getSong(num_)==nullptr){
		std::cout<<"다음 트랙이 없습니다."<<std::endl;
		num_--;
	}else{
		std::cout<<"곡 "<<num_+1<<"."<<cd_->getSong(num_)->getSinger()<<"의 "<<cd_->getSong(num_)->getTitle()<<"가 play됩니다."<<std::endl;			
	}
}

void CDPlayer::prevTrack(){	
	num_--;
	if(num_<0){
		std::cout<<"이전 트랙이 없습니다."<<std::endl;
		num_++;
	}else{
	std::cout<<"곡 "<<num_+1<<"."<<cd_->getSong(num_)->getSinger()<<"의 "<<cd_->getSong(num_)->getTitle()<<"가 play됩니다."<<std::endl;
	}

}
void CDPlayer::ejectCD(){
	cd_=nullptr;
}



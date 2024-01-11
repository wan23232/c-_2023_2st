#include "lens.h"
#include "camera.h"
#include <iostream>
Lens::Lens(){
	// Default 생성자
}
Lens::Lens(std::string a){
	modelName_=a;
	camera_=nullptr;
}
void Lens::tellSpec(){
	std::cout<<"렌즈: "<<modelName_<<" ,카메라: ";
	if(camera_==nullptr){
		std::cout<<"없음"<<std::endl;
	}else{
		std::cout<<camera_->getModelName()<<std::endl;
	}

}
void Lens::attachCamera(Camera *a){
	camera_=a;

}
std::string Lens::getModelName(){
	return modelName_;
}

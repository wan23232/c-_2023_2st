#include "camera.h"
#include "lens.h"
#include <iostream>
Camera::Camera(){
	// Default 생성자
}

Camera::Camera(std::string a){
	modelName_=a;
	lens_=nullptr;
}
void Camera::tellSpec(){
	std::cout<<"카메라: "<<modelName_<<" ,렌즈: ";
	if(lens_==nullptr){
		std::cout<<"없음"<<std::endl;
	}else{
		std::cout<<lens_->getModelName()<<std::endl;
	}

}
void Camera::attachLens(Lens *a){
	lens_=a;

}
std::string Camera::getModelName(){
	return modelName_;
}

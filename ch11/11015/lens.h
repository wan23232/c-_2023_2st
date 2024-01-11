#ifndef _LENS_H_
#define _LENS_H_
#include <string>
class Camera;
class Lens {
	// 공개 메소드
	public:	
		Lens();  // 기본 생성자.
		Lens(std::string);
		void tellSpec();
		void attachCamera(Camera *);
		std::string getModelName();
	// 멤버 변수 및 비공개 함수
	private:
		Camera * camera_;
		std::string modelName_;

};
#endif

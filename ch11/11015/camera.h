#ifndef _CAMERA_H_
#define _CAMERA_H_
#include <string>
class Lens;
class Camera {
	// 공개 메소드
	public:	
		Camera();  // 기본 생성자.
		Camera(std::string);
		void tellSpec();
		void attachLens(Lens *);
		std::string getModelName();

	// 멤버 변수 및 비공개 함수
	private:
		Lens *lens_;
		std::string modelName_;

};
#endif

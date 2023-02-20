#include <stdio.h>


namespace Audio
{
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

int main()
{
	// namespace 의 요소에 접근하는 3가지 방법 - 8page

	// 1. 완전한 이름( Qualified name )
	Audio::init();
	Video::init();

	// 2. using 선언(declaration)
	using Audio::init;
	init();  // Audio 이름 없이 사용가능.

	// 3. using 지시어(directive)
	using namespace Audio; 
	init(); // Audio 안의 모든 요소를 Audio 없이 사용가능
}

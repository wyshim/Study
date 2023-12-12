#include <iostream>

int main()
{
	std::cout << "git에 올리는 방법 : " << std::endl;
	std::cout << "1. Do Something..." << std::endl;
	std::cout << "2. <Git 변경 내용> 창 켜기" << std::endl;
	std::cout << "3. 커밋 메시지 작성" << std::endl;
	std::cout << "4. <모두 커밋> 버튼 누르기 - 커밋 성공인지 확인" << std::endl;
	std::cout << "5. <푸쉬>까지 해야 실제 원격 git에 업로드 된 것" << std::endl;

	std::cout << "예외 : 다른 곳에서도 수정이 될 수 있기 때문에" << std::endl;
	std::cout << "항상 같은 최신 파일인지를 확인해야 함 -> 페치(petch) -> 풀(pull)" << std::endl;
	
	return 0;
}

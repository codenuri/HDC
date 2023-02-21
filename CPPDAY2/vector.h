#pragma once

class vector
{
private:
	int* ptr;
	int  sz;

public:
	vector(int size)
	{
		sz = size;
		ptr = new int[size];
	}
	~vector()
	{
		delete[] ptr;
	}

	void set_at(int idx, int value)
	{
		// 0 <= idx < sz 를 확인하는 것이 좋습니다.
		ptr[idx] = value;
	}

	int get_at(int idx)
	{
		return ptr[idx];
	}

	void resize(int newsize)
	{
		if (newsize > sz) // 커지는 경우
		{
			// 1. 새로운 메모리 할당
			int* tmp = new int[newsize];

			// 2. 기존 버퍼의 데이타 복사
			for (int i = 0; i < sz; i++)
			{
				tmp[i] = ptr[i];
			}

			// 3. 기존 버퍼 제거
			delete[] ptr;

			// 4. 멤버 데이타 ptr이 새로운 버퍼 사용
			ptr = tmp;

			// 5. 크기 변수 변경
			sz = newsize;
		}
	}
	int size() { return sz; }
};


// 인접 행렬 n * n  에서 최단 경로 구하기
// 우선 길이가 N으로 주어지면, 
// 크기가 N*N인 2차원 배열
// 재귀 호출로 구현

#include <stdio.h>
#include <string.h>

int n, min;         // 맵의 크기와 최소값을 나타내는 변수
int map[100][100];  // 도시 수를 나타내는 n 으로 1 <= n <= 100

// input: 좌표를 나타내는 x, y와 길이를 나타내는 length
void Depth_First_Search(int x, int y, int length)
{
	// 도착 지점에 도착했을 경우
	if (x == n - 1 && y == n - 1)
	{
		// 현재 최소값이 length보다 크면, 
		// length이 작은 것이므로 length를 최소값으로 지정
		if (min > length) min = length;
		return;
	}
    
    // 방문했음을 0으로 표시
	map[y][x] = 0; 

	// 위로 이동할 수 있다면 이동!
	if (y > 0 && map[y - 1][x] != 0) 
		Depth_First_Search(x, y - 1, length + 1);
	
	// 아래로 이동할 수 있다면 이동!
	if (y < n - 1 && map[y + 1][x] != 0) 
		Depth_First_Search(x, y + 1, length + 1);
	
	// 왼쪽으로 이동할 수 있다면 이동!
	if (x
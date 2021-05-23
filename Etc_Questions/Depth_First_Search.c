
// 인접 행렬 n * n  에서 최단 경로 구하기
// 우선 길이가 N으로 주어지면, 
// 크기가 N*N인 2차원 배열
// 재귀 호출로 구현

#include <stdio.h>
#include <string.h>

int n, min;         // 맵의 크기와 최소값을 나타내는 변수
int map[100][100];  // 도시
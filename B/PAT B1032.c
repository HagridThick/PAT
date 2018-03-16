#include <stdio.h>

const int max_number = 100010;
int school[max_number] = {0};

int main() {
	int contestants, schoolID, score;
	scanf("%d", &contestants);
	for(int i=0; i<contestants; i++){
		scanf("%d%d",&schoolID,&score);
		school[schoolID] = score;
	}
	int highest = 1, MAX = -1;
	for(int j=0; j<contestants; j++){
		if(school[j] > MAX ){
			MAX = school[j];
			highest = j;
		}
	}
	printf("%d %d",highest,MAX);
}
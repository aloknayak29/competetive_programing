#include<stdio.h>
 
int main() {
	int size, i, inp, count = 0, max_count = 0;
	scanf("%d", &size);
	for(i = 0; i < size; i++) {
		scanf("%d", &inp);
		if(inp == 0) {
			if(max_count < count)
				max_count = count;
			count = 0;
		}
		else
			count++;
	}
	if(max_count < count)
		max_count = count;
	printf("%d", max_count);
	return 0;
}

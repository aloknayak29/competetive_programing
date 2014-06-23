#include <stdio.h>

int main()
{
	int i,testcases,n,j,sil_old;
	int sil =0,snil =0,np;
	scanf("%d", &testcases);
	j = 1;
	while(testcases--){
		scanf("%d", &n);
		for(i = 0; i < n; i++) {
			scanf("%d", &np);
			sil_old = sil;
			if(snil + np > sil_old) sil = snil + np;
			if(sil_old > snil) snil = sil_old;
			//printf("Case %d %d", snil,sil);
		}
		if(sil > snil) snil = sil;
		printf("Case %d: %d\n", j, snil);
		//printf("Case %d", j);
		snil = 0;
		sil = 0;
		j++;
	}
    
    return 0;
}

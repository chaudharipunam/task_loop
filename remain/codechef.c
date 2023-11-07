/*//factorial.....	
#include<stdio.h>
int main(){
    int t,n,a[90],i,j,k,l,m;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
        m=1;
        a[0]=1;
        for(j=2;j<=n;j++){
            l=0;
            for(k=0;k<m;k++){
                a[k]=a[k]*j+l;
                l=a[k]/10;
                a[k]=a[k]%10;}
            while(l){
	        a[k]=l%10;
                k++; m++;
                l=l/10;}}
        for(i=m-1;i>=0;i--)
            printf("%d",a[i]);
       printf("\n");}
    return 0;
}

*/

#include <stdio.h>

int main(void) {
	int n,k;
	scanf("%d%d",&n,&k);
	int arr[n],p;
	for(int i=0; i<n; i++){
	    scanf("%d",&arr[i]);
	}
	int c=0;
	for(int j=0; j<n; j++){
	    p=arr[j]==k;
	    c++;
	}
	if(c==1){
	    printf("1");
	}        
	else{
	    printf("-1");
	}
	return 0;
}



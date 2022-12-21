#include <stdio.h>
int main()
{
	int i,t = 0,j,z,u,r,f;
	int s[2];
	char a[2][36],o,p;
	for (i = 0; i < 2; i++){
	
	printf("%d . kelimeyi girin : ", i + 1);
	scanf("%s" ,a[i]);
    }
    // ismin ve soyismin harf sayılari bir arraye atanır
    for (i = 0; i < 2; i++){
    	t = 0;
    	for (j = 0; a[i][j] != '\0'; j++){
    		t = t + 1;
		}
		s[i] = t;
	}
    
    
    printf("ismin uzunluğu :%d\n" ,s[0]);
    printf("soyismin uzunluğu :%d" ,s[1]);
    r = s[0];
    f = s[1];
    
    for (i = 0; i < 2; i++){
    	for (j = 0; j < s[i] / 2 + 1; j++){
    		for (z = s[i]--; z > s[i] / 2; z--){
    			o = a[i][j];
    			
    			p = a[i][s[i]];
    			a[i][j] = p;
    			a[i][s[i]] = o;
    		
		}
			}
    		
		}
	
    
    printf("\ntersten isim :%s\n" ,a[0]);
    printf("tersten soyisim :%s" ,a[1]);
   
    

	return 0;
}


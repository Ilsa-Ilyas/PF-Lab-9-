#include<stdio.h>
#include<string.h>
int main(void){
	char arr[100],arr2[100],key[50],key2[100];
	printf("Enter sentence : ");
	fgets(arr,100,stdin);
	arr[strcspn(arr,"\n")]='\0';
	printf("\n Enter key : ");
	fgets(key,50,stdin);
	key[strcspn(key,"\n")]='\0';
	int len=strlen(arr),len2=strlen(key);
	int temp[len],temp2[len],temp3[len];
	char final[len];
	for(int i=0;i<len;i++){
		if(arr[i]>='a' && arr[i]<='z'){
			arr[i]=arr[i]-32;
		}
	}
	for(int i=0;i<len2;i++){
		if(key[i]>='a' && key[i]<='z'){
			key[i]=key[i]-32;
		}
	}
	for(int i=0;i<len;i++){
		if(arr[i]==' '){
			temp[i]=20;
		}else{
		temp[i]=int(arr[i]);	
		}
	}
	int j=0;
	for(int i=0;i<len;i++){
		if(j==len2){
			j=0;
		}
		key2[i]=key[j];
		j++;
	}
	for(int i=0;i<len;i++){
		if(key2[i]==' '){
			temp2[i]=20;
		}else{
		temp2[i]=int(key2[i]);	
		}
	}
	for(int i=0;i<len;i++){
		if(temp[i]==20){
			continue;
		}else{
		temp[i]=temp[i]-64;	
		}
	}
	for(int i=0;i<len;i++){
		if(temp2[i]==20){
			continue;
		}else{
		temp2[i]=temp2[i]-64;	
		}
	}for(int i=0;i<len;i++){
		temp3[i]=temp[i]+temp2[i];	
	}
	for(int i=0;i<len;i++){
		temp3[i]=temp3[i]%26;	
	}
	for(int i=0;i<len;i++){
		temp3[i]=temp3[i]+64;	
	}
	for(int i=0;i<len;i++){
		final[i]=char(temp3[i]);	
	}
	printf("\n Finally, Our Ciphertext would be : \n");
	for(int i=0;i<len;i++){
		printf("%c",final[i]);
	}
}

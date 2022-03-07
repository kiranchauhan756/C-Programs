   #include<stdio.h>
   #include<string.h>
   void main(){
    char ch[100];
    int count=0,k=0;
    scanf("%s",ch);
    int l=strlen(ch);
    char ch1[l];
    for(int i=0;i<l;i++){
        ch1[i]=ch[i];
    }
    for(int i=0;i<l;i++){
        for(int j=1;j<l-1;j++){
            if(ch1[i]==ch[j])
        count++;
            if(count>=3){
                ch1[i]=' ';
                k++;
            }
    }
    }
         for(int i=0;i<l-k;i++)
             printf("%c",ch1[i]);
    }
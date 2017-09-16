#define F for(i=0;i<6;i++){
main(){
char x[6][8];
int t,i,c;
F
strcpy(x[i],"|||||||");
}
for(;;){
c=!c;
F
printf("%s\n",x[i]);
}
scanf("%d",&t);
F
if(x[i][t]^'|'){
i--;
break;
}
}
if(i==6)i=5;
x[i][t]=c+42;
}
}

int main(){srand(time(0));int i=0,r=rand()%50;for(;;){scanf("%d",&i);if(i<r)printf(">");if(i>r)printf("<");if(i==r){printf("=\n");break;}}}

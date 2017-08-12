int main(){srand(time(0));int i=0,r=rand()%50;for(;;){scanf("%d",&i);if(i<r)puts("low");if(i>r)puts("high");if(i==r){puts("it");break;}}}

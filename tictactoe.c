#include <stdio.h>

int main(){

char t[3][3],p1,p2,cont,counter,choice[9];
char c=0,i=0,fasz=0;
int a;
counter=0;
p1='X';
p2='O';

t[0][0]='#';
t[0][1]='#';
t[0][2]='#';
t[1][0]='#';
t[1][1]='#';
t[1][2]='#';
t[2][0]='#';
t[2][1]='#';
t[2][2]='#';

for(char j=0;j<9;j++){choice[j]=20;}

printf("\n Üdvözlöm! A játék egy standard 3x3 amőba két játékos részére, ahol az első játékos X.\n A numerikus billentyűzeten a számok helyzete szerint\n kerülnek lehelyezésre az amőboidok, a játékosok felváltva jönnek.\n Ha lészen áll kezdődhet a játék? Y/N\n");

scanf("%c",&cont);

if(cont=='Y' || cont=='y'){

for(char k=0;k<3;k++){
			for(char j=0;j<3;j++){
				printf("%c",t[k][j]);
				printf(" ");
			}
			printf("\n");
		}
		printf("\n");


while(1){
	
asd:	scanf("%d",&a);
	c=0;
	
		
	for(char j=0;j<9;j++){
		if(a==choice[j]){c=c+1;};	
			     }
	
	if(c!=0){printf("Ez a pozíció már ki lett választva!\n Gondolja át megint!");}
	else{
	choice[i]=a;
	
	if(counter%2==0){
		if(a==1){t[2][0]=p1;}
		else if(a==2){t[2][1]=p1;}
		else if(a==3){t[2][2]=p1;}
		else if(a==4){t[1][0]=p1;}
		else if(a==5){t[1][1]=p1;}
		else if(a==6){t[1][2]=p1;}
		else if(a==7){t[0][0]=p1;}	
		else if(a==8){t[0][1]=p1;}
		else if(a==9){t[0][2]=p1;}
			else{
				printf("Nem megfelelően adta meg az amőboid helyzetét\n gondolja át, írja be helyesen!\n");
				goto asd;
		    	    }//else inner
			}
	else{
		if(a==1){t[2][0]=p2;}
		else if(a==2){t[2][1]=p2;}
		else if(a==3){t[2][2]=p2;}
		else if(a==4){t[1][0]=p2;}
		else if(a==5){t[1][1]=p2;}
		else if(a==6){t[1][2]=p2;}
		else if(a==7){t[0][0]=p2;}	
		else if(a==8){t[0][1]=p2;}
		else if(a==9){t[0][2]=p2;}
			else{
				printf("Nem megfelelően adta meg az amőboid helyzetét\n gondolja át, írja be helyesen!\n");
				goto asd;
		
			    }//else inner
	    }//else outer
		i++;
		counter++; //counter++
		   
		   
		   
		   };//értékelhelyezés programtörzs
	
		printf("\n");
		
		for(char k=0;k<3;k++){
			for(char j=0;j<3;j++){
				printf("%c",t[k][j]);
				printf(" ");
			}
			printf("\n");
		}
		printf("\n");
		
		//win conditions
		for(char j=0;j<3;j++){
			if(t[j][0]+t[j][1]+t[j][2]==3*88){printf("Az első 'X' játékos nyert\n");fasz=1; break;}
			else if(t[0][j]+t[1][j]+t[2][j]==3*88){printf("Az első 'X' játékos nyert\n");fasz=1; break;}
			else if(t[0][j]+t[1][j]+t[2][j]==3*79){printf("A második 'O' játékos nyert\n");fasz=1; break;}
			else if(t[j][0]+t[j][1]+t[j][2]==3*79){printf("Az első 'O' játékos nyert\n");fasz=1; break;}
			}
		
		if(t[0][0]+t[1][1]+t[2][2]==3*88){printf("Az első 'X' játékos nyert!\n"); break;}
		else if(t[0][2]+t[1][1]+t[2][0]==3*88){printf("Az első 'X' játékos nyert!\n"); break;}
		else if(t[0][0]+t[1][1]+t[2][2]==3*79){printf("Az első 'O' játékos nyert!\n"); break;}
		else if(t[0][2]+t[1][1]+t[2][0]==3*79){printf("Az első 'O' játékos nyert!\n"); break;}
		else if(counter==9){printf("A játék döntetlenben végződött.\n HAHA!\n");break;}
	
		if(fasz==1){break;}
	};//whilet zár	
		
		
		}// if cont zárás
		
else{printf("A játék nem indul el, bár nem tudom így mi a faszért indította egyáltalán el. :(\n");};

return 0;
}

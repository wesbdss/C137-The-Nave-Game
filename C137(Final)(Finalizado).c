#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define ACIMA 72
#define DIREITA 77
#define ESQUERDA 75
#define i 30    // quantia de linhas
#define j 30    // quantia de colunas

#define ib 40    // quantia de linhas mapa do boss
#define jb 150	// quantia de colunas mapa do boss	

typedef struct{
	int posa;
	int posc;
}tiro;

typedef struct{
	int posa;
	int posc;
}naveini;

void gotoxy(int x,int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y}); // x=j (sao colunas) e y=i (sao as linhas)
}

void gameover(int x,int y){
	gotoxy(x,y);
	printf("G");
	gotoxy(x-2,y);
	printf("G");
	gotoxy(x-4,y);
	printf("G");
	gotoxy(x-5,y+1);
	printf("G");
	gotoxy(x-6,y+2);
	printf("G");
	gotoxy(x-6,y+3);
	printf("G");
	gotoxy(x-5,y+4);
	printf("G");
	gotoxy(x-4,y+5);
	printf("G");
	gotoxy(x-2,y+5);
	printf("G");
	gotoxy(x,y+5);
	printf("G");
	gotoxy(x,y+4);
	printf("G");
	gotoxy(x,y+3);
	printf("G");
	gotoxy(x-1,y+3);
	printf("G");
	
	gotoxy(x+3,y+5);
	printf("A");
	gotoxy(x+3,y+4);
	printf("A");
	gotoxy(x+3,y+3);
	printf("A");
	gotoxy(x+3,y+2);
	printf("A");
	gotoxy(x+4,y+1);
	printf("A");
	gotoxy(x+5,y);
	printf("A");
	gotoxy(x+6,y+1);
	printf("A");
	gotoxy(x+7,y+2);
	printf("A");
	gotoxy(x+7,y+3);
	printf("A");
	gotoxy(x+7,y+4);
	printf("A");
	gotoxy(x+7,y+5);
	printf("A");
	gotoxy(x+5,y+3);
	printf("A");
	gotoxy(x+10,y+5);
	printf("M");
	gotoxy(x+10,y+4);
	printf("M");
	gotoxy(x+10,y+3);
	printf("M");
	gotoxy(x+10,y+2);
	printf("M");
	gotoxy(x+10,y+1);
	printf("M");
	gotoxy(x+10,y);
	printf("M");
	gotoxy(x+11,y+1);
	printf("M");
	gotoxy(x+12,y+2);
	printf("M");
	gotoxy(x+13,y+3);
	printf("M");
	gotoxy(x+14,y+2);
	printf("M");
	gotoxy(x+15,y+1);
	printf("M");
	gotoxy(x+16,y);
	printf("M");
	gotoxy(x+16,y+1);
	printf("M");
	gotoxy(x+16,y+2);
	printf("M");
	gotoxy(x+16,y+3);
	printf("M");
	gotoxy(x+16,y+4);
	printf("M");
	gotoxy(x+16,y+5);
	printf("M");
	gotoxy(x+19,y+5);
	printf("E");
	gotoxy(x+19,y+4);
	printf("E");
	gotoxy(x+19,y+3);
	printf("E");
	gotoxy(x+19,y+2);
	printf("E");
	gotoxy(x+19,y+1);
	printf("E");
	gotoxy(x+19,y);
	printf("E");
	gotoxy(x+21,y);
	printf("E");
	gotoxy(x+23,y);
	printf("E");
	gotoxy(x+25,y);
	printf("E");
	gotoxy(x+21,y+2);
	printf("E");
	gotoxy(x+23,y+2);
	printf("E");
	gotoxy(x+21,y+5);
	printf("E");
	gotoxy(x+23,y+5);
	printf("E");
	gotoxy(x+25,y+5);
	printf("E");
	
	gotoxy(x+19,y+7);
	printf("O");
	gotoxy(x+19,y+8);
	printf("O");
	gotoxy(x+19,y+9);
	printf("O");
	gotoxy(x+19,y+10);
	printf("O");
	gotoxy(x+19,y+11);
	printf("O");
	gotoxy(x+19,y+12);
	printf("O");
	gotoxy(x+21,y+12);
	printf("O");
	gotoxy(x+23,y+12);
	printf("O");
	gotoxy(x+25,y+12);
	printf("O");
	gotoxy(x+25,y+11);
	printf("O");
	gotoxy(x+25,y+10);
	printf("O");
	gotoxy(x+25,y+9);
	printf("O");
	gotoxy(x+25,y+8);
	printf("O");
	gotoxy(x+25,y+7);
	printf("O");
	
	gotoxy(x+23,y+7);
	printf("O");
	gotoxy(x+21,y+7);
	printf("O");
	gotoxy(x+28,y+7);
	printf("V");
	gotoxy(x+28,y+8);
	printf("V");
	gotoxy(x+28,y+9);
	printf("V");
	gotoxy(x+28,y+10);
	printf("V");
	gotoxy(x+29,y+11);
	printf("V");
	gotoxy(x+30,y+12);
	printf("V");
	gotoxy(x+31,y+11);
	printf("V");
	gotoxy(x+32,y+10);
	printf("V");
	gotoxy(x+32,y+9);
	printf("V");
	gotoxy(x+32,y+8);
	printf("V");
	gotoxy(x+32,y+7);
	printf("V");
	gotoxy(x+35,y+7);
	printf("E");
	gotoxy(x+35,y+8);
	printf("E");
	gotoxy(x+35,y+9);
	printf("E");
	gotoxy(x+35,y+10);
	printf("E");
	gotoxy(x+35,y+11);
	printf("E");
	gotoxy(x+35,y+12);
	printf("E");
	gotoxy(x+37,y+7);
	printf("E");
	gotoxy(x+39,y+7);
	printf("E");
	gotoxy(x+41,y+7);
	printf("E");
	gotoxy(x+37,y+9);
	printf("E");
	gotoxy(x+39,y+9);
	printf("E");
	gotoxy(x+37,y+12);
	printf("E");
	gotoxy(x+39,y+12);
	printf("E");
	gotoxy(x+41,y+12);
	printf("E");
	gotoxy(x+44,y+7);
	printf("R");
	gotoxy(x+44,y+8);
	printf("R");
	gotoxy(x+44,y+9);
	printf("R");
	gotoxy(x+44,y+10);
	printf("R");
	gotoxy(x+44,y+11);
	printf("R");
	gotoxy(x+44,y+12);
	printf("R");
	gotoxy(x+46,y+7);
	printf("R");
	gotoxy(x+48,y+7);
	printf("R");
	gotoxy(x+49,y+8);
	printf("R");
	gotoxy(x+49,y+9);
	printf("R");
	gotoxy(x+48,y+10);
	printf("R");
	gotoxy(x+47,y+10);
	printf("R");
	gotoxy(x+48,y+11);
	printf("R");
	gotoxy(x+49,y+12);
	printf("R");
}

void desenha_campo(int boss){    //desenha o campo
    int des; // variavel auxiliar para desenhar
	if(!boss){
	    for(des=i;des>=0;des--){   // desenha a parede vertical da esquerda
	        gotoxy(0,des);
	        if(des != i && des !=0 && des != i-4) printf("%c",186);
	        else if(des == i) printf("%c",200);
	        else if(des == i-4) printf("%c",204);
	        else if(des == 0) printf("%c",201);
	        Sleep(1);
	    }
		for(des=1;des<j;des++){   // desenha a parede horizontal de cima
	        gotoxy(des,0);
	        printf("%c",205);
	        Sleep(1);
	    }
	    for(des=0;des<=i;des++){   // desenha a parede vertical da direita
	        gotoxy(j,des);
	        if(des != i && des !=0 && des != i-4) printf("%c",186);
	        else if(des == 0) printf("%c",187);
	        else if(des == i-4) printf("%c",185);
	        else if(des == i) printf("%c",188);
			Sleep(1);
	    }
	    for(des=j-1;des>0;des--){   // desenha a parede horizontal de baixo
	        gotoxy(des,i);
	        printf("%c",205);
	        Sleep(1);
	    }
	}else{
		for(des=ib;des>=0;des--){   // desenha a parede vertical da esquerda
	        gotoxy(0,des);
	        if(des != ib && des !=0 && des != ib-4) printf("%c",186);
	        else if(des == ib) printf("%c",200);
	        else if(des == ib-4) printf("%c",204);
	        else if(des == 0) printf("%c",201);
	        Sleep(10);
	    }
		for(des=1;des<jb;des++){   // desenha a parede horizontal de cima
	        gotoxy(des,0);
	        printf("%c",205);
	        Sleep(10);
	    }
	    for(des=0;des<=ib;des++){   // desenha a parede vertical da direita
	        gotoxy(jb,des);
	        if(des != ib && des !=0 && des != ib-4) printf("%c",186);
	        else if(des == 0) printf("%c",187);
	        else if(des == ib-4) printf("%c",185);
	        else if(des == ib) printf("%c",188);
			Sleep(10);
	    }
	    for(des=jb-1;des>0;des--){   // desenha a parede horizontal de baixo
	        gotoxy(des,ib);
	        printf("%c",205);
	        Sleep(10);
	    }
	}
}

void construction(int x,int ident,int boss){
	if(ident){
		if(boss){
			gotoxy(x,ib-2);//origem
			printf("%c",0);
			gotoxy(x+1,ib-2);//direita a origem
			printf("%c",0);
			gotoxy(x-1,ib-2);//esquerda a origem
			printf("%c",0);
			gotoxy(x,ib-3);//6cabeça
			printf("%c",0);
			gotoxy(x+1,ib-1);//pé direito
			printf("%c",0);
			gotoxy(x-1,ib-1);//pe esquedo
			printf("%c",0);
		}else{
			gotoxy(x,i-2);//origem
			printf("%c",0);
			gotoxy(x+1,i-2);//direita a origem
			printf("%c",0);
			gotoxy(x-1,i-2);//esquerda a origem
			printf("%c",0);
			gotoxy(x,i-3);//6cabeça
			printf("%c",0);
			gotoxy(x+1,i-1);//pé direito
			printf("%c",0);
			gotoxy(x-1,i-1);//pe esquedo
			printf("%c",0);
		}
	}else{
		if(boss){
			gotoxy(x,ib-2);//origem
			printf("%c",254);
			gotoxy(x+1,ib-2);//direita a origem
			printf("%c",254);
			gotoxy(x-1,ib-2);//esquerda a origem
			printf("%c",254);
			gotoxy(x,ib-3);//6cabeça
			printf("%c",254);
			gotoxy(x+1,ib-1);//pé direito
			printf("%c",254);
			gotoxy(x-1,ib-1);//pe esquedo
			printf("%c",254);	
		}else{
			gotoxy(x,i-2);//origem
			printf("%c",254);
			gotoxy(x+1,i-2);//direita a origem
			printf("%c",254);
			gotoxy(x-1,i-2);//esquerda a origem
			printf("%c",254);
			gotoxy(x,i-3);//6cabeça
			printf("%c",254);
			gotoxy(x+1,i-1);//pé direito
			printf("%c",254);
			gotoxy(x-1,i-1);//pe esquedo
			printf("%c",254);
		}
	}

}

void enemy(int x, int y,int ident){
	if(ident){
		gotoxy(x,y);//origem
		printf("%c",0);
		gotoxy(x+1,y);//direita a origem
		printf("%c",0);
		gotoxy(x-1,y);//esquerda a origem
		printf("%c",0);
		gotoxy(x,y+1);//6cabeça
		printf("%c",0);
		gotoxy(x+1,y-1);//pé direito
		printf("%c",0);
		gotoxy(x-1,y-1);//pe esquedo
		printf("%c",0);
	}else{

		gotoxy(x,y);//origem
		printf("%c",254);
		gotoxy(x+1,y);//direita a origem
		printf("%c",254);
		gotoxy(x-1,y);//esquerda a origem
		printf("%c",254);
		gotoxy(x,y+1);//6cabeça
		printf("%c",254);
		gotoxy(x+1,y-1);//pé direito
		printf("%c",254);
		gotoxy(x-1,y-1);//pe esquedo
		printf("%c",254);	
	}
}

void turtle(int x,int y){
	int k,l=0,xo,yo;
	xo=x;yo=y;
	//parte de baixo (casco)
	for(k=0;k<40;k++){
		gotoxy(x+k,y);
		printf("%c",219);
		Sleep(10);
	}
	//frente diagonal baixa (casco)
	for(k=0;k<8;k++,l++){
		gotoxy(x-l,y-k);
		printf("%c",219);
		gotoxy(x-l+1,y-k);
		printf("%c",219);
		Sleep(10);
	}
	x = x -l;
	y = y-k;
	//frente diagonal alta (casco)
	for(k=l=0;k<4;k++,l++){
		gotoxy(x+l+l+3,y-k);
		printf("%c",219);
		gotoxy(x+l+l+2,y-k);
		printf("%c",219);
		Sleep(10);
	}
	x=x+l+l+2;
	y=y-k;
	//parte de cima (casco)
	for(k = 0;k<23;k++){
		gotoxy(x+k,y);
		printf("%c",219);
		Sleep(10);
	}
	x= x+k;
	
	//parte de tras diagonario (casco)
	for(k=l=0;k<7;k++,l++){
		gotoxy(x+l+l,y+k);
		printf("%c",219);
		gotoxy(x+l+l+1,y+k);
		printf("%c",219);
		Sleep(10);
	}
	x= x+l+l;
	y=y+k;
	//traseira (casco)
	for(l=k=0;k<5;k++){
		gotoxy(x,y+k);
		printf("%c",219);
		Sleep(10);
	}
	y = y+k;
	x=x+1;
	for(k=0;k<5;k++){
		gotoxy(x+k+k,y-k-k);
		printf("%c",254);
		Sleep(10);
	}
	y=y-5;
	for(k=0;k<5;k++){
		gotoxy(x+k+k,y-k);
		printf("%c",254);
		Sleep(10);
	}
	//cabeça
	gotoxy(xo-1,yo-1);
	printf("%c",254);
	gotoxy(xo-2,yo-1);
	printf("%c",254);
	gotoxy(xo-2,yo-1);
	printf("%c",254);
	gotoxy(xo-3,yo-1);
	printf("%c",254);
	gotoxy(xo-3,yo-2);
	printf("%c",254);
	gotoxy(xo-4,yo-3);
	printf("%c",254);
	gotoxy(xo-5,yo-4);
	printf("%c",254);
	gotoxy(xo-6,yo-5);
	printf("%c",254);
	gotoxy(xo-7,yo-6);
	printf("%c",254);
	gotoxy(xo-8,yo-7);
	printf("%c",254);
	gotoxy(xo-11,yo-8);
	printf("%c",254);
	gotoxy(xo-13,yo-8);
	printf("%c",254);
	gotoxy(xo-15,yo-8);
	printf("%c",254);
	gotoxy(xo-17,yo-8);
	printf("%c",254);
	gotoxy(xo-18,yo-7);
	printf("%c",254);
	gotoxy(xo-19,yo-6);
	printf("%c",254);
	gotoxy(xo-20,yo-5);
	printf("%c",254);
	gotoxy(xo-21,yo-4);
	printf("%c",254);
	gotoxy(xo-22,yo-3);
	printf("%c",254);
	gotoxy(xo-21,yo-2);
	printf("%c",254);
	gotoxy(xo-20,yo-1);
	printf("%c",254);
	gotoxy(xo-19,yo);
	printf("%c",254);
	gotoxy(xo-18,yo+1);
	printf("%c",254);
	gotoxy(xo-16,yo+1);
	printf("%c",254);
	gotoxy(xo-14,yo+1);
	printf("%c",254);
	gotoxy(xo-12,yo+1);
	printf("%c",254);
	gotoxy(xo-10,yo+1);
	printf("%c",254);
	gotoxy(xo-8,yo+1);
	printf("%c",254);
	gotoxy(xo-6,yo+1);
	printf("%c",254);
	gotoxy(xo-4,yo+1);
	printf("%c",254);
	gotoxy(xo-2,yo);
	printf("%c",254);
	//olhos
	gotoxy(xo-15,yo-4);
	printf("%c",223);
	gotoxy(xo-14,yo-4);
	printf("%c",223);
	
	
	//cor casco cinza
	x= xo;
	y= yo;
	gotoxy(xo+1,yo-1);
	printf("%c",177);
	for(k=0;k<37;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x,y-2);
	for(k=0;k<39;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x-1,y-3);
	for(k=0;k<40;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x-2,y-3);
	for(k=0;k<41;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x-3,y-4);
	for(k=0;k<42;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x-4,y-5);
	for(k=0;k<43;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x-5,y-6);
	for(k=0;k<42;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x-5,y-7);
	for(k=0;k<40;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x-4,y-8);
	for(k=0;k<37;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x-2,y-9);
	for(k=0;k<33;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x,y-10);
	for(k=0;k<29;k++){
		printf("%c",177);
		Sleep(1);
	}
	gotoxy(x+2,y-11);
	for(k=0;k<25;k++){
		printf("%c",177);
		Sleep(1);
	}
	//patas
	gotoxy(x+2,y+1);
	printf("%c",254);
	gotoxy(x+1,y+2);
	printf("%c",254);
	gotoxy(x,y+3);
	printf("%c",254);
	gotoxy(x-1,y+4);
	printf("%c",254);
	gotoxy(x-1,y+5);
	printf("%c",254);
	gotoxy(x,y+6);
	printf("%c",254);
	gotoxy(x+1,y+7);
	printf("%c",254);
	gotoxy(x+2,y+8);
	printf("%c",254);
	gotoxy(x+3,y+9);
	printf("%c",254);
	gotoxy(x+4,y+10);
	printf("%c",254);
	gotoxy(x+5,y+11);
	printf("%c",254);
	gotoxy(x+6,y+11);
	printf("%c",254);
	gotoxy(x+7,y+12);
	printf("%c",254);
	gotoxy(x+8,y+12);
	printf("%c",254);
	gotoxy(x+9,y+12);
	printf("%c",254);
	gotoxy(x+10,y+11);
	printf("%c",254);
	gotoxy(x+11,y+10);
	printf("%c",254);
	gotoxy(x+12,y+9);
	printf("%c",254);
	gotoxy(x+13,y+8);
	printf("%c",254);
	gotoxy(x+14,y+7);
	printf("%c",254);
	gotoxy(x+12,y+7);
	printf("%c",254);
	gotoxy(x+10,y+6);
	printf("%c",254);
	gotoxy(x+8,y+5);
	printf("%c",254);
	gotoxy(x+6,y+4);
	printf("%c",254);
	gotoxy(x+5,y+3);
	printf("%c",254);
	gotoxy(x+6,y+2);
	printf("%c",254);
	gotoxy(x+7,y+1);
	printf("%c",254);
	gotoxy(x+35,y+1);
	printf("%c",254);
	gotoxy(x+35,y+2);
	printf("%c",254);
	gotoxy(x+34,y+3);
	printf("%c",254);
	gotoxy(x+33,y+4);
	printf("%c",254);
	gotoxy(x+31,y+4);
	printf("%c",254);
	gotoxy(x+30,y+3);
	printf("%c",254);
	gotoxy(x+29,y+2);
	printf("%c",254);
	gotoxy(x+29,y+1);
	printf("%c",254);
	
	//pintura do casco
	gotoxy(x+1,y-1);
	printf("%c",178);
	gotoxy(x+1,y-2);
	printf("%c",178);
	gotoxy(x+1,y-3);
	printf("%c",178);
	gotoxy(x+2,y-4);
	printf("%c",178);
	gotoxy(x+3,y-5);
	printf("%c",178);
	gotoxy(x+4,y-6);
	printf("%c",178);
	gotoxy(x+5,y-7);
	printf("%c",178);
	
	gotoxy(x+6,y-7);
	printf("%c",178);
	gotoxy(x+7,y-7);
	printf("%c",178);
	gotoxy(x+8,y-7);
	printf("%c",178);
	gotoxy(x+9,y-7);
	printf("%c",178);
	gotoxy(x+10,y-7);
	printf("%c",178);
	gotoxy(x+11,y-7);
	printf("%c",178);
	gotoxy(x+12,y-7);
	printf("%c",178);
	gotoxy(x+13,y-7);
	printf("%c",178);
	gotoxy(x+14,y-7);
	printf("%c",178);
	gotoxy(x+15,y-7);
	printf("%c",178);
	gotoxy(x+16,y-7);
	printf("%c",178);
	gotoxy(x+17,y-7);
	printf("%c",178);
	gotoxy(x+18,y-7);
	printf("%c",178);
	gotoxy(x+19,y-7);
	printf("%c",178);
	gotoxy(x+20,y-7);
	printf("%c",178);
	gotoxy(x+21,y-7);
	printf("%c",178);
	gotoxy(x+22,y-7);
	printf("%c",178);
	gotoxy(x+23,y-7);
	printf("%c",178);
	
	gotoxy(x+24,y-6);
	printf("%c",178);
	gotoxy(x+25,y-5);
	printf("%c",178);
	gotoxy(x+26,y-4);
	printf("%c",178);
	gotoxy(x+27,y-3);
	printf("%c",178);
	
	gotoxy(x+28,y-4);
	printf("%c",178);
	gotoxy(x+29,y-4);
	printf("%c",178);
	gotoxy(x+30,y-4);
	printf("%c",178);
	gotoxy(x+31,y-5);
	printf("%c",178);
	gotoxy(x+32,y-5);
	printf("%c",178);
	gotoxy(x+33,y-6);
	printf("%c",178);
	gotoxy(x+34,y-6);
	printf("%c",178);
	gotoxy(x+35,y-6);
	printf("%c",178);
	
	gotoxy(x+27,y-2);
	printf("%c",178);
	gotoxy(x+27,y-1);
	printf("%c",178);
	
	gotoxy(x+24,y-8);
	printf("%c",178);
	gotoxy(x+25,y-9);
	printf("%c",178);
	gotoxy(x+26,y-10);
	printf("%c",178);
	
	gotoxy(x+5,y-8);
	printf("%c",178);
	gotoxy(x+4,y-9);
	printf("%c",178);
	gotoxy(x+3,y-10);
	printf("%c",178);
	gotoxy(x+2,y-11);
	printf("%c",178);
	
	gotoxy(x-18,y+2);
	printf("%c",44);
	gotoxy(x-17,y+2);
	printf("%c",44);
	gotoxy(x-16,y+2);
	printf("%c",44);
	gotoxy(x-18,y+3);
	printf("%c",44);
	gotoxy(x-17,y+3);
	printf("%c",44);
	gotoxy(x-17,y+4);
	printf("%c",44);	
}

void inicia_struct(tiro bala[],int tamanhob,naveini inimigo[],int tamanhoi){
	int cont;
	for(cont=0;cont<tamanhob;cont++){
		bala[cont].posa = -1;
	}
	for(cont=0;cont<tamanhoi;cont++){
		inimigo[cont].posc = -1;
	}
}

void novo_tiro(tiro bala[],int tamanho,int pos,int boss){
	int cont;
	if(boss){
		for(cont=0;cont<tamanho;cont++){
			if(bala[cont].posa == -1){
				bala[cont].posa = ib-4;
				bala[cont].posc = pos;
				break;
			}
		}	
	}else{
		for(cont=0;cont<tamanho;cont++){
			if(bala[cont].posa == -1){
				bala[cont].posa = i-4;
				bala[cont].posc = pos;
				break;
			}
		}
	}
}

void nova_nave(naveini inimigo[],int tamanho,int posicao){
	int cont;
	for(cont=0;cont<tamanho;cont++){
		if(inimigo[cont].posc == -1){
			inimigo[cont].posc = posicao;
			inimigo[cont].posa = 2;
			break;
		}				
	}
}

int jogo(){
	int direcao,tecla=32,pos=(j/2),cont,cont2,cdtiro=0,cdinimigo=2,posicao,velocidadeinimigo=10,pontuacao=90,level=1,aumento=0,aumentoapa=0;
	tiro bala[10];
	naveini inimigo[20];
	inicia_struct(bala,10,inimigo,20);
	
	srand(time(NULL));
	
	while(tecla!=27){      // desenvolvimento do jogo
	   	while(tecla!=27 &&!(tecla=kbhit())){
	   		if(direcao == 1  && pos>2){ //Move a nave para a esquerda e impossibilita de sair do mapa
	   			construction(pos,1,0);				
				pos--;	
			}
	   		if(direcao == 2 && pos<(j-2)){ //Move a nave para a direita e impossibilita de sair do mapa
	   			construction(pos,1,0);				
				pos++;
			}
	   		gotoxy(pos,i-2);
	   		construction(pos,0,0); //Finaliza o movimento da nave
	   		
	   		for(cont=0;cont<20;cont++){  //Parte que torna a nave "material" ou seja que o tiro bate e mata ela.
		   		if(inimigo[cont].posc != -1){
		   			for(cont2=0;cont2<10;cont2++){
		   				if( (bala[cont2].posa == inimigo[cont].posa) && ( (bala[cont2].posc == inimigo[cont].posc) || ( bala[cont2].posc == (inimigo[cont].posc + 1)) || ( bala[cont2].posc == (inimigo[cont].posc - 1)) ) ){
							enemy(inimigo[cont].posc,inimigo[cont].posa,1);
		   					inimigo[cont].posc = -1;
		   					gotoxy(bala[cont2].posc,bala[cont2].posa+1);
							printf("%c",0);
							bala[cont2].posa = -1;
							pontuacao ++;
							if((pontuacao%10) == 0 && pontuacao != 0){
								if(level < 9) aumento++;
								if(level >=5) aumentoapa+=2;
								level++;
							}
						}else if( (bala[cont2].posa == (inimigo[cont].posa+1)) && (bala[cont2].posc == inimigo[cont].posc)){
							enemy(inimigo[cont].posc,inimigo[cont].posa,1);
		   					inimigo[cont].posc = -1;
		   					gotoxy(bala[cont2].posc,bala[cont2].posa+1);
							printf("%c",0);
							bala[cont2].posa = -1;
							pontuacao ++;
							if((pontuacao%10) == 0 && pontuacao != 0){
								if(level < 9) aumento++;
								if(level >=5) aumentoapa+=2;
								level++;
							}
						}else if( (bala[cont2].posa == (inimigo[cont].posa-1)) && ( (bala[cont2].posc == (inimigo[cont].posc+1)) || (bala[cont2].posc == (inimigo[cont].posc-1)) || (bala[cont2].posc == inimigo[cont].posc) ) ){
							enemy(inimigo[cont].posc,inimigo[cont].posa,1);
		   					inimigo[cont].posc = -1;
		   					gotoxy(bala[cont2].posc,bala[cont2].posa+1);
							printf("%c",0);
							bala[cont2].posa = -1;
							pontuacao ++;
							if((pontuacao%10) == 0 && pontuacao != 0){
								if(level < 9) aumento++;
								if(level >=5) aumentoapa+=2;
								level++;
							}
						}
					}
				}
			}
			
			if(cdinimigo == 0){ //Cria novos inimigos
				posicao = 2+(rand()%(j-3));
				nova_nave(inimigo,20,posicao);
				enemy(posicao,2,0);
				cdinimigo = 45 - aumentoapa;	
			}
	   		
	   		if(!velocidadeinimigo){ //movimenta o inimigo
	   			int direcaoini;
	   			for(cont=0;cont<20;cont++){
		   			if(inimigo[cont].posc != -1){
		   				direcaoini = rand()%3;
		   				enemy(inimigo[cont].posc,inimigo[cont].posa,1);
		   				inimigo[cont].posa++;
						if(direcaoini == 2 && inimigo[cont].posc<(j-3)){
							inimigo[cont].posc+=2;
						}else if(direcaoini == 1 && inimigo[cont].posc>3){
							inimigo[cont].posc-=2;
						}
						enemy(inimigo[cont].posc,inimigo[cont].posa,0);
						if(inimigo[cont].posa == i-4){
							tecla = 27;
						}	
					}		
				}
				velocidadeinimigo = (15 - aumento);	
			}
	   		
			for(cont=0;cont<10;cont++){ //Parte dos tiros
				if(bala[cont].posa != 0 && bala[cont].posa !=-1){ //Para mostrar apenas os tiros 
					gotoxy(bala[cont].posc,bala[cont].posa+1);
					printf("%c",0);
					gotoxy(bala[cont].posc,bala[cont].posa); //Movimento da bala
					printf("%c",167);
					bala[cont].posa--;
				}else if(!bala[cont].posa){ //Some com a bala caso ela chegue ao fim do mapa
					gotoxy(bala[cont].posc,(1+bala[cont].posa));
					printf("%c",0);
					bala[cont].posa--;
				}
			}
			direcao = 0;
			if(cdtiro != 0){ //Cowdown do tiro
				cdtiro--;
			}
			cdinimigo--;
			velocidadeinimigo--;
			Sleep(30);
			gotoxy(0, i+2);
            printf("Pontua%c%co= %d      Level = %d     Aumento = %d %d", 135, 198,pontuacao,level,aumento,aumentoapa);
            if(pontuacao == 100){
            	return 0;
			}
		}
		if(tecla != 27) tecla = getch();
		if(tecla == DIREITA) direcao=2;
		if(tecla == ESQUERDA) direcao=1;
		if(tecla == ACIMA && cdtiro==0){
			novo_tiro(bala,10,pos,0);
			cdtiro = 10;	
		}
	}
	return 1;
}

void jogo_hard(){
	char opc='1',texto3[] = {"Agora nao ha mas volta. Boa sorte aventureiro. Ate um outro dia.\0"},texto2[] = {"Como recompensa voce adiquiriu a chance de jogar o modo hardcore.\0"},texto1[] = {"Meus parabens grande aventureiro, voce conseguiu derrotar o mal que assolava o espaco a mais de 35000000 anos.\0"};
	int opc2=1,cont=0;
	system("cls");
	while(texto1[cont] != '\0'){
		printf("%c",texto1[cont]);
		cont++;
		Sleep(15);
	}
	cont = 0;
	printf("\n");
	while(texto2[cont] != '\0'){
		printf("%c",texto2[cont]);
		cont++;
		Sleep(15);
	}
	printf("\n\nDeseja jogar o modo hardcore ?\n(1)Sim        (2)N%co",198);
	fflush(stdin);
	scanf("%c",&opc);
	switch(opc){
		case '1':
			do{
				system("cls");
				printf("\nDevo avisa-lo que sua habilidade nao e o suficiente para vencer esse modo.\nSabendo disso deseja continuar?\n(1)Sim        (2)N%co\n",198);
				fflush(stdin);
				scanf("%d",&opc2);					
				switch(opc2){
					case 1:
						cont = 0;
						system("cls");
						while(texto3[cont] != '\0'){
							printf("%c",texto3[cont]);
							cont++;
							Sleep(15);
						}
						sleep(5);
						system("cls");
						desenha_campo(0);
						
						int direcao,tecla=32,pos=(j/2),cont,cdtiro=0,cdinimigo=20,posicao,velocidadeinimigo=40,desvioauto=0,direcaodesvio=0;
						tiro bala[10];
						naveini inimigo[1];
						inicia_struct(bala,10,inimigo,1);
						
						srand(time(NULL));
						
						while(tecla!=27){      // desenvolvimento do jogo
						   	while(tecla!=27 &&!(tecla=kbhit())){
						   		if(direcao == 1  && pos>2){ //Move a nave para a esquerda e impossibilita de sair do mapa
						   			construction(pos,1,0);				
									pos--;	
								}
						   		if(direcao == 2 && pos<(j-2)){ //Move a nave para a direita e impossibilita de sair do mapa
						   			construction(pos,1,0);				
									pos++;
								}
						   		gotoxy(pos,i-2);
						   		construction(pos,0,0); //Finaliza o movimento da nave
						   		
								
								if(cdinimigo == 0){ //Cria novos inimigos
									posicao = 2+(rand()%(j-3));
									nova_nave(inimigo,20,posicao);
									enemy(posicao,2,0);
									cdinimigo = 10000;	
								}
								
					   			for(cont=0;cont<10;cont++){ //Desvia de tudo
					   				if( (bala[cont].posa == inimigo[0].posa+2) && (bala[cont].posc+1 == inimigo[0].posc)){
					   					desvioauto = 1;
					   					velocidadeinimigo = 0;
					   					direcaodesvio = 2;
									}else if((bala[cont].posa == inimigo[0].posa+2) && (bala[cont].posc-1 == inimigo[0].posc)){
										desvioauto = 1;
										velocidadeinimigo = 0;
					   					direcaodesvio = 1;
									}else if( (bala[cont].posa == inimigo[0].posa+2) && (bala[cont].posc == inimigo[0].posc)){
										desvioauto = 1;
										velocidadeinimigo = 0;
					   					direcaodesvio = 0;
									}
								}
								
						   		if(!velocidadeinimigo){ //movimenta o inimigo
						   			int direcaoini;
							   			if(!desvioauto){
							   				direcaoini = rand()%3;
							   				enemy(inimigo[0].posc,inimigo[0].posa,1);
							   				inimigo[0].posa++;
											if(direcaoini == 2 && inimigo[0].posc<(j-3)){
												inimigo[0].posc+=2;
											}else if(direcaoini == 1 && inimigo[0].posc>3){
												inimigo[0].posc-=2;
											}
											enemy(inimigo[0].posc,inimigo[0].posa,0);	
										}else{
											direcaoini = direcaodesvio;
							   				enemy(inimigo[0].posc,inimigo[0].posa,1);
							   				inimigo[0].posa++;
											if(direcaoini == 2 || direcaoini == 0){
												if(inimigo[0].posc<(j-3)){
													inimigo[0].posc+=2;	
												}else{
													inimigo[0].posc-=3;	
												}
											}else if(direcaoini == 1){
												if(inimigo[0].posc>3){
													inimigo[0].posc-=2;
												}else{
													inimigo[0].posc+=3;
												}
											}
											enemy(inimigo[0].posc,inimigo[0].posa,0);
										}
									desvioauto=0;
									if((inimigo[0].posa > i-7)){
										velocidadeinimigo = 2;
									}else{
										velocidadeinimigo = 40;	
									}		
								}
								
								if(inimigo[0].posa == i-4){
									tecla = 27;
								}
						   		
								for(cont=0;cont<10;cont++){ //Parte dos tiros
									if(bala[cont].posa != 0 && bala[cont].posa !=-1){ //Para mostrar apenas os tiros 
										gotoxy(bala[cont].posc,bala[cont].posa+1);
										printf("%c",0);
										gotoxy(bala[cont].posc,bala[cont].posa); //Movimento da bala
										printf("%c",167);
										bala[cont].posa--;
									}else if(!bala[cont].posa){ //Some com a bala caso ela chegue ao fim do mapa
										gotoxy(bala[cont].posc,(1+bala[cont].posa));
										printf("%c",0);
										bala[cont].posa--;
									}
								}
								
								direcao = 0;
								if(cdtiro != 0){ //Cowdown do tiro
									cdtiro--;
								}
								velocidadeinimigo--;
								cdinimigo--;
								Sleep(30);
								gotoxy(0, i+2);
					            printf("Pontua%c%co= %d      Level = error     Aumento = %c", 135, 198,0,236);
							}
							if(tecla != 27) tecla = getch();
							if(tecla == DIREITA) direcao=2;
							if(tecla == ESQUERDA) direcao=1;
							if(tecla == ACIMA && cdtiro==0){
								novo_tiro(bala,10,pos,0);
								cdtiro = 10;	
							}
						}	
						break;
					case 2:
						printf("Que vergonha desistir sem tentar. Voce me decepcionou aventureiro.");
						sleep(5);
						break;
					default:
						printf("Opcao invalida.");
						break;
				}
			}while(opc2 != 1 && opc2 !=2);
			break;
		case '2':
				
			break;
		default:
			printf("Opcao invalida.");
			jogo_hard();
			break;
	}
}

void boss(){
	int direcao,tecla=32,pos=(jb/2),cont,cont2,cdtiro=0,posicao,life=70,lifeatual=70;
	tiro bala[10];
	naveini inimigo[20];
	inicia_struct(bala,10,inimigo,20);
	
	srand(time(NULL));
	gotoxy((jb/2)-6,1);
	printf("THE ANCIENT TURTLE");
	turtle(((jb/2)-13),17);
	
	while(tecla!=27){      // desenvolvimento do jogo
	   	while(tecla!=27 &&!(tecla=kbhit())){
	   		if(direcao == 1  && pos>2){ //Move a nave para a esquerda e impossibilita de sair do mapa
	   			construction(pos,1,1);				
				pos--;	
			}
	   		if(direcao == 2 && pos<(jb-2)){ //Move a nave para a direita e impossibilita de sair do mapa
	   			construction(pos,1,1);				
				pos++;
			}
	   		gotoxy(pos,ib-2);
	   		construction(pos,0,1); //Finaliza o movimento da nave
			
			for(cont=1;cont<=life;cont++){
				if(cont > lifeatual){
					gotoxy(((jb/2)-35)+cont,2);
					printf("%c",177);
				}else{
					gotoxy(((jb/2)-35)+cont,2);
					printf("%c",219);
				}
			}
			
			for(cont=0;cont<10;cont++){
				if( (bala[cont].posa == 17 && (((bala[cont].posc >= (jb/2)+2) && (bala[cont].posc <= (jb/2)+15)) || ((bala[cont].posc >= (jb/2)+23) && (bala[cont].posc <= (jb/2)+26)))) || ((bala[cont].posc == (jb/2)-29 && bala[cont].posa == 19) || (bala[cont].posc == (jb/2)-30 && bala[cont].posa == 21) || (bala[cont].posc == (jb/2)-31 && bala[cont].posa == 20)) ){ //Deixa o casco e a barba invencíveis
					gotoxy(bala[cont].posc,(1+bala[cont].posa));
					printf("%c",0);
					bala[cont].posa = -1;
				}else if((bala[cont].posc <= (jb/2)-15 && bala[cont].posc >= (jb/2)-28) || (bala[cont].posc <= (jb/2)-32 && bala[cont].posc >= (jb/2)-35)){ //Danos na cabeça
					if((bala[cont].posc <= (jb/2)-15 && bala[cont].posc >= (jb/2)-28)){ //Cabeça antes da barba
						if(bala[cont].posc == (jb/2)-15 && bala[cont].posa == 17){ //Pescoço
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 10;
						}else if(bala[cont].posa == 18 && (bala[cont].posc <= (jb/2)-16 && bala[cont].posc >= (jb/2)-28 )){//Resto
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 10;
						}
					}else{ //cabeça depois da barba
						if(bala[cont].posa == 17 && bala[cont].posc == (jb/2)-32){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 10;
						}else if(bala[cont].posa == 16 && bala[cont].posc == (jb/2)-33){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 10;
						}else if(bala[cont].posa == 15 && bala[cont].posc == (jb/2)-34){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 10;
						}else if(bala[cont].posa == 14 && bala[cont].posc == (jb/2)-35){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 10;
						}
					}
				}else if(bala[cont].posc <= (jb/2)+1 && bala[cont].posc >= (jb/2)-14){ //Danos na pata da frente
					if(bala[cont].posc == (jb/2)-14 && bala[cont].posa == 22){ 
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;	
					}else if(bala[cont].posc == (jb/2)-13 && bala[cont].posa == 23){ 
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;	
					}else if(((bala[cont].posc == (jb/2)-12) || (bala[cont].posc == (jb/2)+1)) && bala[cont].posa == 24){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}else if(((bala[cont].posc == (jb/2)-11) || (bala[cont].posc == jb/2)) && bala[cont].posa == 25){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}else if(((bala[cont].posc == (jb/2)-10) || (bala[cont].posc == (jb/2)-1)) && bala[cont].posa == 26){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}else if(((bala[cont].posc == (jb/2)-9) || (bala[cont].posc == (jb/2)-2)) && bala[cont].posa == 27){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}else if(((bala[cont].posc == (jb/2)-8) || (bala[cont].posc == (jb/2)-3) || (bala[cont].posc == (jb/2)-7)) && bala[cont].posa == 28){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}else if(((bala[cont].posc == (jb/2)-6) || (bala[cont].posc == (jb/2)-5) || (bala[cont].posc == (jb/2)-4)) && bala[cont].posa == 29){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}
				}else if(bala[cont].posc >= (jb/2)+16 && bala[cont].posc <= (jb/2)+23){ //Danos na pata de trás
					if(((bala[cont].posc == (jb/2)+16) || (bala[cont].posc == (jb/2)+22)) && bala[cont].posa == 19){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}else if(((bala[cont].posc == (jb/2)+17) || (bala[cont].posc == (jb/2)+21)) && bala[cont].posa == 20){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}else if((bala[cont].posc >= (jb/2)+18 && bala[cont].posc <= (jb/2)+20) && bala[cont].posa == 21){
						gotoxy(bala[cont].posc,(1+bala[cont].posa));
						printf("%c",0);
						bala[cont].posa = -1;
						lifeatual = lifeatual - 5;
					}
				}else if(bala[cont].posc >= (jb/2)+27 && bala[cont].posc <= (jb/2)+35){ //Danos na cauda
					if(bala[cont].posa == 9 && bala[cont].posc == (jb/2)+35){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}else if(bala[cont].posa == 10 && bala[cont].posc == (jb/2)+34){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}else if(bala[cont].posa == 11 && bala[cont].posc == (jb/2)+33){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}else if(bala[cont].posa == 12 && bala[cont].posc == (jb/2)+32){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}else if(bala[cont].posa == 13 && bala[cont].posc == (jb/2)+31){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}else if(bala[cont].posa == 14 && bala[cont].posc == (jb/2)+30){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}else if(bala[cont].posa == 15 && bala[cont].posc == (jb/2)+29){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}else if(bala[cont].posa == 16 && bala[cont].posc == (jb/2)+28){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}else if(bala[cont].posa == 17 && bala[cont].posc == (jb/2)+27){
							gotoxy(bala[cont].posc,(1+bala[cont].posa));
							printf("%c",0);
							bala[cont].posa = -1;
							lifeatual = lifeatual - 3;
					}
				}
			}
			
			for(cont=0;cont<10;cont++){ //Parte dos tiros
				if(bala[cont].posa != 0 && bala[cont].posa !=-1){ //Para mostrar apenas os tiros 
					gotoxy(bala[cont].posc,bala[cont].posa+1);
					printf("%c",0);
					gotoxy(bala[cont].posc,bala[cont].posa); //Movimento da bala
					printf("%c",167);
					bala[cont].posa--;
				}else if(!bala[cont].posa){ //Some com a bala caso ela chegue ao fim do mapa
					gotoxy(bala[cont].posc,(1+bala[cont].posa));
					printf("%c",0);
					bala[cont].posa--;
				}
			}
			
			direcao = 0;
			if(cdtiro != 0){ //Cowdown do tiro
				cdtiro--;
			}
			if(lifeatual <= 0){
				tecla = 27;
			}
			Sleep(30);
			gotoxy(0, ib+2);
            printf("Pontua%c%co= 0      Level = Boss", 135, 198);
		}
		if(tecla != 27) tecla = getch();
		if(tecla == DIREITA) direcao=2;
		if(tecla == ESQUERDA) direcao=1;
		if(tecla == ACIMA && cdtiro==0){
			novo_tiro(bala,10,pos,1);
			cdtiro = 10;	
		}
	}
}

void instrucoes(){
	system("cls");
	gotoxy(3,3);
	printf("CONTROLES");
	gotoxy(3,5);
	printf("Direita - Seta para DIREITA");
	gotoxy(3,6);
	printf("Esquerda - Seta para ESQUERDA");
	gotoxy(3,7);
	printf("Atirar - Seta para CIMA");
	gotoxy(2,15);
	printf("%c   %c   %c   %c   %c   %c   %c   %c   %c\n",254,254,254,254,254,254,254,254,254);
	printf(" %c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c%c%c \n",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	printf(" %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c\n\n",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	system("pause");
}

void start(){  
	char opc;
	int resultado=0;

	system("cls");
	gotoxy(20,5);
	printf("NAVINHA ");
	gotoxy(30,6);
	printf("%c%c",254,254);
	gotoxy(32,7);
	printf("%c",254);
	gotoxy(29,7);
	printf("%c",254);
	gotoxy(29,8);
	printf("%c",254);
	gotoxy(29,9);
	printf("%c",254);
	gotoxy(30,10);
	printf("%c",254);
	gotoxy(31,10);
	printf("%c",254);
	gotoxy(32,9);
	printf("%c",254);
	gotoxy(35,8);
	printf("%c",254);
	gotoxy(36,8);
	printf("%c",254);
	gotoxy(37,8);
	printf("%c",254);
	gotoxy(40,6);
	printf("%c",254);
	gotoxy(40,7);
	printf("%c",254);
	gotoxy(40,8);
	printf("%c",254);
	gotoxy(40,9);
	printf("%c",254);
	gotoxy(40,10);
	printf("%c",254);
	gotoxy(43,7);
	printf("%c",254);
	gotoxy(44,6);
	printf("%c",254);
	gotoxy(45,6);
	printf("%c",254);
	gotoxy(46,7);
	printf("%c",254);
	gotoxy(45,8);
	printf("%c",254);
	gotoxy(46,9);
	printf("%c",254);
	gotoxy(45,10);
	printf("%c",254);
	gotoxy(44,10);
	printf("%c",254);
	gotoxy(43,9);
	printf("%c",254);
	gotoxy(49,7);
	printf("%c",254);
	gotoxy(49,6);
	printf("%c",254);
	gotoxy(50,6);
	printf("%c",254);
	gotoxy(51,6);
	printf("%c",254);
	gotoxy(52,6);
	printf("%c",254);
	gotoxy(52,7);
	printf("%c",254);
	gotoxy(51,8);
	printf("%c",254);
	gotoxy(50,9);
	printf("%c",254);
	gotoxy(49,10);
	printf("%c",254);
	gotoxy(25,20);
	printf("Criado por Iago e Wesley",254);
	
	gotoxy(15,15);
	printf("Start( 1 )\t Instrucoes( 2 )\t Sair( 3 )");
	gotoxy(13,15);
	opc = getch();
	switch(opc){
		case '1':
			system("cls");
			desenha_campo(0);
			resultado = jogo();
			if(!resultado){
				system("cls");
				desenha_campo(1);
				boss();
				jogo_hard();
				sleep(2);
				system("cls");
				gameover(50,10);
				sleep(2);
				system("pause");
				start();
			}else{
				sleep(2);
				system("cls");
				gameover(50,10);
				sleep(2);
				system("pause");
				start();
			}
			break;
		case '2':
			system("cls");
			instrucoes();
			start();
			break;
		case '3':
			system("cls");
			exit(1);
			break;
		default:
			printf("Opção inválida");
			start();
			break;
	}
}

void main(){
	start();
	gotoxy(0,i+1);
}

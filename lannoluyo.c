#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<unistd.h>

char dec;
char dec,pselect,cselect,enter;
char computer[20],player[20] ;
int x,c;
int pgk,pmf,pfw,cgk,cmf,cfw ;
char pgkname[20] , pmfname[20] , pfwname[20] , cgkname[20] , cmfname[20] , cfwname[20] ;


void saha(int k) {
	
	switch(k) {
		case 1:case 0: case -1: 
			
			printf("\n ------------------------------------------------");
			printf("\n|                     |                           |") ;
			printf("\n|                  ___|___                        |") ;
			printf("\n|_                |   |   |                      _|") ;
			printf("\n| |***            |   |   |                     | |") ;
			printf("\n| |***            |   |   |                     | |") ;
			printf("\n|_|***            |___|___|                     |_|") ;
			printf("\n|                     |                           |") ;
			printf("\n|                     |                           |") ;
			printf("\n ------------------------------------------------") ;
			break;
		case 2:
			printf("\n ------------------------------------------------");
			printf("\n|                     |                           |") ;
			printf("\n|                  ___|___                        |") ;
			printf("\n|_                |   |   |                      _|") ;
			printf("\n| |       ***     |   |   |                     | |") ;
			printf("\n| |       ***     |   |   |                     | |") ;
			printf("\n|_|       ***     |___|___|                     |_|") ;
			printf("\n|                     |                           |") ;
			printf("\n|                     |                           |") ;
			printf("\n ------------------------------------------------") ;
			break;
		case 3:
			printf("\n ------------------------------------------------");
			printf("\n|                     |                           |") ;
			printf("\n|                  ___|___                        |") ;
			printf("\n|_                |  ***  |                      _|") ;
			printf("\n| |               |  ***  |                     | |") ;
			printf("\n| |               |  ***  |                     | |") ;
			printf("\n|_|               |___|___|                     |_|") ;
			printf("\n|                     |                           |") ;
			printf("\n|                     |                           |") ;
			printf("\n ------------------------------------------------") ;
			
			break;
			
		case 4:
			printf("\n ------------------------------------------------");
			printf("\n|                     |                           |") ;
			printf("\n|                  ___|___                        |") ;
			printf("\n|_                |   |   |                      _|") ;
			printf("\n| |               |   |   |        ***          | |") ;
			printf("\n| |               |   |   |        ***          | |") ;
			printf("\n|_|               |___|___|        ***          |_|") ;
			printf("\n|                     |                           |") ;
			printf("\n|                     |                           |") ;
			printf("\n ------------------------------------------------") ;
			break;
			
		case 5: case 6: case 7:
			printf("\n ------------------------------------------------");
			printf("\n|                     |                           |") ;
			printf("\n|                  ___|___                        |") ;
			printf("\n|_                |   |   |                      _|") ;
			printf("\n| |               |   |   |                  ***| |") ;
			printf("\n| |               |   |   |                  ***| |") ;
			printf("\n|_|               |___|___|                  ***|_|") ;
			printf("\n|                     |                           |") ;
			printf("\n|                     |                           |") ;
			printf("\n ------------------------------------------------") ;
	
			break;	
	}
}

char *name[]= {" ","Misugi","Tsubasa","Hyuga","Misaki","Wakabayashi","Matsuyama","Souda","Nitta","Ishizaki","Schneider","Schuster","Kaltz","Muller","Hernandez","NO5","NO9","Dias","Pascal","Galvan","NO1"} ;
int p[] ={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20} ;

char *superpasname[] = {"Normal Pas","Hile Pass","Drive Pass","Normal Pas","Golden Combi","Normal Pas","Normal Pas","Razor Pass","Normal Pas","Normal Pas","Normal Pas","Schu Pass","Normal Pas","Normal Pas","Normal Pas","Normal Pas","Normal Pas","Tensai Pass","Pass Cal","Normal Pas","Normal Pas"} ;
int superpas[] = {50,100,95,50,100,50,50,85,50,50,50,85,50,50,50,50,50,95,85,50,50} ;

int paskesme[] = {1,43,39,35,35,25,30,25,15,15,35,20,30,20,20,10,10,40,20,20,10} ;

char *supersutname[] = {"Normal sut","Sky Rocket Volley","NeoDrive Shot","NeoTiger Shot","Normal sut","Normal sut","Eagle Shot","Kamisori Shot","Hayabusa Shot","Normal sut","Fire Shot","Normal sut","Normal sut","Normal sut","Normal sut","Normal sut","Normal sut","Drive Shot","Normal sut","Normal sut","Normal sut" };
int supersut[] = {40,95,93,100,40,40,85,70,75,40,95,40,40,40,40,40,40,95,40,40,40} ;

char *supersavename[] = {"Normal save","Normal save","Normal save","Normal save","Normal save","SGGK","Normal save","Normal save","Normal save","Normal save","Normal save","Normal save","Normal save","Dutter Wall","Golden Right Hand","Normal save","Normal save","Normal save","Normal save","Normal save","Normal save"} ;
int supersave[] = {50,50,50,50,50,170,50,50,50,50,50,50,50,150,140,50,50,50,50,50,50} ;

char *supercalimname[] = {"Normal calim","Elegant Dribble","Heel Lift","Normal calim","Misaki in his element","Normal calim","Eagle Feint","Normal calim","Normal calim","Normal calim","Kaiser Feint","Left Foot Feint","Hedgehog Dribble","Normal calim","Normal calim","Normal calim","Normal calim","Genius Feint","Normal calim","Normal calim","Normal calim"} ;
int supercalim[] = {30,100,85,30,85,30,70,30,30,30,80,65,75,30,30,30,30,95,30,30,30} ;

char *supertacklename[] = {"Normal tackle","Yan bakan tackle","Normal tackle","Tiger Tackle","Normal tackle","Normal tackle","Eagle Tackle","Kamisori Tackle","Normal tackle","Normal tackle","Emperor's Tackle","Normal tackle","Hedgehog Tackle","Normal tackle","Normal tackle","Normal tackle","Normal tackle","Normal tackle","Normal tackle","Ayiogluayi Tackle","Normal tackle"} ;
int supertackle[] = {30,70,30,90,30,30,80,75,30,30,85,30,80,30,30,30,30,30,30,70,30} ;

void mainmenu() {
	
	system("cls") ;
	printf("Ana Menu\n\n");
	printf("\n1.Oyuna basla\n2.Takim listesi\n3.Nasi oynanir\n\n") ;
	scanf(" %c",&dec) ;
	
	
			
	}

void oyunabasla() {
	system("cls") ;
	printf("oyuna basla") ;
}

void teamlist() {
	char dec;
	system("cls") ;
	printf("Takim Listesi") ;
	printf("\n\n1.Japonya\n2.Almanya\n3.Italya\n4.Arjantin\n\n") ;
	scanf(" %c",&dec) ;
	
	
	
}

void nasiloynanir() {
	system("cls") ;
	printf("Nasil oynanir") ;
	printf("\n\n1. Mac icinde yapmak istedigimiz hareketin solundaki numarayi yazip entera basiyoruz. ") ;
	printf("\n\n2. Menuler arasinda gecis yapmak icin 'b' ye veya '0' a basiniz") ;
	printf("\n Ornek: burdan ana menuya gitmek icin b ye basiniz.") ;
}


int main(void) {
	srand(time(0)) ;


int randnum ;



		mainmenu:
		system("cls") ;
		
		
		mainmenu() ;
		
		switch(dec) {
			
			case '1':
				system("cls") ;
				printf("Oyuncu takimi\n\n1. Japonya\n2. Almanya\n3. Italya\n4. Arjantin\n5. Rastgele\n") ;
				
				scanf(" %c",&pselect) ;
				switch(pselect) {
					case '1':
						strcpy(player,"Japonya") ;
						pgk = 5;
						strcpy(pgkname,name[5]) ;
						
						pmf =  2;
						strcpy(pmfname , name[2]) ;
						
						pfw = 3 ;
						strcpy(pfwname , name[3]) ; 
						
						break;
						
					case '2':
						strcpy(player,"Almanya") ;
						pgk = 13;
						strcpy(pgkname,name[13]) ;
						
						pmf =  12;
						strcpy(pmfname , name[12]) ;
						
						pfw = 10 ;
						strcpy(pfwname , name[10]) ; 
						
						break;
						
					case '3':
						strcpy(player,"Italya") ;
						pgk = 14;
						strcpy(pgkname,name[14]) ;
						
						pmf =  15;
						strcpy(pmfname , name[15]) ;
						
						pfw = 16 ;
						strcpy(pfwname , name[16]) ; 
						
						break;
						
					case '4':
						strcpy(player,"Arjantin") ;
						pgk = 20;
						strcpy(pgkname,name[20]) ;
						
						pmf =  18;
						strcpy(pmfname , name[18]) ;
						
						pfw = 17 ;
						strcpy(pfwname , name[17]) ; 
						
						break;
						
					case '5':
						randnum = rand() % 4 ;
						
						switch(randnum) {
							case 0:
								strcpy(player,"Japonya") ;
								pgk = 5;
								strcpy(pgkname,name[5]) ;
								
								pmf =  2;
								strcpy(pmfname , name[2]) ;
								
								pfw = 3 ;
								strcpy(pfwname , name[3]) ; 
								
								break;
								
							case 1:
								
								strcpy(player,"Almanya") ;
								pgk = 13;
								strcpy(pgkname,name[13]) ;
								
								pmf =  12;
								strcpy(pmfname , name[12]) ;
								
								pfw = 10 ;
								strcpy(pfwname , name[10]) ; 
						
								break;
							
							case 2:
								strcpy(player,"Italya") ;
								pgk = 14;
								strcpy(pgkname,name[14]) ;
								
								pmf =  15;
								strcpy(pmfname , name[15]) ;
								
								pfw = 16 ;
								strcpy(pfwname , name[16]) ; 
								
								break;
								
							case 3:
										
								strcpy(player,"Arjantin") ;
								pgk = 20;
								strcpy(pgkname,name[20]) ;
								
								pmf =  18;
								strcpy(pmfname , name[18]) ;
								
								pfw = 17 ;
								strcpy(pfwname , name[17]) ; 
								
								break;		
						}
						
						break;
						
					
						
						
				}
				printf("Bilgisayar Takimi\n\n1. Japonya\n2. Almanya\n3. Italya\n4. Arjantin\n5. Rastgele\n") ;
				scanf(" %c",&cselect) ;
				switch(cselect) {    
					case'1':
						strcpy(computer,"Japonya") ;
						cgk = 5;
						strcpy(cgkname , name[5]) ;
						
						cmf =  2;
						strcpy(cmfname , name[2]) ;
						
						cfw = 3 ;
						strcpy(cfwname , name[3]) ;
						
						break;
						
					case '2':
						strcpy(computer,"Almanya") ;
						cgk = 13;
						strcpy(cgkname,name[13]) ;
						
						cmf =  12;
						strcpy(cmfname , name[12]) ;
						
						cfw = 10 ;
						strcpy(cfwname , name[10]) ; 
						
						break;
						
					case '3':
						strcpy(computer,"Italya") ;
						cgk = 14;
						strcpy(cgkname,name[14]) ;
						
						cmf =  15;
						strcpy(cmfname , name[15]) ;
						
						cfw = 16 ;
						strcpy(cfwname , name[16]) ; 
						
						break;
						
					case '4':
						strcpy(computer,"Arjantin") ;
						cgk = 20;
						strcpy(cgkname,name[20]) ;
						
						cmf =  18;
						strcpy(cmfname , name[18]) ;
						
						cfw = 17 ;
						strcpy(pfwname , name[17]) ; 
						
						break;
						
					case '5':
						 randnum = rand() % 4 ;
						
						switch(randnum) {
							case 0:
								strcpy(computer,"Japonya") ;
								cgk = 5;
								strcpy(cgkname,name[5]) ;
								
								cmf =  2;
								strcpy(cmfname , name[2]) ;
								
								cfw = 3 ;
								strcpy(cfwname , name[3]) ; 
								
								break;
								
							case 1:
								
								strcpy(computer,"Almanya") ;
								cgk = 13;
								strcpy(cgkname,name[13]) ;
								
								cmf =  12;
								strcpy(cmfname , name[12]) ;
								
								cfw = 10 ;
								strcpy(cfwname , name[10]) ; 
						
								break;
							
							case 2:
								strcpy(computer,"Italya") ;
								cgk = 14;
								strcpy(cgkname,name[14]) ;
								
								cmf =  15;
								strcpy(cmfname , name[15]) ;
								
								cfw = 16 ;
								strcpy(cfwname , name[16]) ; 
								
								break;
								
							case 3:
										
								strcpy(computer,"Arjantin") ;
								cgk = 20;
								strcpy(cgkname,name[20]) ;
								
								cmf =  18;
								strcpy(cmfname , name[18]) ;
								
								cfw = 17 ;
								
								
								break;		
						}
						
						break;
				}
				
				
				system("cls") ;
				printf("%s (oyuncu)",player) ;
				printf("\n\nGK. %s\nMF. %s\nFW. %s",pgkname,pmfname,name[pfw]) ;
				printf("\n\n\n\n--------------------------------------------------\n\n\n\n") ;
				
				printf("%s (bilgisayar)",computer) ;
				printf("\n\nGK. %s\nMF. %s\nFW. %s",cgkname,cmfname,name[cfw]) ;
				
				printf("\n\nmaca baslamak icin entera basiniz") ;
				scanf("%c",&enter) ;
				scanf("%c",&enter) ;
				
				system("cls") ;
				int pscore = 0 ;
				int cscore = 0 ;
				int poz = 3 ;
				int top = pmf ;
				int topt = 1 ; // 1: player-- 2: computer  
				
				int k ;
				int act;
				int antiact ;
				char antiactname[30] , actname[30] ;
				int y;
				int move;
				int num ;
				
				while(pscore<6 && cscore<6) {
					system("cls") ;
					printf("%s : %d ------  %s : %d\n\n",player,pscore,computer,cscore) ;
					saha(poz) ;
					
					if (topt == 1) { 		// top oyuncudaysa
					
					
						printf("\nTopun sahibi %s",name[top]) ;
						printf("\n1.pas\n2.sut\n3.calim ") ;
						scanf("%d",&x) ;
						
						switch(x) {
							case 1: 		// pas
								printf("\n1.Normal Pas\n2.%s\n",superpasname[top]) ;
								scanf("%d",&y) ;
								switch(y) {
									case 1:
										k = superpas[0] ;
										act = rand() % k ;
										
										break;
										
									case 2: 
										k = superpas[top] ;
										act = rand() % k ;
										
										break ;
												
									}
			
								
												//  computer pas kesme yapicak
								switch(poz) {
	
									case 1:
										antiact = 0 ;
										break;
									case 2:
										k = paskesme[cfw] ;
										antiact = rand() % k ;
										break ;
										
										
									case 3: case 4:
										k = paskesme[cmf] ;
										antiact = rand() % k ;
										break ;
											
									case 5:
										antiact = 0 ;
										break ;
									default:
										antiact = 0 ;
										break;
								} 
								
								
									
								if(act > antiact) {
									
									 
										
									poz += 1 ;
									if (top == pfw)
										top = pmf ;
									else if(top == pmf)
										top = pfw ;
									else
										top = pmf ;
									printf("\npas basarili! %s topun sahibi",name[top]) ;
									sleep(2) ;
								}
								else{
									top = cmf ;
									topt = 2 ; 
									printf("\npas kesildi! %s topu kapti",name[top]) ;
									sleep(2) ;
								}
							
								break ;	
						
							case 2: // sut
								printf("\n1.Normal sut\n2.%s\n",supersutname[top]) ;
								scanf("%d",&y) ;
								
								switch(y) {
									case 1:
										act = rand() % supersut[0]  ;
										break;
										
									case 2:
										act = rand() % supersut[top] ;
										break ;
								}
						
									
								
								switch(poz) {
									case -1: case 0: case 1:
										act-=30 ;
										break;
										
									case 2: 
										act -=25 ;
										break;
										
									case 3:
										act -=15 ;
										break;
										
									case 4:
										act -= 5; 
										break;	
								}
								
								antiact = rand() % supersave[cgk] + 10 ;
								
								printf("\n%s nin %s !!!",name[cgk] , supersavename[cgk]) ;
								printf("\n...") ;
								
								sleep(2) ;
								
								if (act > antiact) { 
									printf("\n GOOOOOOOOOOOOOLLLLLLLLLL!!!!!!!!!!!") ;
									printf("\n%s vurdu gol oldu sayin seyirciler!!",name[top]) ; 
									pscore++ ;
									top = cmf ;
									poz = 3;
									topt = 2;
									printf("\n%s:%d -- %s:%d",player,pscore,computer,cscore) ;
									printf("\n\nBaslamak icin entera basiniz.") ;
									
									scanf("%c",&enter) ;
									scanf("%c",&enter) ;
								}
								else if(act <= antiact) {
									printf("\nKaleci kurtardi! %s super kurtaris",name[cgk]) ;
									top = cgk ;
									topt = 2 ;
									poz = 5;
									sleep(2) ;
								}
								break ;
						
							case 3:  // calim
								printf("\n1.normal calim\n2.%s\n",supercalimname[top]) ;
								scanf("%d",&y) ; 
								
								switch(y) {
									case 1:
										act = rand() % supercalim[0] ;
										break ;
										
									case 2:
										act = rand() % supercalim[top] ;
										break ;
								}
						
								
								switch(poz) {
									case 1: case 2:
										antiact = supertackle[cfw] ;
										strcpy(antiactname , supertacklename[cfw]) ;
										break ;
										
									case 3: case 4:
										antiact = supertackle[cmf] ;
										strcpy(antiactname , supertacklename[cmf]) ;
										break ;
									
									case 5:
										antiact = supersave[cgk] ;
										strcpy(antiactname , supersavename[cgk]) ;
										break ;	
								}
								
								printf("\n%s calim deniyor karsisinda %s",name[top],antiactname) ;
								printf("\n....") ;
								sleep(2) ;
								
								if(act > antiact) {
									if(poz == 5) {
										printf("\n%s kaleciyi calimladi kale bos!!",name[top]) ;
										sleep(1) ;
										printf("\n vurdu goooooolllll!!!!!!!") ;
										pscore++ ;
										topt = 2;
										top = cmf ;
										printf("baslamak icin entera basiniz") ;
										scanf("%c",&enter) ;
										scanf("%c",&enter) ;
									}
									poz++ ;
									
									printf("\n%s calimladi!!",name[top]) ;
									sleep(2) ;
								}
								
								else {
									printf("\n%s topu kaybetti!!!",name[top]) ;
									sleep(2) ;
									topt = 2 ;
									switch(poz) {
										case 1: case 2:
											top = cfw ;
											break;
											
										case 3: case 4:
											top = cmf;
											break;
											
										case 5:
											top = cgk;
											break;
									}
									
								}
						}
					
					
					
					
					}
					
					
					else if (topt == 2) { 			//move 1: sut  2: pas  3: calim		// harekete karar ver
						printf("\nTopun sahibi %s",name[top]) ;
						num = rand() % 10 ;
						switch(poz) {
							case 1:
								
								if(num < 7)
									move = 1 ;
								else
									move = 3 ;
								break ;
								
							case 2:
								
								if (num < 4)
									move = 1;
								else if  (num<7) 
									move = 2;
								else if(num<10) 
									move = 3 ;
								break ;
								
							case 3:
								if (num<2) 
									move = 1;
								else if(num<6)
									move = 2 ;
								else if (num <10)
									move = 3;
								break ;
								
							case 4:
								if(num < 1)
									move = 1;
								else if(num < 6)
									move = 2;
								else if(num <10) 
									move = 3;
								break ;
							case 5:
								move = 2;
								break ;
									
						}
						sleep(2) ;
						
						switch(move) {
							case 1: 
								act = rand() % supersut[top] ;
								switch(poz) {
									case 7: case 6: case 5:
										act-=30 ;
										break;
										
									case 4: 
										act -=25 ;
										break;
										
									case 3:
										act -=15 ;
										break;
										
									case 2:
										act -= 5; 
										break;
									
								}
								antiact = rand() % supersave[pgk] +10 ;
								
								printf("\n%s sut cekti %s!!",name[top],supersutname[top]) ;
								sleep(2) ;
								printf("\n%s in %s !!!",name[pgk],supersavename[pgk]) ;
								printf("\n....") ;
								sleep(2) ;
								
								if (act > antiact) {
									printf("\nGOLGOGLOGGLGOOOOLL!!!!") ;
									printf("\n%s vurdu gol oldu sayin seyircilerr!!",name[top]) ;
									cscore++ ;
									poz = 3 ;
									topt = 1;
									top = pmf ;
									printf("\n%s:%d --- %s:%d",player,pscore,computer,cscore) ;
									printf("\n\nBaslamak icin entera basiniz.") ;
									
									scanf("%c",&enter) ;
									scanf("%c",&enter) ;
									
								}
								else if(act <= antiact) {
									printf("\nKaleci kurtardi! %s super kurtaris",name[pgk]) ;
									topt = 1 ;
									top = pgk ;
									poz = 1;
									sleep(2) ;
								}
								
								break ;  // sut kararýnýn sonu
							
							case 2: // pas kararý
									
							
								num = rand() % 10 ;
								if(num<7) 
								 	act = rand() % superpas[top] ;
								else
									act = rand() % superpas[0] ;
								 
						
							
								switch(poz) {	// oyuncu pas kesme
	
									case 1:case 2:
										k = paskesme[pmf] ;
										antiact = rand() % k ;
										
										break ;
										
									case 3: case 4:
										k = paskesme[pfw] ;
										antiact = rand() % k ;
										break ;
											
									case 5:
										antiact = 0 ;
										break ;
									
								}
								
								printf("\n%s pas deniyor !!",name[top]) ;
								sleep(1.5) ;
								if (act > antiact) {
									poz -= 1 ;
									if (top == cfw)
										top = cmf ;
									else if(top == cmf)
										top = cfw ;
									else if(top == cgk)
										top = cmf;
									printf("\npas basarili!!") ;
									sleep(2) ;
								}
								
								else if(act <= antiact) {
									topt = 1;
									top = pmf ;
									printf("\npas kesildi! top %s dogru gidiyor",name[pmf]) ;
									sleep(2) ;
								}
								break ;  // pas sonu
								
							
							
							case 3: // calim
								 num = rand() % 10 ;
								 if (num < 7) 
								 	act = rand() % supercalim[top] ;
								 else 
								 	act = rand() % supercalim[0] ;
								
						
								
								switch(poz) {
									case 4: case 5:
										antiact = supertackle[pmf] ;
										strcpy(antiactname , supertacklename[pmf]) ;
										break ;
										
									case 3: case 2:
										antiact = supertackle[pfw] ;
										strcpy(antiactname , supertacklename[pfw]) ;
										break ;
									
									case 1:
										antiact = supersave[pgk] ;
										strcpy(antiactname , supersavename[pgk]) ;
										break ;	
								}
								
								printf("\n%s calim deniyor karsisinda %s",name[top],antiactname) ;
								printf("\n....") ;
								sleep(2) ;
								
								if(act > antiact) {
									if(poz == 1) {
										printf("\n%s kaleciyi calimladi!! kale bos",name[top]) ;
										sleep(1) ;
										printf("\nvuruyor ve goll!!!") ;
										printf("\n%s:%d -- %s:%d",player,pscore,computer,cscore) ;
										
										printf("\n baslamak icin entera basiniz");
										scanf("%c",&enter) ;
										scanf("%c",&enter) ;
									}
									poz-- ;
									
									printf("\n%s calimladi!!",name[top]) ;
									sleep(2) ;
								}
								
								else {
									printf("\n%s topu kaybetti!!!",name[top]) ;
									sleep(2) ;
									topt = 1 ;
									switch(poz) {
										case 4: case 5:
											top = pfw ;
											printf("\ntop %s sekiyor",name[pfw]) ;
											sleep(2) ;
											break;
											
										case 3: case 2:
											top = pmf;
											printf("\ntop %s sekiyor",name[pmf]) ;
											sleep(2) ;
											break;
											
										case 1:
											top = pgk;
											break;
									}
									
								}
						 		break ;
	 							
					}
					
			}
			}
				
				
				
				
				
				
				
				
				break ;   // oyuna baslama yerinin sonu
				
				
			case '2':
				teamlist:
				system("cls") ;
				teamlist() ;
				switch(dec) {
					case '1':
						system("cls") ;
						printf("\n\nJaponya Oyunculari\n") ; 
						for(c=1,x=1; x<10 ; c++,x++) {
							printf("\n%d.%s",c,name[x]) ;
						}
						printf("\n") ;
						
						scanf(" %c",&dec) ;
						if(dec == 'b'|| dec == '0') 
							goto teamlist ;
						
						break;
					
					case '2':
						system("cls") ;
						printf("\n\nAlmanya Oyunculari\n") ;
						for(c=1,x=10 ;x<14 ;c++,x++) {
							printf("\n%d.%s",c,name[x]) ;
						}
						 printf("\n") ;
						 scanf(" %c",&dec) ;
						 if(dec == 'b'|| dec == '0') 
						 	goto teamlist ;
						
						break;
						
					case '3':
						system("cls") ;
						printf("\n\nItalya Oyunculari\n") ;
						for(c=1,x=14; x<17 ;c++, x++) {
							printf("\n%d.%s",c,name[x]) ;
						}
						printf("\n") ;
						
						scanf(" %c",&dec) ;
						if(dec == 'b'|| dec == '0') 
							goto teamlist ;
						
						break;
						
					case '4':
						system("cls") ;
						printf("\n\nArjantin Oyunculari\n") ;
						for(c=1,x=17; x<21 ; c++,x++) {
							printf("\n%d.%s",c,name[x]) ;
						}
						printf("\n") ;
						
						scanf(" %c",&dec) ;
						if(dec == 'b' || dec == '0') 
							goto teamlist ;
						
						break;
						
					default:
						 goto mainmenu ;
						
				}
				break;
				
			case '3':
				nasiloynanir() ;
				printf("\n") ;
				scanf(" %c",&dec) ;
				if(dec == 'b' || dec == '0') 
					goto mainmenu;
				break;
				
			default:
				goto mainmenu ;
				break;
		}
		
		
		
		
		
		
	
		
		
		
		
} 

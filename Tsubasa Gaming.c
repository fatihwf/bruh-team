
							

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<unistd.h>

int pgk , pmf, pfw , cgk , cmf , cfw ,randnum , playerteam, computerteam;

char  pselect  , cselect , enter,actname[30] , antiactname[30] , enter , player[30] , computer[30];

char *name[]= {" ","Misugi","Tsubasa","Hyuga","Misaki","Wakabayashi","Matsuyama","Souda","Nitta","Ishizaki","Schneider","Schuster","Kaltz","Muller","Hernandez","NO5","NO9","Dias","Pascal","Galvan","NO1"} ;
	
	
	char *superpasname[] = {"Normal Pas","Hile Pass","Drive Pass","Normal Pas","Golden Combi","Normal Pas","Normal Pas","Razor Pass","Normal Pas","Normal Pas","Normal Pas","Schu Pass","Normal Pas","Normal Pas","Normal Pas","Normal Pas","Normal Pas","Tensai Pass","Pass Cal","Normal Pas","Normal Pas"} ;
	int superpas[] = {50,100,95,50,100,50,50,85,50,50,50,85,50,50,50,50,50,95,85,50,50} ;
	
	int paskesme[] = {1,35,32,32,32,25,30,25,15,15,35,20,30,20,20,10,10,32,20,20,10} ;
	
	
	
	char *supersutname[] = {"Normal sut","Sky Rocket Volley","NeoDrive Shot","NeoTiger Shot","Normal sut","Normal sut","Eagle Shot","Kamisori Shot","Hayabusa Shot","Normal sut","Fire Shot","Normal sut","Normal sut","Normal sut","Normal sut","Normal sut","Normal sut","Drive Shot","Normal sut","Normal sut","Normal sut" };
	int supersut[] = {40,90,90,90,40,40,80,65,70,40,90,40,40,40,40,40,40,90,40,40,40} ;


	char *supersavename[] = {"Normal save","Normal save","Normal save","Normal save","Normal save","SGGK","Normal save","Normal save","Normal save","Normal save","Normal save","Normal save","Normal save","Dutter Wall","Golden Right Hand","Normal save","Normal save","Normal save","Normal save","Normal save","Normal save"} ;
	int supersave[] = {50,50,50,50,50,170,50,50,50,50,50,50,50,150,140,50,50,50,50,50,60} ;


	char *supercalimname[] = {"Normal calim","Elegant Dribble","Heel Lift","Normal calim","Misaki in his element","Normal calim","Eagle Feint","Normal calim","Normal calim","Normal calim","Kaiser Feint","Left Foot Feint","Hedgehog Dribble","Normal calim","Normal calim","Normal calim","Normal calim","Genius Feint","Normal calim","Normal calim","Normal calim"} ;
	int supercalim[] = {35,110,100,35,95,35,75,35,35,35,85,75,85,35,35,35,35,105,35,35,35} ;



	char *supertacklename[] = {"Normal tackle","Yan bakan tackle","Normal tackle","Tiger Tackle","Normal tackle","Normal tackle","Eagle Tackle","Kamisori Tackle","Normal tackle","Normal tackle","Emperor's Tackle","Normal tackle","Hedgehog Tackle","Normal tackle","Normal tackle","Normal tackle","Normal tackle","Normal tackle","Normal tackle","Ayiogluayi Tackle","Normal tackle"} ;
	int supertackle[] = {20,45,20,50,20,20,50,40,20,20,35,20,40,20,20,20,20,20,20,35,20} ;
	
	
	
	int min = 0, sec = 0 , pscore = 0, cscore = 0, topt = 1, top , poz = 3, x, y, k, act, antiact ; 
	
	


void mainmenu() {
	
	
	system("cls") ;
	printf("Ana Menu\n\n");
	printf("\n1.Player vs Computer\n2.Takim listesi\n3.Nasi oynanir\n4.Player vs Player\n\n") ;
	
	
	
			
	}

void teamselect() {
	
	
 
	
	
	
	system("cls") ;
				
				printf("Oyuncu takimi\n\n1. Japonya\n2. Almanya\n3. Italya\n4. Arjantin\n5. Rastgele\n6.Kendi teaminizi olusturun\n") ;
				
				scanf(" %c",&pselect) ;
				switch(pselect) {
					case '1':
						strcpy(player,"Japonya") ;
						pgk = 5;
						
						playerteam = 1 ;
						
						pmf =  2;
						
						pfw = 3 ;	
						break;
						
					case '2':
						strcpy(player,"Almanya") ;
						pgk = 13;
						
						playerteam = 2;
						pmf =  12;
						
						
						pfw = 10 ;
						
						
						break;
						
					case '3':
						strcpy(player,"Italya") ;
						pgk = 14;
						
						
						pmf =  15;
						
						
						pfw = 16 ;
						
						playerteam = 3;
						break;
						
					case '4':
						strcpy(player,"Arjantin") ;
						pgk = 20;
						
						playerteam= 4;
						pmf =  18;
						
						
						pfw = 17 ;
						 
						
						break;
					case 'b': case'0':
						mainmenu() ;
						break ;	
					
					case '5':
						randnum = rand() % 4 ;
						
						switch(randnum) {
							case 0:
								strcpy(player,"Japonya") ;
								pgk = 5;
								
								playerteam = 1;
								pmf =  2;
								
								
								pfw = 3 ;
								
								
								break;
								
							case 1:
								
								strcpy(player,"Almanya") ;
								pgk = 13;
								
								playerteam = 2;
								pmf =  12;
							
								
								pfw = 10 ;
								
						
								break;
							
							case 2:
								strcpy(player,"Italya") ;
								pgk = 14;
								
								playerteam = 3;
								pmf =  15;
								
								
								pfw = 16 ;
								
								
								break;
								
							case 3:
										
								strcpy(player,"Arjantin") ;
								pgk = 20;
								
								playerteam = 4;
								pmf =  18;
								
								
								pfw = 17 ;
							
								break;		
						}
						break ;
					
					case '6':
						system("cls") ;
						printf("Takim ismi: ") ;
						scanf("%c",&enter) ;
						gets(player) ;
						
						system("cls") ;	
						
						printf("\nKaleci secin\n") ;
						for(x=1; x<21 ; x++) {
							printf("\n%d.%s",x,name[x]) ;
						}
						printf("\n") ;
						scanf("%d",&y) ;
						pgk = y ;
						
						system("cls") ;
						printf("\nOrta saha secin\n") ;
						for(x=1 ; x<21 ; x++) {
							printf("\n%d.%s",x,name[x]) ;
						}
						printf("\n") ;
						scanf("%d",&y) ;
						pmf = y ;
						
						system("cls") ;
						printf("\nForvet secin\n") ;
						for(x=1 ; x<21 ; x++) {
							printf("\n%d.%s",x,name[x]) ;
						}
						printf("\n") ;
						scanf("%d",&y) ;
						pfw = y ;
						break ;
						
					
						
						
					
						
				}
						
						
					system("cls") ;	
					printf("2.Oyuncu Takimi\n\n1. Japonya\n2. Almanya\n3. Italya\n4. Arjantin\n5. Rastgele\n6.Kendi takiminizi olusturun\n") ;
					scanf(" %c",&cselect) ;
					switch(cselect) {    
						case'1':
							strcpy(computer,"Japonya") ;
							cgk = 5;
							
							computerteam = 1;
							
							cmf =  2;
							
							
							cfw = 3 ;
							
							
							break;
							
						case '2':
							strcpy(computer,"Almanya") ;
							cgk = 13;
							
							computerteam = 2;
							cmf =  12;
							
							
							cfw = 10 ;
							
							break;
							
						case '3':
							strcpy(computer,"Italya") ;
							cgk = 14;
						
							computerteam = 3;
							cmf =  15;
							
							cfw = 16 ;
							
							
							break;
						case 'b': case'0':
							teamselect() ;
							break ;
						case '4':
							strcpy(computer,"Arjantin") ;
							cgk = 20;
							computerteam = 4;
							
							cmf =  18;
							
							
							cfw = 17 ;
						
							
							break;
							
						case '5':
							 randnum = rand() % 4 ;
							
							switch(randnum) {
								case 0:
									strcpy(computer,"Japonya") ;
									cgk = 5;
									
									computerteam = 1;
									cmf =  2;
								
									
									cfw = 3 ;
									
									
									break;
									
								case 1:
									
									strcpy(computer,"Almanya") ;
									cgk = 13;
									computerteam = 2;
									
									cmf =  12;
								
									
									cfw = 10 ;
								
							
									break;
								
								case 2:
									strcpy(computer,"Italya") ;
									cgk = 14;
									
									cmf =  15;
									computerteam = 3;
									cfw = 16 ;
								
									
									break;
									
								case 3:
											
									strcpy(computer,"Arjantin") ;
									cgk = 20;
									
									computerteam = 4;
									cmf =  18;
									
									
									cfw = 17 ;
									
									
									break;		
							}
							
							break ;
						case '6':
							system("cls") ;
							printf("Takim ismi: ") ;
							scanf("%c",&enter) ;
							gets(computer) ;
							
							system("cls") ;	
							
							printf("\nKaleci secin\n") ;
							for(x=1; x<21 ; x++) {
								printf("\n%d.%s",x,name[x]) ;
							}
							printf("\n") ;
							scanf("%d",&y) ;
							cgk = y ;
							
							system("cls") ;
							printf("\nOrta saha secin\n") ;
							for(x=1 ; x<21 ; x++) {
								printf("\n%d.%s",x,name[x]) ;
							}
							printf("\n") ;
							scanf("%d",&y) ;
							cmf = y ;
							
							system("cls") ;
							printf("\nForvet secin\n") ;
							for(x=1 ; x<21 ; x++) {
								printf("\n%d.%s",x,name[x]) ;
							}
							printf("\n") ;
							scanf("%d",&y) ;
							cfw = y ;
							
							
							system("cls") ;	
							break;
	}

}



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










void playerVsplayer(int pgk, int pmf, int pfw, int cgk, int cmf, int cfw ) {
	
	srand(time(0)) ;
	
	min = 0;
	sec = 0;
	pscore = 0;
	cscore = 0;
	poz = 3;
	topt = 1;
	
	top = pmf ;
	
	while(min < 8) {
									system("cls") ;
									
									printf("\n\n\nTime:  %d:%d",min,sec) ;
									sec += 10;
									if (sec==60) {
										sec = 0;
										min++ ;
									}
									printf("\n%s : %d ------  %s : %d\n\n",player,pscore,computer,cscore) ;
									
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
					
													case 1:case 0: case -1:
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
															
													case 5:case 6:case7:
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
													case 1: case 2:case 3:
														antiact = supertackle[cfw] ;
														strcpy(antiactname , supertacklename[cfw]) ;
														break ;
														
													 case 4:
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
													if((poz == 5) || (poz == 6) || (poz == 7)) {
														printf("\n%s kaleciyi calimladi kale bos!!",name[top]) ;
														sleep(1) ;
														printf("\n vurdu goooooolllll!!!!!!!") ;
														pscore++ ;
														topt = 2;
														top = cmf ;
														poz = 3;
														printf("\n\n%s:%d --- %s:%d",player,pscore,computer,cscore) ;
														printf("\nbaslamak icin entera basiniz") ;
														scanf("%c",&enter) ;
														scanf("%c",&enter) ;
													}
													else {
													
													poz++ ;
													
													printf("\n%s calimladi!!",name[top]) ;
													sleep(2) ; }
												}
												
												else if(act <=antiact) {
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
									
									else if (topt == 2) { 		// top oyuncudaysa
									
									
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
					
													case 1: case 0: case -1:
														antiact = 0 ;
														break;
													case 2:
														k = paskesme[pfw] ;
														antiact = rand() % k ;
														break ;
														
														
													case 3: case 4:
														k = paskesme[pmf] ;
														antiact = rand() % k ;
														break ;
															
													case 5: case 6: case 7:
														antiact = 0 ;
														break ;
													default:
														antiact = 0 ;
														break;
												} 
												
												
													
												if(act > antiact) {
													
													 
														
													poz -= 1 ;
													if (top == cfw)
														top = cmf ;
													else if(top == cmf)
														top = cfw ;
													else
														top = cmf ;
													printf("\npas basarili! %s topun sahibi",name[top]) ;
													sleep(2) ;
												}
												else{
													top = pmf ;
													topt = 1 ; 
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
													case 5: case 6: case 7:
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
												
												antiact = rand() % supersave[pgk] + 10 ;
												
												printf("\n%s nin %s !!!",name[pgk] , supersavename[pgk]) ;
												printf("\n...") ;
												
												sleep(2) ;
												
												if (act > antiact) { 
													printf("\n GOOOOOOOOOOOOOLLLLLLLLLL!!!!!!!!!!!") ;
													printf("\n%s vurdu gol oldu sayin seyirciler!!",name[top]) ; 
													cscore++ ;
													top = pmf ;
													poz = 3;
													topt = 1;
													printf("\n%s:%d -- %s:%d",player,pscore,computer,cscore) ;
													printf("\n\nBaslamak icin entera basiniz.") ;
													
													scanf("%c",&enter) ;
													scanf("%c",&enter) ;
												}
												else if(act <= antiact) {
													printf("\nKaleci kurtardi! %s super kurtaris",name[pgk]) ;
													top = pgk ;
													topt = 1 ;
													poz = 1;
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
													case 3: case 4:case 5:
														antiact = supertackle[pfw] ;
														strcpy(antiactname , supertacklename[pfw]) ;
														break ;
														
													case 2:
														antiact = supertackle[pmf] ;
														strcpy(antiactname , supertacklename[pmf]) ;
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
													if((poz == 1) || (poz == 0) || (poz == -1)) {
														printf("\n%s kaleciyi calimladi kale bos!!",name[top]) ;
														sleep(1) ;
														printf("\n vurdu goooooolllll!!!!!!!") ;
														cscore++ ;
														topt = 1;
														top = pmf ;
														poz = 3 ;
														printf("\n\n%s:%d --- %s:%d",player,pscore,computer,cscore) ;
														printf("\nbaslamak icin entera basiniz") ;
														scanf("%c",&enter) ;
														scanf("%c",&enter) ;
													}
												
													else {
													poz-- ;	
													printf("\n%s calimladi!!",name[top]) ;
													sleep(2) ;
												}
											}
												else if(act <= antiact){
													printf("\n%s topu kaybetti!!!",name[top]) ;
													sleep(2) ;
													topt = 1 ;
													switch(poz) {
														case 4: case 5:
															top = pfw ;
															break;
															
														case 2: case 3:
															top = pmf;
															break;
															
														case 1:
															top = pgk;
															break;
													}
													
												}
										}
									
									
									
									
									} }
								if(min==8) {
									printf("\n\nHakem dudugu caliyor mac bitti!!! ") ;
									printf("\nSonuc: %s:%d - %s:%d",player,pscore,computer,cscore) ;
									printf("\n\nentera basarak ana menuya donebilirsiniz.") ;
									scanf("%c",&enter) ;
									scanf("%c",&enter) ;
									
							}	}
							




void playervscomputer()
{
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
								
								int min = 0 ;
								int sec = 0 ;
								
								while(min < 5) {
									system("cls") ;
									
									printf("\n\nTime:  %d:%d",min,sec) ;
									sec += 10;
									if (sec==60) {
										sec = 0;
										min++ ;
									}
									printf("\n%s : %d ------  %s : %d\n\n",player,pscore,computer,cscore) ;
									
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
														act-=40 ;
														break;
														
													case 2: 
														act -=35 ;
														break;
														
													case 3:
														act -=25 ;
														break;
														
													case 4:
														act -= 10; 
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
													case 1: case 2:case 3:
														antiact = supertackle[cfw] ;
														strcpy(antiactname , supertacklename[cfw]) ;
														break ;
														
													 case 4:
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
													if((poz == 5) || (poz == 6) || (poz == 7)) {
														printf("\n%s kaleciyi calimladi kale bos!!",name[top]) ;
														sleep(1) ;
														printf("\n vurdu goooooolllll!!!!!!!") ;
														pscore++ ;
														topt = 2;
														top = cmf ;
														poz = 3 ;
														printf("baslamak icin entera basiniz") ;
														scanf("%c",&enter) ;
														scanf("%c",&enter) ;
													}
													
													else {
													
													poz++ ;
													
													printf("\n%s calimladi!!",name[top]) ;
													sleep(2) ; }
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
												
												break ;  // sut karar�n�n sonu
											
											case 2: // pas karar�
													
											
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
												 if (num < 8) 
												 	act = rand() % supercalim[top] ;
												 else 
												 	act = rand() % supercalim[0] ;
												
										
												
												switch(poz) {
													case 4: case 5:case 3:
														antiact = supertackle[pfw] ;
														strcpy(antiactname , supertacklename[pfw]) ;
														break ;
														
													case 2:
														antiact = supertackle[pmf] ;
														strcpy(antiactname , supertacklename[pmf]) ;
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
													if((poz == 1) || (poz == 0) || (poz == -1)) {
														printf("\n%s kaleciyi calimladi!! kale bos",name[top]) ;
														sleep(1) ;
														printf("\nvuruyor ve goll!!!") ;
														cscore++ ;
														top = pmf ;
														poz = 3 ;
														topt = 1 ;
														printf("\n%s:%d -- %s:%d",player,pscore,computer,cscore) ;
														
														printf("\n baslamak icin entera basiniz");
														scanf("%c",&enter) ;
														scanf("%c",&enter) ;
													}
													else {
													
													poz-- ;
													
													printf("\n%s calimladi!!",name[top]) ;
													sleep(2) ;
												}
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
							if(min==8) {
								printf("\n\nHakem dudugu caliyor mac bitti!!! ") ;
								printf("\nSonuc: %s:%d - %s:%d",player,pscore,computer,cscore) ;
								printf("\n\nentera basarak ana menuya donebilirsiniz.") ;
								scanf("%c",&enter) ;
								scanf("%c",&enter) ;
							}
}



int main(void) {
	char dec;
	
	mainmenu:
		mainmenu() ;
		scanf(" %c",&dec) ;
		
		switch(dec) {
			case '1':
				teamselect() ;
				playervscomputer() ;
				goto mainmenu ;
				break ;
			case '4':
				teamselect() ;
				
				playerVsplayer(pgk,pmf,pfw,cgk,cmf,cfw) ;
				
				goto mainmenu ;
				break ;
		
		
		
		
		
		}
}
							
							


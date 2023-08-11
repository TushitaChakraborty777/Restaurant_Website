#include <iostream>
#include <time.h>
#include <conio.h>
#include <process.h>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
#include <windows.h>
#include<iomanip>			
using namespace std;
//   GLOBAL VARIABLE
	char c,m;
	int i=0,tot=0,y=0;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0;
	int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
	int e1=0,e2=0,e3=0,e4=0,e5=0,e6=0;
	int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
    int g1=0,g2=0,g3=0,g4=0,g5=0,g6=0;
	int h1=0,h2=0,h3=0,h4=0,h5=0,h6=0;
	int i1=0,i2=0,i3=0,i4=0,i5=0,i6=0;
	int j1=0,j2=0,j3=0,j4=0,j5=0,j6=0;
	int k1=0,k2=0,k3=0,k4=0,k5=0,k6=0;
	int l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,l7=0,l8=0,l9=0,l10=0,l11=0,l12=0,l13=0,l14=0,l15=0,l16=0,l17=0,l18=0;
    int m1=0,m2=0,m3=0,m4=0,m5=0,m6=0;
	int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
    int o1=0,o2=0,o3=0,o4=0,o5=0,o6=0;
	int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0;
	char t;
//    Functions
void menu();
void tea();
void coffee();
void juice();
void pasta();
void pizza();
void sandwich();
void momos();
void north_india_cuisine();
void south_india_cuisine();
void breads_and_rotis();
void rice();
void veggies_and_dals();
void salad();
void chinese();
void dessert();
void icecream();
void placeorder();
void func();
//     Main Function
int main(){
	func();
}
//calls this function if the login id and password is correct
//       Main Page
void func() {
	char loader=254;
	cout<<"\t\t\t\tLoading"<<endl;
	for(int i=0;i<70;i++ )
	{
		system("color B");
		cout<<loader;
		Sleep(20);
	}
	system("cls");
	cout<<"\n\n\t\t======================================================\n";
	cout<<"\t\t\t    WELCOME TO CHERRY BLOSSOM RESTAURANT \n";
	cout<<"\t\t======================================================\n\n\n";
	cout<<"\t\t\t1. MENU  \n\t\t\t2. PLACE ORDER\n\t\t\t3. EXIT\n";
	cout<<"\n\n\n\t\tSELECT ONE OF THE OPTION FROM ABOVE";
	t=getche();

		if(t=='2'){
			system("cls");
			placeorder();
		}
		if(t=='1'){	
			system("cls");
			menu();
		}
		if(t=='3'){
			system("cls");	
			exit(0);
		}
		if(t=='b'){
			system ("cls");
			func();
		}
	char a;
}
//      Menu Function
void menu(){
	cout<<"        \n\t\t~!~!~!~!~!~!~!~!~! MAIN MENUE ~!~!~!~!~!~!~!~!~!\n\n";
	cout<<"\t\t\tA --> TEA\n\t\t\tB --> COFFEE\n\t\t\tC --> JUICE\n";
	cout<<"\t\t\tD --> PASTA\n\t\t\tE --> PIZZA \n\t\t\tF --> SANDWICH \n";
    cout<<"\t\t\tG --> MOMOS \n\t\t\tH --> NORTH INDIAN FOOD \n\t\t\tI --> SOUTH INDIAN FOOD \n";
    cout<<"\t\t\tJ --> BREADS AND ROTIS\n\t\t\tK --> RICE  \n\t\t\tL --> VEGGIES AND DALS  \n";
    cout<<"\t\t\tM --> SALAD \n\t\t\tN --> CHINESE  \n\t\t\tO --> DESSERT \n\t\t\tP --> ICE CREAM \n";
	cout<<"\n\n\t\t\tSELECT OPTION FROM ABOVE (A to P)\n\n\t\t\tPRESS b TO GO BACK";
	char x, v,n;
	do{
		c=getche();
			if(c=='A'){
				system("cls");
				tea();
			}
			if(c=='B'){
				system("cls");
				coffee();
			}
			if(c=='C'){
				system("cls");
				juice();
			}
			if(c=='D'){
				system("cls");
				pasta();
			}
			if(c=='E'){
				system("cls");
				pizza();
			}
			if(c=='F'){
				system("cls");
  				sandwich();
  		    }
            if(c=='G'){
				system("cls");
  				momos();
  		    }
            if(c=='H'){
				system("cls");
  				north_india_cuisine();
  		    }
            if(c=='I'){
				system("cls");
  				south_india_cuisine();
  		    }
            if(c=='J'){       
				system("cls");
  				breads_and_rotis();
  		    }
            if(c=='K'){
				system("cls");
  				rice();
  		    }
            if(c=='L'){
				system("cls");
  				veggies_and_dals();
  		    }
			if(c=='M'){
				system("cls");
  				salad();
  		    }
			if(c=='N'){
				system("cls");
  				chinese();
  		    }
			if(c=='O'){
				system("cls");
  				dessert();
  		    }
            if(c=='P'){
				system("cls");
  				icecream();
  		    }
			else{
				cout<<"\n invalid input \n";
			}
	}
	while(c!='b');
		if(c=='b'){
			system("cls");
			func();
		}
 }
int n;
//     tea Function
void tea(){
	char b;
	cout<<"1. MILK TEA              		         = Rs 40/-\n";
	cout<<"2. ROSE TEA              			 = Rs 50/-\n";
	cout<<"3. BLACK TEA             			 = Rs 30/-\n";
	cout<<"4. GREEN TEA	            			 = Rs 35/-\n";
	cout<<"5. OOLONG TEA             			 = Rs 40/-\n";
    cout<<"6. BUTTERFLY PEA TEA    		         = Rs 40/-\n";
	cout<<"\n PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\t PRESS b TO GO BACK TO MAIN MENU\n";
	do{
		b=getche();
		switch (b){
			case '1':
				cout<<"\nselected\n"	;
				a1++;
				break;
			case '2':
				cout<<"selected\n";
				a2++;
				break;
			case '3':
				cout<<"selected\n"	;
				a3++;
				break;
			case '4':
				cout<<"selected\n";
				a4++;
				break;
			case '5':
				cout<<"selected\n";
				a5++;
				break;
            case '6':
				cout<<"selected\n";
				a6++;
				break;
			default:
				cout<<"\n invalid input\n";
				break;
		}
	}
	while(b!='b');
		if(b=='b'){
			system("cls"),
			menu();
		}
}	
                           //       Coffee Function
void coffee(){
		cout<<"1. BLACK COFFEE          		 = Rs 40/-\n";
		cout<<"2. HOT CHOCOLATE COFFEE  		 = Rs 60/-\n";
		cout<<"3. COLD COFFEE     	    		 = Rs 40/-\n";
		cout<<"4. LATTE   			         = Rs 70/-\n";
		cout<<"5. IRISH COFFEE          		 = Rs 50/-\n";
		cout<<"6. CORTADO               		 = Rs 90/-\n";
		cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				b1++;
				break;
			case '2':
				cout<<"\nselected\n";
				b2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				b3++;
				break;
			case '4':
				cout<<"\nselected\n";
				b4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				b5++;
				break;
			case '6':
				cout<<"\nselected\n";
				b6++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
                                //       JUICE
void juice(){
		cout<<"1. GRAPEFRUIT JUICE    		     	 = Rs 50/-\n";
		cout<<"2. WATERMELON JUICE    			 = Rs 40/-\n";
		cout<<"3. ORANGE JUICE     	  		 = Rs 50/-\n";
		cout<<"4. MANGO PLUM JUICE    			 = Rs 50/-\n";
		cout<<"5. CRANBERRY JUICE     			 = Rs 70/-\n";
		cout<<"6. HONEYDEW JUICE   	 		 = Rs 60/-\n";
		cout<<"7. WATER  			 	 = Rs 20/-\n";
		cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 7)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				c1++;
				break;
			case '2':
				cout<<"\nselected\n";
				c2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				c3++;
				break;
			case '4':
				cout<<"\nselected\n";
				c4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				c5++;
				break;
			case '6':
				cout<<"\nselected\n";
				c6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				c7++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
                            //       PASTA
void pasta(){
	cout<<"1. RED SAUCE PASTA   	         	 = Rs 150/-\n";
	cout<<"2. WHITE SAUCE PASTA              	 = Rs 170/-\n";
	cout<<"3. PINK SAUCE PASTA               	 = Rs 180/-\n";
	cout<<"4. CREAMY MUSHROOM PASTA   	         = Rs 200/-\n";
	cout<<"5. CLASSIC LASAGNA 	     	     	 = Rs 220/-\n";
	cout<<"6. BROCCOLI CHEDDAR PASTA   	     	 = Rs 250/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
	switch (a){		
		case  '1':
			cout<<"\nselected\n";
			d1++;
			break;
		case '2':
			cout<<"\nselected\n";
			d2++;
			break;
		case  '3':
			cout<<"\nselected\n";
			d3++;
			break;
		case '4':
			cout<<"\nselected\n";
			d4++;
			break;
		case  '5':
			cout<<"\nselected\n";
			d5++;
			break;
		case '6':
			cout<<"\nselected\n";
			d6++;
			break;
		default:
			cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
                                // pizza 
void pizza(){
	cout<<"1. DOUBLE CHEESE MARGHERITA 	    	 = Rs 150/-\n";
	cout<<"2. FARM HOUSE                    	 = Rs 170/-\n";
	cout<<"3. MEXICAN GREEN WAVE            	 = Rs 190/-\n";
	cout<<"4. INDI TANDOORI PANEER 		 = Rs 240/-\n";
	cout<<"5. VEGGIE PARADISE	     	    	 = Rs 250/-\n";
	cout<<"6. VEG EXTRAVAGANZA  	         	 = Rs 280/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
	switch (a){		
		case  '1':
			cout<<"\nselected\n";
			e1++;
			break;
		case '2':
			cout<<"\nselected\n";
			e2++;
			break;
		case  '3':
			cout<<"\nselected\n";
			e3++;
			break;
		case '4':
			cout<<"\nselected\n";
			e4++;
			break;
		case  '5':
			cout<<"\nselected\n";
			e5++;
			break;
		case '6':
			cout<<"\nselected\n";
			e6++;
			break;
		default:
			cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
                            // SANDWICH 
void sandwich(){
	cout<<"1. PIADINA SANDWICH    	              = Rs 120/-\n";
	cout<<"2. GRILLED CHEESE SANDWICH            = Rs 170/-\n";
	cout<<"3. CHUTNEY GRILLED CHEESE SANDWICH    = Rs 180/-\n";
	cout<<"4. CRISPY TOFU SANDWICH               = Rs 200/-\n";
	cout<<"5. AVOCADO SANDWICH	              = Rs 220/-\n";
	cout<<"6. BOMBAY SANDWICH                    = Rs 250/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
	switch (a){		
		case  '1':
			cout<<"\nselected\n";
			f1++;
			break;
		case '2':
			cout<<"\nselected\n";
			f2++;
			break;
		case  '3':
			cout<<"\nselected\n";
			f3++;
			break;
		case '4':
			cout<<"\nselected\n";
			f4++;
			break;
		case  '5':
			cout<<"\nselected\n";
			f5++;
			break;
		case '6':
			cout<<"\nselected\n";
			f6++;
			break;
		default:
			cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
// MOMOS ORDER
void momos(){
	cout<<"1. STEAMED MOMOS    	    			 = Rs 60/-\n";
	cout<<"2. FRIED MOMOS           			 = Rs 80/-\n";
	cout<<"3. TANDOORI MOMOS   	         	 	 = Rs 85/-\n";
	cout<<"4. CHILLI MOMOS          			 = Rs 95/-\n";
	cout<<"5. SOUP MOMOS	        			 = Rs 100/-\n";
	cout<<"6. CHEESE MOMOS          			 = Rs 110/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
	switch (a){		
		case  '1':
			cout<<"\nselected\n";
			g1++;
			break;
		case '2':
			cout<<"\nselected\n";
			g2++;
			break;
		case  '3':
			cout<<"\nselected\n";
			g3++;
			break;
		case '4':
			cout<<"\nselected\n";
			g4++;
			break;
		case  '5':
			cout<<"\nselected\n";
			g5++;
			break;
		case '6':
			cout<<"\nselected\n";
			g6++;
			break;
		default:
			cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
//   NORTH INDIAN FOOD/CUISINE
void north_india_cuisine(){
	cout<<"1. RAJMA CHAWAL  		   		 	 = Rs 150/-\n";
	cout<<"2. MALAI KOFTA     		   			 = Rs 150/-\n";
	cout<<"3. PANEER TIKKA 	 	       			 = Rs 170/-\n";
    cout<<"4. CHHOLE BHATURE   		   			 = Rs 170/-\n";
	cout<<"5. PANI PURI 	     	   			 	 = Rs 50/-\n";
	cout<<"6. PAV BHAJI			       			 = Rs 150/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case '1':
				cout<<"\nselected\n";
				h1++;
				break;
			case '2':
				cout<<"\nselected\n";
				h2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				h3++;
            case '4':
			    cout<<"\nselected\n";
			    h4++;
			    break;
		    case '5':
			    cout<<"\nselected\n";
			    h5++;
			    break;
		    case '6':
			    cout<<"\nselected\n";
			    h6++;
			    break;
			default:
				cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
//      SOUTH INDIAN FOOD/CUISINE
void south_india_cuisine(){
	cout<<"1. PLAIN DOSA  						 = Rs 50/-\n";
	cout<<"2. MASALA DOSA      				 	 = Rs 60/-\n";
	cout<<"3. MIX UTTAPAM      					 = Rs 80/-\n";
	cout<<"4. IDLI 		 	   			 = Rs 35/-\n";
	cout<<"5. RASAM    		   				 = Rs 40/-\n";
    cout<<"6. SAMBAR VADA   					 = Rs 80/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				i1++;
				break;
			case '2':
				cout<<"\nselected\n";
				i2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				i3++;
				break;
			case '4':
				cout<<"\nselected\n";
				i4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				i5++;
				break;
            case  '6':
				cout<<"\nselected\n";
				i6++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
                        //      breads_and_rotis
void breads_and_rotis(){
	cout<<"1. PLAIN ROTI 			 			 = Rs 10/-\n";
	cout<<"2. BUTTER ROTI						 = Rs 15/-\n";
	cout<<"3. PLAIN TANDOORI ROTI				 	 = Rs 20/-\n";
	cout<<"4. BUTTER TANDOORI ROTI 		 		 = Rs 25/-\n";
	cout<<"5. PLAIN NAAN	     				 	 = Rs 30/-\n";
    cout<<"6. BUTTER GARLIC NAAN   				 = Rs 35/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				j1++;
				break;
			case '2':
				cout<<"\nselected\n";
				j2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				j3++;
				break;
			case '4':
				cout<<"\nselected\n";
				j4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				j5++;
				break;
            case  '6':
				cout<<"\nselected\n";
				j6++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
// RICE ORDER 
void rice(){
	cout<<"1. PLAIN RICE  			  			 = Rs 50/-\n";
	cout<<"2. JEERA RICE      					 = Rs 80/-\n";
	cout<<"3. PULAO        					 = Rs 100/-\n";
	cout<<"4. BIRYANI  		 				 = Rs 150/-\n";
	cout<<"5. LEMON RICE	   					 = Rs 180/-\n";
    cout<<"6. TAMARIND RICE   					 = Rs 220/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				k1++;
				break;
			case '2':
				cout<<"\nselected\n";
				k2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				k3++;
				break;
			case '4':
				cout<<"\nselected\n";
				k4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				k5++;
				break;
            case  '6':
				cout<<"\nselected\n";
				k6++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
// VEGGIES AND DALS
void veggies_and_dals(){
	cout<<"1. ALOO MUTTER 			 			 = Rs 50/-\n";
	cout<<"2. ALOO GOBI      					 = Rs 60/-\n";
	cout<<"3. BAINGAN BHARTA        			         = Rs 80/-\n";
	cout<<"4. MIX KORMA 		 				 = Rs 100/-\n";
	cout<<"5. PALAK PANEER	     				         = Rs 120/-\n";
    cout<<"6. SAHI PANEER   					 = Rs 150/-\n";
    cout<<"7. SARSON KA SAAG & MAKKI KI ROTI 	                 = Rs 150/-\n";
	cout<<"8. KADAI PANEER      				         = Rs 150/-\n";
	cout<<"9. ALOO POSTO						 = Rs 160/-\n";
	cout<<"10.PLAIN DAL  		 				 = Rs 50/-\n";
	cout<<"11.DAL TADKA 	     				         = Rs 60/-\n";
    cout<<"12.DAL MAKHANI    					 = Rs 80/-\n";
    cout<<"13.CHOLA DAL  			 			 = Rs 100/-\n";
	cout<<"14.DAL MUGHLAI          			         = Rs 140/-\n";
	cout<<"15.MIXED DAL         				         = Rs 145/-\n";
	cout<<"16.MASOOR DAL  		 				 = Rs 145/-\n";
	cout<<"17.GUJARATI DAL 	     				 = Rs 150/-\n";
    cout<<"18.PANCHRATNA DAL    				         = Rs 180/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 9)AND FROM (10 TO 18) PLZ USE CAPTAIL LETTERS (A to I) \n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				l1++;
				break;
			case '2':
				cout<<"\nselected\n";
				l2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				l3++;
				break;
			case '4':
				cout<<"\nselected\n";
				l4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				l5++;
				break;
            case  '6':
				cout<<"\nselected\n";
				l6++;
				break;
            case  '7':
				cout<<"\nselected\n";
				l7++;
				break;
			case '8':
				cout<<"\nselected\n";
				l8++;
				break;
			case  '9':
				cout<<"\nselected\n";
				l9++;
				break;
			case 'A':
				cout<<"\nselected\n";
				l10++;
				break;
			case  'B':
				cout<<"\nselected\n";
				l11++;
				break;
            case  'C':
				cout<<"\nselected\n";
				l12++;
				break;
            case  'D':
				cout<<"\nselected\n";
				l13++;
				break;
			case 'E':
				cout<<"\nselected\n";
				l14++;
				break;
			case  'F':
				cout<<"\nselected\n";
				l15++;
				break;
			case 'G':
				cout<<"\nselected\n";
				l16++;
				break;
			case  'H':
				cout<<"\nselected\n";
				l17++;
				break;
            case  'I':
				cout<<"\nselected\n";
				l18++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
// salad
void salad(){
	cout<<"1. CHUNKY SALAD 			 	= Rs 50/-\n";
	cout<<"2. MIX SALAD      				= Rs 55/-\n";
	cout<<"3. FETA STRAWBERRY SALAD    			= Rs 65/-\n";
	cout<<"4. SPICY CORN SALAD 		 		= Rs 70/-\n";
	cout<<"5. CHICKPEA QUINOA SALAD	   	        = Rs 90/-\n";
    cout<<"6. SHREDDED CARROT SALAD    	     	 	= Rs 120/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				m1++;
				break;
			case '2':
				cout<<"\nselected\n";
				m2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				m3++;
				break;
			case '4':
				cout<<"\nselected\n";
				m4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				m5++;
				break;
            case  '6':
				cout<<"\nselected\n";
				m6++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
                						// chinese
void chinese(){
	cout<<"1.GARLIC NOODLES   			 		 = Rs 100/-\n";
	cout<<"2.TSO TOFU       					 = Rs 130/-\n";
	cout<<"3.MANCHURIAN         				         = Rs 140/-\n";
	cout<<"4.FRIED RICE  		 				 = Rs 140/-\n";
	cout<<"5.CRISPY CHILLI GARLIC BABY CORN  	 	         = Rs 180/-\n";
    cout<<"6.SIZZLER    						 = Rs 220/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				n1++;
				break;
			case '2':
				cout<<"\nselected\n";
				n2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				n3++;
				break;
			case '4':
				cout<<"\nselected\n";
				n4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				n5++;
				break;
            case  '6':
				cout<<"\nselected\n";
				n6++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
                            // dessert
void dessert(){
	cout<<"1.RASMALAI 			 	 = Rs 30/-\n";
	cout<<"2.GULAB JAMUN       		    	 = Rs 30/-\n";
	cout<<"3.APPLE PIE CUSTARD         		 = Rs 50/-\n";
	cout<<"4.STRAWBERRY CUSTARD  		         = Rs 60/-\n";
	cout<<"5.TUTTI FRUITY CAKE 	     	         = Rs 80/-\n";
    cout<<"6.VELVET CHOCO LAVA CAKE   		 = Rs 100/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				o1++;
			    break;
			case '2':
				cout<<"\nselected\n";
				o2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				o3++;
				break;
			case '4':
				cout<<"\nselected\n";
				o4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				o5++;
				break;
            case  '6':
				cout<<"\nselected\n";
				o6++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
                            // ICE CREAM 
void icecream(){
	cout<<"1.CHOCO CHIP ICE-CREAM  		 = Rs 35/-\n";
	cout<<"2.MANGO DUET ICE-CREAM       		 = Rs 40/-\n";
	cout<<"3.STRAWBERRY SUNDAE         		 = Rs 80/-\n";
	cout<<"4.CARAMEL CHOCOLATE ICE-CREAM 		 = Rs 100/-\n";
	cout<<"5.PINEAPPLE ICE-CREAM 	     		 = Rs 110/-\n";
    cout<<"6.KESAR BADAM KULFI    			 = Rs 130/-\n";
	cout<<"PRESS OPTION FROM ABOVE FROM (1 TO 6)\n\n\t\t\tPRESS b TO RETURN ";
	char a;
	do{
		a=getche();
		switch (a){		
			case  '1':
				cout<<"\nselected\n";
				p1++;
			    break;
			case '2':
				cout<<"\nselected\n";
				p2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				p3++;
				break;
			case '4':
				cout<<"\nselected\n";
				p4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				p5++;
				break;
            case  '6':
				cout<<"\nselected\n";
				p6++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b'){
			system ("cls");
			menu();
		}	
}
//       Place order Function
void placeorder(){
	char z,b;
	int total=0;
	time_t rawtime;struct tm * timeinfo;time ( &rawtime );timeinfo = localtime ( &rawtime );
	cout<< (asctime (timeinfo));
	cout<<"\nDISHES\t\t\t\t\tPRICE (INR)\n\n"<<endl;
//       TEA ORDER
	if(a1>0){
		cout<<"MILK TEA	    				= "<<40*a1<<"      "<<"QUANTITY = "<<a1<<"\n";
		total+=(40*a1);
		y++;
	}
	if(a2>0){
		cout<<"ROSE TEA	    				= "<<50*a2<<"      "<<"QUANTITY = "<<a2<<"\n";
		total+=(50*a2);
		y++;
	}
	if(a3>0){
		cout<<"BLACK TEA      			  	= "<<30*a3<<"      "<<"QUANTITY = "<<a3<<"\n";
		total+=(30*a3);
		y++;
	}
	if(a4>0){
		cout<<" GREEN TEA      	  			= "<<35*a4<<"      "<<"QUANTITY = "<<a4<<"\n";
		total+=(35*a4);
		y++;
	}
	if(a5>0){
		cout<<"OOLONG TEA        	  		= "<<40*a5<<"      "<<"QUANTITY = "<<a5<<"\n";
		total+=(40*a5);
		y++;
	}
    if(a6>0){
		cout<<"BUTTERFLY PEA TEA          	= "<<40*a6<<"      "<<"QUANTITY = "<<a6<<"\n";
		total+=(40*a6);
		y++;
	}
//    COFFEE ORDER
	if(b1>0){
		cout<<"BLACK COFFEE			 		= "<<40*b1<<"      "<<"QUANTITY = "<<b1<<"\n";
		total+=(40*b1);
		y++;
	}
	if(b2>0){
		cout<<"HOT CHOCOLATE COFFEE     	= "<<60*b2<<"      "<<"QUANTITY = "<<b2<<"\n";
		total+=(60*b2);
		y++;
	}
	if(b3>0){
		cout<<"COLD COFFEE       			= "<<40*b3<<"      "<<"QUANTITY = "<<b3<<"\n";
		total+=(40*b3);
		y++;
	}
	if(b4>0){
		cout<<"LATTE      					= "<<70*b4<<"      "<<"QUANTITY = "<<b4<<"\n";
		total+=(70*b4);
		y++;
	}
	if(b5>0){
		cout<<" IRISH COFFEE           	  	= "<<50*b5<<"      "<<"QUANTITY = "<<b5<<"\n";
		total+=(50*b5);
		y++;
	}
	if(b6>0){
		cout<<"CORTADO  			  		= "<<90*b6<<"      "<<"QUANTITY = "<<b6<<"\n";
		total+=(90*b6);
		y++;
	}
//    JUICE ORDER
	if(c1>0){
		cout<<"	GRAPEFRUIT JUICE		  	= "<<50*c1<<"      "<<"QUANTITY = "<<c1<<"\n";
		total+=(50*c1);
		y++;
	}
	if(c2>0){
		cout<<"WATERMELON JUICE   			= "<<40*c2<<"      "<<"QUANTITY = "<<c2<<"\n";
		total+=(40*c2);
		y++;
	}
	if(c3>0){
		cout<<"ORANGE JUICE     			= "<<50*c3<<"      "<<"QUANTITY = "<<c3<<"\n";
		total+=(50*c3);
		y++;
	}
	if(c4>0){
		cout<<"MANGO PLUM JUICE       		= "<<50*c4<<"      "<<"QUANTITY = "<<c4<<"\n";
		total+=(50*c4);
		y++;
	}
	if(c5>0){
		cout<<"	CRANBERRY JUICE			    = "<<70*c5<<"      "<<"QUANTITY = "<<c5<<"\n";
		total+=(70*c5);
		y++;
	}
	if(c6>0){
		cout<<"HONEYDEW JUICE				= "<<60*c6<<"      "<<"QUANTITY = "<<c6<<"\n";
		total+=(60*c6);
		y++;
	}
	if(c7>0){
		cout<<"WATER   						= "<<20*c7<<"      "<<"QUANTITY = "<<c7<<"\n";
		total+=(20*c7);
		y++;
	}
//    PASTA ORDER
	if(d1>0){
		cout<<" RED SAUCE PASTA			 	= "<<150*d1<<"      "<<"QUANTITY = "<<d1<<"\n";
		total+=(150*d1);
		y++;
	}
	if(d2>0){
		cout<<"WHITE SAUCE PASTA     		= "<<170*d2<<"      "<<"QUANTITY = "<<d2<<"\n";
		total+=(170*d2);
		y++;
	}
	if(d3>0){
		cout<<"PINK SAUCE PASTA     		= "<<180*d3<<"      "<<"QUANTITY = "<<d3<<"\n";
		total+=(180*d3);
		y++;
	}
	if(d4>0){
		cout<<"CREAMY MUSHROOM PASTA       	= "<<200*d4<<"      "<<"QUANTITY = "<<d4<<"\n";
		total+=(200*d4);
		y++;
	}
	if(d5>0){
		cout<<"CLASSIC LASAGNA          	= "<<220*d5<<"      "<<"QUANTITY = "<<d5<<"\n";
		total+=(220*d5);
		y++;
	}
	if(d6>0){
		cout<<"BROCCOLI CHEDDAR PASTA 		= "<<250*d6<<"      "<<"QUANTITY = "<<d6<<"\n";
		total+=(250*d6);
		y++;
	}
//   PIZZA ORDER
	if(e1>0){
		cout<<"DOUBLE CHEESE MARGHERITA  	= "<<150*e1<<"      "<<"QUANTITY = "<<e1<<"\n";
		total+=(150*e1);
		y++;
	}
	if(e2>0){
		cout<<"FARM HOUSE     		 		= "<<170*e2<<"      "<<"QUANTITY = "<<e2<<"\n";
		total+=(170*e2);
		y++;
	}
	if(e3>0){
		cout<<"MEXICAN GREEN WAVE    		= "<<190*e3<<"      "<<"QUANTITY = "<<e3<<"\n";
		total+=(190*e3);
		y++;
	}
    if(e4>0){
		cout<<"INDI TANDOORI PANEER         = "<<240*e4<<"      "<<"QUANTITY = "<<e5<<"\n";
		total+=(240*e4);
		y++;
	}
    if(e5>0){
		cout<<" VEGGIE PARADISE           	= "<<250*e5<<"      "<<"QUANTITY = "<<e4<<"\n";
		total+=(250*e5);
		y++;
	}
    if(e6>0){
		cout<<"VEG EXTRAVAGANZA          	= "<<280*e6<<"      "<<"QUANTITY = "<<e5<<"\n";
		total+=(280*e6);
		y++;
	}
// SANDWICH ORDER
if(f1>0){
		cout<<"PIADINA SANDWICH			 	= "<<120*f1<<"      "<<"QUANTITY = "<<f1<<"\n";
		total+=(120*f1);
		y++;
	}
	if(f2>0){
		cout<<"GRILLED CHEESE SANDWICH    	= "<<170*f2<<"      "<<"QUANTITY = "<<f2<<"\n";
		total+=(170*f2);
		y++;
	}
	if(f3>0){
	 	cout<<"CHUTNEY GRILLED CHEESE SANDWICH = "<<180*f3<<"      "<<"QUANTITY = "<<f3<<"\n";
		total+=(180*f3);
		y++;
	}
	if(f4>0){
		cout<<" CRISPY TOFU SANDWICH    	= "<<200*f4<<"      "<<"QUANTITY = "<<f4<<"\n";
		total+=(200*f4);
		y++;
	}
	if(f5>0){
		cout<<"AVOCADO SANDWICH          	= "<<220*f5<<"      "<<"QUANTITY = "<<f5<<"\n";
		total+=(220*f5);
		y++;
	}
	if(f6>0){
		cout<<"BOMBAY SANDWICH				= "<<250*f6<<"      "<<"QUANTITY = "<<f6<<"\n";
		total+=(250*f6);
		y++;
	}
//   MOMOS ORDER
	if(g1>0){
		cout<<"STEAMED MOMOS				= "<<60*g1<<"      "<<"QUANTITY = "<<g1<<"\n";
		total+=(60*g1);
		y++;
	}
	if(g2>0){
		cout<<" FRIED MOMOS     			= "<<80*g2<<"      "<<"QUANTITY = "<<g2<<"\n";
		total+=(80*g2);
		y++;
	}
	if(g3>0){
		cout<<"TANDOORI MOMOS      			= "<<85*g3<<"      "<<"QUANTITY = "<<g3<<"\n";
		total+=(85*g3);
		y++;
	}
	if(g4>0){
		cout<<"CHILLI MOMOS       			= "<<95*g4<<"      "<<"QUANTITY = "<<g4<<"\n";
		total+=(95*f4);
		y++;
	}
	if(g5>0){
		cout<<"SOUP MOMOS           		= "<<100*g5<<"      "<<"QUANTITY = "<<g5<<"\n";
		total+=(100*g5);
		y++;
	}
    if(g6>0){
		cout<<"CHEESE MOMOS           	  	= "<<110*g6<<"      "<<"QUANTITY = "<<g6<<"\n";
		total+=(110*g6);
		y++;
	}
// NORTH INDIAN CUISINE ORDER
if(h1>0){
		cout<<"RAJMA CHAWAL 			 	= "<<150*h1<<"      "<<"QUANTITY = "<<h1<<"\n";
		total+=(150*h1);
		y++;
	}
	if(h2>0){
		cout<<"MALAI KOFTA     			 	= "<<150*h2<<"      "<<"QUANTITY = "<<h2<<"\n";
		total+=(150*i2);
		y++;
	}
	if(h3>0){
		cout<<"PANEER TIKKA       			= "<<170*h3<<"      "<<"QUANTITY = "<<h3<<"\n";
		total+=(170*h3);
		y++;
	}
	if(h4>0){
		cout<<"CHHOLE BHATURE      	  		= "<<170*h4<<"      "<<"QUANTITY = "<<h4<<"\n";
		total+=(170*h4);
		y++;
	}
	if(h5>0){
		cout<<"PANI PURI           	  	 	= "<<50*h5<<"      "<<"QUANTITY = "<<h5<<"\n";
		total+=(50*h5);
		y++;
	}
	if(h6>0){
		cout<<"PAV BHAJI					= "<<150*h6<<"      "<<"QUANTITY = "<<h6<<"\n";
		total+=(150*h6);
		y++;
	}
// SOUTH INDIAN CUISINE ORDER
if(i1>0){
		cout<<"PLAIN DOSA 			 		= "<<50*i1<<"      "<<"QUANTITY = "<<i1<<"\n";
		total+=(50*i1);
		y++;
	}
	if(i2>0){
		cout<<"MASALA DOSA     			 	= "<<60*i2<<"      "<<"QUANTITY = "<<i2<<"\n";
		total+=(60*i2);
		y++;
	}
	if(i3>0){
		cout<<"MIX UTTAPAM      			= "<<80*i3<<"      "<<"QUANTITY = "<<i3<<"\n";
		total+=(80*i3);
		y++;
	}
	if(i4>0){
		cout<<"IDLI        	  		 		= "<<35*i4<<"      "<<"QUANTITY = "<<i4<<"\n";
		total+=(35*i4);
		y++;
	}
	if(i5>0){
		cout<<"RASAM            	  	 	= "<<40*i5<<"      "<<"QUANTITY = "<<i5<<"\n";
		total+=(40*i5);
		y++;
	}
	if(i6>0){
		cout<<"SAMBAR VADA 					= "<<80*i6<<"      "<<"QUANTITY = "<<i6<<"\n";
		total+=(80*i6);
		y++;
	}
//BREADS AND ROTI ORDER
if(j1>0){
		cout<<"PLAIN ROTI 			 		= "<<10*j1<<"      "<<"QUANTITY = "<<j1<<"\n";
		total+=(10*j1);
		y++;
	}
	if(j2>0){
		cout<<"BUTTER ROTI					= "<<15*j2<<"      "<<"QUANTITY = "<<j2<<"\n";
		total+=(15*j2);
		y++;
	}
	if(j3>0){
		cout<<"PLAIN TANDOORI ROTI     		= "<<20*j3<<"      "<<"QUANTITY = "<<j3<<"\n";
		total+=(20*j3);
		y++;
	}
	if(j4>0){
		cout<<"BUTTER TANDOORI ROTI      	= "<<25*j4<<"      "<<"QUANTITY = "<<j4<<"\n";
		total+=(25*j4);
		y++;
	}
	if(j5>0){
		cout<<"PLAIN NAAN            	  	= "<<30*j5<<"      "<<"QUANTITY = "<<j5<<"\n";
		total+=(30*j5);
		y++;
	}
	if(j6>0){
		cout<<"BUTTER GARLIC NAAN			= "<<35*f6<<"      "<<"QUANTITY = "<<j6<<"\n";
		total+=(35*j6);
		y++;
	}
//RICE ORDER
if(k1>0){
		cout<<"PLAIN RICE  			 		= "<<50*k1<<"      "<<"QUANTITY = "<<k1<<"\n";
		total+=(50*k1);
		y++;
	}
	if(k2>0){
		cout<<"JEERA RICE     			 	= "<<80*k2<<"      "<<"QUANTITY = "<<k2<<"\n";
		total+=(80*k2);
		y++;
	}
	if(k3>0){
		cout<<"PULAO      			 		= "<<100*k3<<"      "<<"QUANTITY = "<<k3<<"\n";
		total+=(100*k3);
		y++;
	}
	if(k4>0){
		cout<<"BIRYANI       	  		 	= "<<150*k4<<"      "<<"QUANTITY = "<<k4<<"\n";
		total+=(150*k4);
		y++;
	}
	if(k5>0){
		cout<<"LEMON RICE           	  	= "<<180*k5<<"      "<<"QUANTITY = "<<k5<<"\n";
		total+=(180*k5);
		y++;
	}
	if(k6>0){
		cout<<"TAMARIND RICE 				= "<<220*k6<<"      "<<"QUANTITY = "<<k6<<"\n";
		total+=(220*k6);
		y++;
	}
//VEGGIES AND DAL
if(l1>0){
		cout<<"ALOO MUTTER  			 	= "<<50*l1<<"      "<<"QUANTITY = "<<l1<<"\n";
		total+=(50*l1);
		y++;
	}
	if(l2>0){
		cout<<" ALOO GOBI     			 	= "<<60*l2<<"      "<<"QUANTITY = "<<l2<<"\n";
		total+=(60*l2);
		y++;
	}
	if(l3>0){
		cout<<"BAINGAN BHARTA      			= "<<80*l3<<"      "<<"QUANTITY = "<<l3<<"\n";
		total+=(80*l3);
		y++;
	}
	if(l4>0){
		cout<<"MIX KORMA       	  		 	= "<<100*l4<<"      "<<"QUANTITY = "<<l4<<"\n";
		total+=(100*l4);
		y++;
	}
	if(l5>0){
		cout<<"PALAK PANEER            	  	= "<<120*l5<<"      "<<"QUANTITY = "<<l5<<"\n";
		total+=(120*l5);
		y++;
	}
	if(l6>0){
		cout<<"SAHI PANEER 					= "<<150*l6<<"      "<<"QUANTITY = "<<l6<<"\n";
		total+=(150*l6);
		y++;
	}
	if(l7>0){
		cout<<"SARSON KA SAAG & MAKKI KI ROTI = "<<150*l7<<"      "<<"QUANTITY = "<<l7<<"\n";
		total+=(150*l7);
		y++;
	}
	if(l8>0){
		cout<<"KADAI PANEER   			 	= "<<150*l8<<"      "<<"QUANTITY = "<<l8<<"\n";
		total+=(150*l8);
		y++;
	}
	if(l9>0){
		cout<<"ALOO POSTO      			 	= "<<160*l9<<"      "<<"QUANTITY = "<<l9<<"\n";
		total+=(160*l9);
		y++;
	}
	if(l10>0){
		cout<<"PLAIN DAL       	  		 	= "<<50*l10<<"      "<<"QUANTITY = "<<l10<<"\n";
		total+=(50*l10);
		y++;
	}
	if(l11>0){
		cout<<"DAL TADKA           	  	 	= "<<60*l11<<"      "<<"QUANTITY = "<<l11<<"\n";
		total+=(60*l11);
		y++;
	}
	if(l12>0){
		cout<<"DAL MAKHANI 					= "<<80*l12<<"      "<<"QUANTITY = "<<l12<<"\n";
		total+=(80*l12);
		y++;
	}
	if(l13>0){
		cout<<"CHOLA DAL 			 		= "<<100*l13<<"      "<<"QUANTITY = "<<l13<<"\n";
		total+=(100*l13);
		y++;
	}
	if(l14>0){
		cout<<"DAL MUGHLAI    			 	= "<<140*l14<<"      "<<"QUANTITY = "<<l14<<"\n";
		total+=(140*l14);
		y++;
	}
	if(l15>0){
		cout<<"MIXED DAL      			 	= "<<145*l15<<"      "<<"QUANTITY = "<<l15<<"\n";
		total+=(145*l15);
		y++;
	}
	if(l16>0){
		cout<<"MASOOR DAL       	  		= "<<145*l16<<"      "<<"QUANTITY = "<<l16<<"\n";
		total+=(145*l16);
		y++;
	}
	if(l17>0){
		cout<<"GUJARATI DAL           	  	= "<<150*l17<<"      "<<"QUANTITY = "<<l17<<"\n";
		total+=(150*l17);
		y++;
	}
	if(l18>0){
		cout<<"PANCHRATNA DAL 				= "<<180*l18<<"      "<<"QUANTITY = "<<l18<<"\n";
		total+=(180*l18);
		y++;
	}
	// SALAD ORDER
	if(m1>0){
		cout<<"CHUNKY SALAD 			 	= "<<50*m1<<"      "<<"QUANTITY = "<<m1<<"\n";
		total+=(50*f1);
		y++;
	}
	if(m2>0){
		cout<<"MIX SALAD    			 	= "<<55*m2<<"      "<<"QUANTITY = "<<m2<<"\n";
		total+=(55*m2);
		y++;
	}
	if(m3>0){
		cout<<"FETA STRAWBERRY SALAD      	= "<<65*m3<<"      "<<"QUANTITY = "<<m3<<"\n";
		total+=(65*m3);
		y++;
	}
	if(m4>0){
		cout<<"SPICY CORN SALAD      	  	= "<<70*m4<<"      "<<"QUANTITY = "<<m4<<"\n";
		total+=(70*m4);
		y++;
	}
	if(m5>0){
		cout<<"CHICKPEA QUINOA SALAD        = "<<90*m5<<"      "<<"QUANTITY = "<<m5<<"\n";
		total+=(90*m5);
		y++;
	}
	if(m6>0){
		cout<<"SHREDDED CARROT SALAD        = "<<120*m6<<"      "<<"QUANTITY = "<<m6<<"\n";
		total+=(120*m6);
		y++;
	}
	// CHINESE ORDER
	if(n1>0){
		cout<<"GARLIC NOODLES 			 	= "<<100*n1<<"      "<<"QUANTITY = "<<n1<<"\n";
		total+=(100*n1);
		y++;
	}
	if(n2>0){
		cout<<"TSO TOFU     			 	= "<<130*n2<<"      "<<"QUANTITY = "<<n2<<"\n";
		total+=(130*n2);
		y++;
	}
	if(n3>0){
		cout<<"MANCHURIAN      			 	= "<<140*n3<<"      "<<"QUANTITY = "<<n3<<"\n";
		total+=(140*n3);
		y++;
	}
	if(n4>0){
		cout<<"FRIED RICE       	  		= "<<140*n4<<"      "<<"QUANTITY = "<<n4<<"\n";
		total+=(140*n4);
		y++;
	}
	if(n5>0){
		cout<<"CRISPY CHILLI GARLIC BABY CORN 	 = "<<180*n5<<"      "<<"QUANTITY = "<<n5<<"\n";
		total+=(180*n5);
		y++;
	}
	if(n6>0){
		cout<<"SIZZLER  					= "<<220*n6<<"      "<<"QUANTITY = "<<n6<<"\n";
		total+=(220*n6);
		y++;
	}
	//DESERT ORDER
	if(o1>0){
		cout<<"RASMALAI   			 		= "<<30*o1<<"      "<<"QUANTITY = "<<o1<<"\n";
		total+=(30*o1);
		y++;
	}
	if(o2>0){
		cout<<"GULAB JAMUN    			 	= "<<30*o2<<"      "<<"QUANTITY = "<<o2<<"\n";
		total+=(30*o2);
		y++;
    }
	if(o3>0){
		cout<<"APPLE PIE CUSTARD     		= "<<50*o3<<"      "<<"QUANTITY = "<<o3<<"\n";
		total+=(50*o3);
		y++;
	}
	if(o4>0){
		cout<<"STRAWBERRY CUSTARD        	= "<<60*o4<<"      "<<"QUANTITY = "<<o4<<"\n";
		total+=(60*o4);
		y++;
	}
	if(o5>0){
		cout<<"TUTTI FRUITY CAKE           	= "<<80*o5<<"      "<<"QUANTITY = "<<o5<<"\n";
		total+=(80*o5);
		y++;
	}
	if(o6>0){
		cout<<"VELVET CHOCO LAVA CAKE 		= "<<100*o6<<"      "<<"QUANTITY = "<<o6<<"\n";
		total+=(100*o6);
		y++;
	}
	// ICE-CREAM
	if(p1>0){
		cout<<"CHOCO CHIP ICE-CREAM 		= "<<35*p1<<"      "<<"QUANTITY = "<<p1<<"\n";
		total+=(35*p1);
		y++;
	}
	if(p2>0){
		cout<<"MANGO DUET ICE-CREAM     	= "<<40*p2<<"      "<<"QUANTITY = "<<p2<<"\n";
		total+=(40*p2);
		y++;
	}
	if(p3>0){
		cout<<"STRAWBERRY SUNDAE     		= "<<80*p3<<"      "<<"QUANTITY = "<<p3<<"\n";
		total+=(80*p3);
		y++;
	}
	if(p4>0){
		cout<<"CARAMEL CHOCOLATE ICE-CREAM  = "<<100*p4<<"      "<<"QUANTITY = "<<p4<<"\n";
		total+=(100*p4);
		y++;
	}
	if(p5>0){
		cout<<"PINEAPPLE ICE-CREAM          = "<<110*p5<<"      "<<"QUANTITY = "<<p5<<"\n";
		total+=(110*p5);
		y++;
	}
	if(p6>0){
		cout<<"KESAR BADAM KULFI			= "<<130*p6<<"      "<<"QUANTITY = "<<p6<<"\n";
		total+=(130*p6);
		y++;
	}
//       total  bill
	cout<<"TOTAL BILL      = "<<total<<endl<<"TOTAL DISHES    = "<<y<<endl;
	tot+=total;
	cout<<"\n\n\n\t\t\t-----> THANKING YOU FOR YOUR ORDER <-----\n";
	cout<<"\n\n\nPRESS b TO GO BACK";
	z=getche();
	if(z=='b'){
	a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,e1=0,e2=0,e3=0,e4=0,e5=0,e6=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,g1=0,g2=0,g3=0,g4=0,g5=0,g6=0,h1=0,h2=0,h3=0,h4=0,h5=0,h6=0,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,j1=0,j2=0,j3=0,j4=0,j5=0,j6=0,k1=0,k2=0,k3=0,k4=0,k5=0,k6=0,l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,o1=0,o2=0,o3=0,o4=0,o5=0,o6=0,p1=0,p2=0,p3=0,p4=0,p5=0,p6=0;
		b++;	
		system("cls");
		func();	
	}
}
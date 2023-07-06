#include<stdio.h>
main()
{
	int i,a;
	for(i=1;i<=8;i++)
	{
		switch(i)
		{
				case 1 :
					{
					printf("Who was father of Pandavas?\n");
					printf("1.Dasharath\n2.Pandu\n3.Pandurang\n4.Dhrutarashtra\n");
					scanf("%d",&a);
					
					if(a==2)
					{	
						printf("Your Answer is correct\n");
						printf("============================================\n");
							
					}else{
						printf("Wrong Answer\n");
						printf("============================================\n");
						i=10;
					}			
				}break;
			case 2 :
				{
					printf("Which is National language of India?\n");
					printf("1.Hindi\n2.English\n3.Gujarati\n4.None\n");
					scanf("%d",&a);
					
					if(a==4)
					{
						printf("Your Answer is correct\n");
						printf("============================================\n");
						
					}else{
						printf("Wrong Answer\n");
						printf("============================================\n");
						i=10;
					}
				}	break;
			case 3 :
				{
					printf("Which is National sport of India?\n");
					printf("1.Hockey\n2.Kabaddi\n3.Cricket\n4.None\n");
					scanf("%d",&a);
					
					if(a==4)
					{
						printf("Your Answer is correct\n");
						printf("============================================\n");
						
					}else{
						printf("Wrong Answer\n");
						printf("============================================\n");
						i=10;
					}
				}break;
			case 4 :
				{
					printf("Who is Head of Bhartiya Janata Party?\n");
					printf("1.J.P. Nadda\n2.Amit Shah\n3.Narendra Modi\n4.Yogi Adityanath\n");
					scanf("%d",&a);
					
					if(a==1)
					{
						printf("Your Answer is correct\n");
						printf("============================================\n");
							
					}else{
						printf("Wrong Answer\n");
						printf("============================================\n");
						i=10;
					}
				}break;
			case 5 :
				{
					printf("Which is capital city of Telangana?\n");
					printf("1.Thiruvananthapuram\n2.Puducherry\n3.Amravati\n4.Hyderabad\n");
					scanf("%d",&a);
					
					if(a==3)
					{
						printf("Your Answer is correct\n");
						printf("============================================\n");
						
					}else{
						printf("Wrong Answer\n");
						printf("============================================\n");
						i=10;
					}
				}break;	
			case 6 :
				{
					printf("Which is not among the seven wonders of world?\n");
					printf("1.Statue of Liberty\n2.Chichen Itza\n3.Taj Mahal\n4.Great Wall Of China\n");
					scanf("%d",&a);
					
					if(a==1)
					{
						printf("Your Answer is correct\n");
						printf("============================================\n");
						
					}else{
						printf("Wrong Answer\n");
						printf("============================================\n");
						i=10;
					}
				}break;	
			case 7 :
				{
					printf("Who is Founder of Infosys?\n");
					printf("1.Narayan Murthi\n2.Larry Elison\n3.Ritesh Agarawal\n4.Piyush Bansal\n");
					scanf("%d",&a);
					
					if(a==1)
					{
						printf("Your Answer is correct\n");
						printf("============================================\n");
						
					}else{
						printf("Wrong Answer\n");
						printf("============================================\n");
						i=10;
					}
				}break;	
			case 8 :
				{
					printf("What is full form of LG?\n");
					printf("1.Live Gloomly\n2.Life's Good\n3.Leave Gladly\n4.None\n");
					scanf("%d",&a);
					
					if(a==2)
					{
						printf("Your Answer is correct\n");
						printf("============================================\n");
							
					}else{
						printf("Wrong Answer\n");
						printf("============================================\n");
						i=10;
					}
				}break;	
				
		}
	}
}

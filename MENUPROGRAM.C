void main()
{
	/*
	ch ==> for go forward
	rest for some input in respective data types.
	*/
	int ch,fno,sno,tno,var;
	float num1,num2,num3;
	char in;
	clrscr();
/*----------------------------------Main Menu start from here---------------------------------------------------------------------------------------*/
	do
	{
		MainMenu:
		clrscr();
		printf("\n\n================================================================================");
		printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
		printf("\n\n================================================================================");
		printf("\n1.Print different message");
		printf("\n2.Arithmetic Operations");
		printf("\n3.If-Else Programs");
		printf("\n4.Loops Programs");
		printf("\n\n================================================================================");
		printf("\n\n\nEnter your choice: ");
		scanf(" %c", &in);
		if(in=='m'||in=='M')
			printf("\nYou are already in Main Menu");
		else if(in=='b'||in=='B'||in=='x'||in=='X')
			exit(0);
		switch(in)
		{
			case 49:
				do
				{
					clrscr();
/*1.--------------------------------------Print Different Messages---------------------------------------------------------------------------------*/
					printf("\n\n================================================================================");
					printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
					printf("\n\n================================================================================");
					printf("\n1.Time-Table");
					printf("\n2.Student Info");
					printf("\n3.Marksheet");
					printf("\n\n================================================================================");
					printf("\n\n\nEnter your choice: ");
					scanf(" %c",&in);
					clrscr();
					if(in=='m'||in=='M'||in=='b'||in=='B')
						goto MainMenu;
					else if(in=='x'||in=='X')
						exit(0);
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
					switch(in)
					{
						case 49:
/*1.1 -------------------------------------Time-Table Program-------------------------------------------------------------------------------------------------*/
							printf("\n\nName:-KAMLESH SANJAY BAVISKAR");
							printf("\nParul Institute of Technology, Vadodara, Gujarat");
							printf("\nCourse\t:-S.Y.BTECH");
							printf("\n\n********************************TIME TABLE********************************");
							printf("\n\nSr.No\tMON\tTUES\tWED\tTHURS\tFRI\tSAT");
							printf("\n1.\tDBMS\tOOPC++\tDE\tPC-I\tPC-I\tOOPC++");
							printf("\n2.\tDM\tDE\tPPW\tDM\tDM\tDM");
							printf("\n\n***********************************BREAK************************************");
							printf("\n\n3.\tLIB\tDM\tPC-I\tDSA\tDBMS\tPPW");
							printf("\n4.\tOOPC++\tDSA\tDE\tDBMS\tOOPC++\tDBMS");
							printf("\n\n***********************************BREAK************************************");
							printf("\n\n5.\tDSA\tPC-I\tDBMS\tLIB\tDE\tDBMS");
							printf("\n6.\tDE\tOOPC++\tDSA\tLIB\tOOPC++\tLIB");
							printf("\n____________________________________________________________________________");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 50:
/*1.2 -------------------------------------Student Information-----------------------------------------------------------------------------------------------*/
							printf("\n\t\t*************Personal Information****************");
							printf("\n================================================================================");
							printf("\n\t\tName\t\t:-KAMLESH SANJAY BAVISKAR");
							printf("\n\t\tAddress\t\t:-Surat");
							printf("\n\t\tQulifiction\t:-CSE(second year)");
							printf("\n\t\tDate Of Birth\t:-22/11/2002");
							printf("\n\t\tE-mail\t\t:-ksb17219@gmail.com");
							printf("\n\t\tMobile No.\t:-9313568834");
							printf("\n\t\tFav.Game\t:-Chess");
							printf("\n================================================================================");
							printf("\n\t\t********************Thank You***********************");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 51:
/*1.3 -------------------------------------Marksheet --------------------------------------------------------------------------------------------------------*/
							printf("\n\t\t\tParul University of Technology");
							printf("\n************************************MARK SHEET**********************************");
							printf("\nName\t\t:-KAMLESH SANJAY BAVISKAR");
							printf("\nProgram\t\t:-BACHELOR OF TECHNOLOGY IN COMPUTER SCIENCE AND ENGINEERING");
							printf("\nEnrollment No.\t:-200305105026");
							printf("\nBranch\t\t:-CSE");
							printf("\nCourse\t\t:-F.Y.BTECH");
							printf("\n________________________________________________________________________________");
							printf("\nSub. Code\tSubject Name\t\tCredit\tGrade\tGrade Point\tCredit P");
							printf("\n203104103\tEnvironmental Sci.\t2\tA+\t9.00\t\t18.00");
							printf("\n203106101\tBasic Electrical Eng.\t5\tA+\t9.00\t\t45.00");
							printf("\n203107152\tElectronics Workshop\t1\to\t10.00\t\t10.00");
							printf("\n203108101\tICT\t\t\t3\to\t10.00\t\t30.00");
							printf("\n203109102\tElement of Mech.Eng.\t4\to\t10.00\t\t40.00");
							printf("\n203191101\tMethamatics-I\t\t5\to\t9.00\t\t45.00");
							printf("\n203193101\tCommunication Skill-I\t2\to\t9.00\t\t18.00");
							printf("\n________________________________________________________________________________");
							printf("\n\t\t\t\t\t\t\t\t<SGPA:9.36>");
							printf("\n\t\t\t\t\t\t\t\t<CGPA:9.36>");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						default:
							printf("\n\n\nEnter valid data...");
					}
					printf("\n\n\nDo you want to continue Print Different Messages Menu(y/n): ");
					scanf(" %c", &in);
				}while(in=='y' || in == 'Y');
				break;
/*-----------------------------------------End of Print Different Messages-----------------------------------------------------------------------------------*/
			case 50:
				do
				{
					ArtmMenu:
					clrscr();
/*1.2 -------------------------------------Arithmetic Operations Menu----------------------------------------------------------------------------------------*/
					printf("\n\n================================================================================");
					printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
					printf("\n\n================================================================================");
					printf("\n1.Addition of two numbers");
					printf("\n2.Subtraction of two numbers");
					printf("\n3.Multiplication of two numbers");
					printf("\n4.Division of two numbers");
					printf("\n5.Square and cube of given numbers");
					printf("\n6.Area and Perimeter");
					printf("\n7.Distance Conversion");
					printf("\n8.Temperature Conversion");
					printf("\n9.Swapping Programs");
					printf("\n\n================================================================================");
					printf("\n\n\nEnter your choice: ");
					scanf(" %c", &in);
					if(in=='m'||in=='M'||in=='b'||in=='B')
						goto MainMenu;
					else if(in=='x'||in=='X')
						exit(0);
					switch(in)
					{
						case 49:
							do
							{
								AddMenu:
								clrscr();
/*1.2.1 ----------------------------------Addition Menu-----------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Addition of two Integers");
								printf("\n2.Addition of two Floats");
								printf("\n3.Back to Arithmetic Menu");
								printf("\n4.Back to Main Menu");
								printf("\n5.Exit");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c", &in);
								if(in=='m'||in=='M')
									goto MainMenu;
								else if(in=='b'||in=='B')
									goto ArtmMenu;
								else if(in=='x'||in=='X')
									exit(0);
								switch(in)
								{
									case 49:
										do
										{
											clrscr();
/*1.2.1.1 -----------------------------------Addition of integers Menu-----------------------------------------------------------------------------------------*/
											printf("\n\n================================================================================");
											printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
											printf("\n\n================================================================================");
											printf("\n1.Addition using third variable");
											printf("\n2.Addition without using third variable");
											printf("\n\n================================================================================");
											printf("\n\n\nEnter your choice: ");
											scanf(" %c", &in);
											if(in=='m'||in=='M')
												goto MainMenu;
											else if(in=='b'||in=='B')
												goto AddMenu;
											else if(in=='x'||in=='X')
												exit(0);
											clrscr();
											switch(in)
											{
												case 49:
/*1.2.1.1.1 ---------------------------------Addition of two integers using third variable---------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Addition of two integers using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%d", &fno);
													printf("\nEnter second value\t\t: ");
													scanf("%d", &sno);
													tno = fno+sno;
													printf("\nAddition\t\t\t: %d", tno);
													printf("\n\n--------------------------------------------------------------------------------");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												case 50:
/*1.2.1.1.2 ---------------------------------Addition of two integers without using third variable-------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Addition of two integers without using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%d", &fno);
													printf("\nEnter second value\t\t: ");
													scanf("%d", &sno);
													printf("\nAddition\t\t\t: %d", fno+sno);
													printf("\n\n--------------------------------------------------------------------------------");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												default:
													printf("\n\n\nEnter valid data...");
											}
											printf("\n\n\nDo you want to continue Addition of two Integers Menu(y/n): ");
											scanf(" %c", &in);
										}while(in=='y'||in=='Y');
/*-----------------------------------End of Addition of Integers---------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
										do
										{
											clrscr();
/*1.2.1.2 -----------------------------------Addition of two floats using third variable---------------------------------------------------------------------*/
											printf("\n\n================================================================================");
											printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
											printf("\n\n================================================================================");
											printf("\n1.Addition using third variable");
											printf("\n2.Addition without using third variable");
											printf("\n\n================================================================================");
											printf("\n\n\nEnter your choice: ");
											scanf(" %c", &in);
											if(in=='m'||in=='M')
												goto MainMenu;
											else if(in=='b'||in=='B')
												goto AddMenu;
											else if(in=='x'||in=='X')
												exit(0);
											clrscr();
											switch(in)
											{
												case 49:
/*1.2.1.2.1 -----------------------------------Addition of two floats using third variable---------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Addition of two floats using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%f", &num1);
													printf("\nEnter second value\t\t: ");
													scanf("%f", &num2);
													num3=num1+num2;
													printf("\nAddition\t\t\t: %.2f", num3);
													printf("\n\n--------------------------------------------------------------------------------");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												case 50:
/*1.2.1.2.2 -----------------------------------Addition of two floats without using third variable---------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Addition of two floats without using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%f", &num1);
													printf("\nEnter second value\t\t: ");
													scanf("%f", &num2);
													printf("\nAddition\t\t\t: %.2f", num1+num2);
													printf("\n\n--------------------------------------------------------------------------------");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												default:
													printf("\n\n\nEnter valid data...");
													break;
											}
											printf("\n\n\nDo you want to continue Addittion of two Floats Menu(y/n): ");
											scanf(" %c", &in);
										}while(in=='y'||in=='Y');
/*-----------------------------------End of Addition of floats----------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data...");
										break;
								}
								printf("\n\n\nDo you want to continue Addition of two numbers Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
/*-----------------------------------------End of Addition Menu----------------------------------------------------------------------------------------------------------------------*/
							break;
						case 50:
							do
							{
								SubMenu:
								clrscr();
/*1.2.2 ---------------------------------------Subtraction Menu------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Subtraction of two Integers");
								printf("\n2.Subtraction of two Floats");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c", &in);
								if(in=='m' || in=='M')
									goto MainMenu;
								else if(in=='b' || in =='B')
									goto ArtmMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
										do
										{
											clrscr();
/*1.2.2.1 -------------------------------------Subtraction of integers Menu------------------------------------------------------------------------------------*/
											printf("\n\n================================================================================");
											printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
											printf("\n\n================================================================================");
											printf("\n1.Subtraction using third variable");
											printf("\n2.Subtraction without using third variable");
											printf("\n\n================================================================================");
											printf("\n\n\nEnter your choice: ");
											scanf(" %c", &in);
											if(in=='m' || in=='M')
												goto MainMenu;
											else if(in=='b' || in=='B')
												goto SubMenu;
											else if(in=='x' || in=='X')
												exit(0);
											clrscr();
											switch(in)
											{
												case 49:
/*1.2.2.1.1 -----------------------------------Subtraction of two integers using third variable---------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Subtraction of two integers using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%d", &fno);
													printf("\nEnter second value\t\t: ");
													scanf("%d", &sno);
													tno=fno-sno;
													printf("\nSubtraction\t\t\t: %d", tno);
													printf("\n\n--------------------------------------------------------------------------------");
													break;
												case 50:
/*1.2.2.1.2 ---------------------------------------Subtraction two integers without using third variable-----------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Subtraction of two integers without using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%d", &fno);
													printf("\nEnter second value\t\t: ");
													scanf("%d", &sno);
													printf("\nSubtraction\t\t\t: %d", fno-sno);
													printf("\n\n--------------------------------------------------------------------------------");
													break;
												default:
													printf("\n\n\nEnter valid data...");
											}
											printf("\n\n\nDo you want to continue Subtraction of two Integers Menu(y/n): ");
											scanf(" %c", &in);
										}while(in=='y'||in=='Y');
										break;
									case 50:
										do
										{
											clrscr();
/*1.2.2.2 ---------------------------------------------Subtraction two floats Menu------------------------------------------------------------------*/
											printf("\n\n================================================================================");
											printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
											printf("\n\n================================================================================");
											printf("\n1.Subtraction using third variable");
											printf("\n2.Subtraction without using third variable");
											printf("\n3.Back to Subtraction Menu");
											printf("\n4.Back to Arithmetic Operation Menu");
											printf("\n5.Back to Main Menu");
											printf("\n6.Exit");
											printf("\n\n================================================================================");
											printf("\n\n\nEnter your choice: ");
											scanf(" %c", &in);
											if(in=='m' || in=='M')
												goto MainMenu;
											else if(in=='b' || in=='B')
												goto SubMenu;
											else if(in=='x' || in=='X')
												exit(0);
											clrscr();
											switch(in)
											{
												case 49:
/*1.2.2.2.1 ------------------------------------------Subtraction two floats using third variable------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Subtraction of two floats using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%f", &num1);
													printf("\nEnter second value\t\t: ");
													scanf("%f", &num2);
													num3=num1-num2;
													printf("\nSubtraction\t\t\t: %.2f", num3);
													printf("\n\n--------------------------------------------------------------------------------");
													break;
												case 50:
/*1.2.2.2.2 ------------------------------------------Subtraction two floats without using third variable------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Subtraction of two floats without using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%f", &num1);
													printf("\nEnter second value\t\t: ");
													scanf("%f", &num2);
													printf("\nSubtraction\t\t\t: %.2f", num1-num2);
													printf("\n\n--------------------------------------------------------------------------------");
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												default:
													printf("\n\n\nEnter valid data...");
													break;
											}
											printf("\n\n\nDo you want to continue Subtraction of two Floats Menu(y/n): ");
											scanf(" %c", &in);
										}while(in=='y'||in=='Y');
										break;
									default:
										printf("\n\n\nEnter valid data...");
										break;
								}
								printf("\n\n\nDo you want to continue Subtraction of two numbers Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
/*-----------------------------------End of Subtraction Menu------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 51:
							do
							{
								MultMenu:
								clrscr();
/*1.2.3 -------------------------------Multiplication Menu----------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Multiplication of two Integers");
								printf("\n2.Multiplication of two Floats");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c", &in);
								if(in=='m' || in=='M')
									goto MainMenu;
								else if(in=='b' || in=='B')
									goto ArtmMenu;
								else if(in=='x' || in=='X')
									exit(0);
								switch(in)
								{
									case 49:
										do
										{
											clrscr();
/*1.2.3.1 -----------------------------Multiplication of two integers-----------------------------------------------------------------------------------------------------------------------*/
											printf("\n\n================================================================================");
											printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
											printf("\n\n================================================================================");
											printf("\n1.Multiplication using third variable");
											printf("\n2.Multiplication without using third variable");
											printf("\n\n================================================================================");
											printf("\n\n\nEnter your choice: ");
											scanf(" %c", &in);
											if(in=='m' || in=='M')
												goto MainMenu;
											else if(in=='b' || in=='B')
												goto MultMenu;
											else if(in=='x' || in=='X')
												exit(0);
											clrscr();
											switch(in)
											{
												case 49:
/*1.2.3.1.1 ---------------------------Multiplication of two integers using third variable--------------------------------------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Multiplication of two integers using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%d", &fno);
													printf("\nEnter second value\t\t: ");
													scanf("%d", &sno);
													tno=fno*sno;
													printf("\nMultiplication\t\t\t: %d", tno);
													printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												case 50:
/*1.2.3.1.2 ---------------------------Multiplication of two integers without using third variable--------------------------------------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Multiplication of two integers without using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%d", &fno);
													printf("\nEnter second value\t\t: ");
													scanf("%d", &sno);
													printf("\nMultiplication\t\t\t: %d", fno*sno);
													printf("\n\n--------------------------------------------------------------------------------");
													break;
												default:
													printf("\n\n\nEnter valid data...");
											}
											printf("\n\n\nDo you want to continue Multiplication of two Integers Menu(y/n): ");
											scanf(" %c", &in);
										}while(in=='y'||in=='Y');
/*-----------------------------------End of Multiplication of two integers----------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
										do
										{
											clrscr();
/*1.2.3.2 -----------------------------Multiplication of two floats Menu ---------------------------------------------------------------------------------------------------------------------------*/
											printf("\n\n================================================================================");
											printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
											printf("\n\n================================================================================");
											printf("\n1.Multiplication using third variable");
											printf("\n2.Multiplication without using third variable");
											printf("\n\n================================================================================");
											printf("\n\n\nEnter your choice: ");
											scanf(" %c", &in);
											if(in=='m' || in=='M')
												goto MainMenu;
											else if(in=='b' || in=='B')
												goto MultMenu;
											else if(in=='x' || in=='X')
												exit(0);
											clrscr();
											switch(in)
											{
												case 49:
/*1.2.3.2.1 ---------------------------Multiplication of two floats using third variable--------------------------------------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Multiplication of two floats using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%f", &num1);
													printf("\nEnter second value\t\t: ");
													scanf("%f", &num2);
													num3=num1*num2;
													printf("\nMultiplication\t\t\t: %.2f", num3);
													printf("\n\n--------------------------------------------------------------------------------");
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												case 50:
/*1.2.3.2.2 ---------------------------Multiplication of two floats without using third variable--------------------------------------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Multiplication of two floats without using third Variable");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter first value\t\t: ");
													scanf("%f", &num1);
													printf("\nEnter second value\t\t: ");
													scanf("%f", &num2);
													printf("\nMultiplication\t\t\t: %.2f", num1*num2);
													printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												default:
													printf("\n\n\nEnter valid data...");
													break;
											}
											printf("\n\n\nDo you want to continue Multiplication of two Floats Menu(y/n): ");
											scanf(" %c", &in);
										}while(in=='y'||in=='Y');
/*-----------------------------------End of Multiplication of two floats Menu-------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data...");
										break;
								}
								printf("\n\n\nDo you want to continue Multiplication of two numbers Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
/*-----------------------------------End of Multiplication Menu-----------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 52:
							do
							{
								clrscr();
/*1.2.4 ------------------------------Division Menu------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Division using third variable");
								printf("\n2.Division without using third variable");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c", &in);
								if(in=='m' || in=='M'|| in=='b' || in=='B')
									goto MainMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.2.4.1 ---------------------------Division using third variable-------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Division of two numbers using third Variable");
										printf("\n--------------------------------------------------------------------------------");
										printf("\n\nEnter first value\t\t: ");
										scanf("%f", &num1);
										printf("\nEnter second value\t\t: ");
										scanf("%f", &num2);
										num3=num1/num2;
										printf("\nDivision\t\t\t: %.2f", num3);
										printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.2.4.2 -----------------------------Division without using third variable----------------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Division of two numbers without using third Variable");
										printf("\n--------------------------------------------------------------------------------");
										printf("\n\nEnter first value\t\t: ");
										scanf("%f", &num1);
										printf("\nEnter second value\t\t: ");
										scanf("%f", &num2);
										printf("\nDivision\t\t\t: %.2f", num1/num2);
										printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data...");
								}
								printf("\n\n\nDo you want to continue Division of two numbers Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
/*---------------------------------End of Division Menu-----------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 53:
							do
							{
								clrscr();
/*1.2.5 -------------------------Square and Cube of given number----------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Square and cube of given integer number");
								printf("\n2.Square and cube of given float number");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choce: ");
								scanf(" %c", &in);
								if(in=='m' || in=='M'|| in=='b' || in=='B')
									goto MainMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.2.5.1 -----------------------Square and Cube of given Integer number--------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Square and Cube of given integer number");
										printf("\n--------------------------------------------------------------------------------");
										printf("\n\nEnter number\t\t: ");
										scanf("%d", &fno);
										printf("\nSquare of %d is\t\t:%d", fno,fno*fno);
										printf("\nCube of %d is\t\t:%d", fno,fno*fno*fno);
										printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.2.5.2-------------------------Square and Cube given Float Numbers-----------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Square and Cube of given float number");
										printf("\n--------------------------------------------------------------------------------");
										printf("\n\nEnter number\t\t: ");
										scanf("%f", &num1);
										printf("\nSquare of %.2f is\t\t:%.2f", num1,num1*num1);
										printf("\nCube of %.2f is\t\t:%.2f", num1,num1*num1*num1);
										printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
								}
								printf("\n\n\nDo you want to continue Square and cube of given number Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
/*-----------------------------End of Square and Cube Menu-------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 54:
							do
							{
								clrscr();
/*1.2.6 -------------------------Area and Perimeter Menu-----------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Circle");
								printf("\n2.Rectangle");
								printf("\n3.Square");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c",&in);
								if(in=='m' || in=='M', in=='b' || in=='B')
									goto MainMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.2.6.1 -----------------------Area and Perimeter of Circle-------------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Calculating Area and Perimeter of the circle");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter the radius of circle\t: ");
										scanf("%d", &fno);
										printf("\nThe area of circle\t\t:%.2f", (3.14*fno*fno));
										printf("\nThe perimeter of circle\t\t:%.2f", (2*3.14*fno));
										printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.2.6.2 -----------------------Area and Perimeter of Rectangle----------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Calculating Area and Perimeter of the Recangle");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter the length of Rectangle\t: ");
										scanf("%d", &fno);
										printf("\nEnter the width of Rectangle\t: ");
										scanf("%d", &sno);
										printf("\nThe area of Rectangle\t\t:%d", (fno*sno));
										printf("\nThe perimeter of Rectangle\t:%d", (2*(fno+sno)));
										printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 51:
/*1.2.6.4 -----------------------Area and Perimeter of Square-------------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Calculating Area and Perimeter of the Square");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter the side of Square\t: ");
										scanf("%f", &num1);
										printf("\nThe area of square\t\t:%.2f", (num1*num1));
										printf("\nThe perimeter of square\t\t:%.2f", (4*num1));
										printf("\n\n--------------------------------------------------------------------------------");
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data...");
								}
								printf("\n\n\nDo you want to continue Area and Perimeter Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
/*---------------------------End of Area and Perimeter Menu-------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 55:
							do
							{
								clrscr();
/*1.2.7 ---------------------------------------------Distance Conversion Menu--------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Kilometer to Meter");
								printf("\n2.Meter To Kilometer");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c",&in);
								if(in=='m' || in=='M' || in=='b' || in=='B')
									goto MainMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.2.7.1 -------------------Kilometer to Meter Conversion--------------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Convert Distance from kilometer into meter");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter the Distance in to kilometer\t: ");
										scanf("%f", &num1);
										printf("\nThe Distance into meter\t\t\t: %.2f", (num1*1000));
										printf("\n\n--------------------------------------------------------------------------------");
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.2.7.2 -------------------Meter to Kilometer Conversion--------------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Convert Distance from meter into kilometer");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter the Distance in to meter\t: ");
										scanf("%d", &fno);
										printf("\nThe Distance into kilometer\t: %.2f", (fno*0.001));
										printf("\n\n--------------------------------------------------------------------------------");
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data..");
										break;
								}
								printf("\n\n\nDo you want to continue Distance Conversion Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
/*---------------------------End of Distance Conversion Menu-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 56:
							do
							{
								clrscr();
/*1.2.8 ------------------------Temparature Conversion Menu-------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Degree to FarhenhitFahrenheit");
								printf("\n2.Fahrenheit to Degree");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c",&in);
								if(in=='m' || in=='M' || in=='b' || in=='B')
									goto MainMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.2.8.1 -----------------------------Fahrenheit to Centigrade conversion-----------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Convert temparature from Fahrenheit to Centigrade");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter temperature in Fahrenheit\t\t: ");
										scanf("%f", &num1);
										printf("\nThe temperature in centigrade\t\t: %.3f", 5.0 / 9.0 * ( num1 - 32.0 ));
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.2.8.2 -----------------------------Cenigrade to Fahrenheit conversion-----------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Convert temparature from Fahrenheit to Centigrade");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter temperature in centigrade\t\t: ");
										scanf("%f", &num1);
										printf("\nThe temperature in Fahrenheit\t\t: %.3f", ((9.0 / 5.0 * num1) + 32.0 ));
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data..");
										break;
								}
								printf("\n\n\nDo you want to continue Temprature Conversion Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
/*1.2.8 ------------------------------End of twmparature conversion Menu---------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 57:
							do
							{
								clrscr();
/*1.2.9 ------------------------------Swapping two numbers Menu------------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Using third variable");
								printf("\n2.Without using third variable");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c",&in);
								if(in=='m' || in=='M' || in=='b' || in=='B')
									goto MainMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.2.9.1 ------Swapping two numbers using third variable----------------------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Swapping two numbers using third variable");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter first number\t\t: ");
										scanf("%d", &fno);
										printf("\nEnter second number\t\t: ");
										scanf("%d", &sno);
										tno = fno;
										fno = sno;
										sno = tno;
										printf("\nFirst var\t\t\t: %d \nSecond var\t\t\t: %d", fno, sno);
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.2.9.2 ------Swapping two numbers without using third variable-------------------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Swapping two numbers without using third variable");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter first number\t\t: ");
										scanf("%d", &fno);
										printf("\nEnter second number\t\t: ");
										scanf("%d", &sno);
//                                      Addition & sub. mehtod  Multiplication & division method
										fno = fno+sno;           //	  	fno = fno * sno;
										sno = fno-sno;	     	 //		sno = fno / sno;
										fno = fno-sno;	         //		fno = fno / sno;
										printf("\nFirst var\t\t\t: %d \nSecond var\t\t\t: %d", fno, sno);
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data..");
										break;
								}
								printf("\n\n\nDo you want to continue Swapping two numbers Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y'||in=='Y');
							break;
						default:
							printf("\n\n\nEnter valid data...");
					}
					printf("\n\n\nDo you want to continue Arithmetic Operation Menu(y/n): ");
					scanf(" %c", &in);
				}while(in=='y' || in=='Y');
/*-------------------------------End of Swapping two numbers Menu-----------------------------------------------------------------------------------------------------------------------------------*/
				break;
			case 51:
/*1.3 ---------------------------------If-Else Menu-------------------------------------------------------------------------------------------------------------------------------------------------*/
				do
				{
					clrscr();
					IEMenu:
					printf("\n\n================================================================================");
					printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
					printf("\n\n================================================================================");
					printf("\n1.Simple If-else");
					printf("\n2.Nested If-else");
					printf("\n3.If-else Ladder");
					printf("\n\n================================================================================");
					printf("\n\n\nEnter your choice: ");
					scanf(" %c", &in);
					if(in=='m' || in=='M' || in=='b' || in=='B')
						goto MainMenu;
					else if(in=='x' || in=='X')
						exit(0);
					clrscr();
					switch(in)
					{
						case 49:
							do
							{
								clrscr();
/*1.3.1 -------------------------------Simple If-Else Menu-------------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Checking given number is even or odd");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c", &in);
								if(in=='m' || in=='M')
									goto MainMenu;
								else if(in=='b' || in=='B')
									goto IEMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.3.1.1 ------------------Program for checking given number is even or odd-------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("The program for checking a given number is odd or even");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter any number\t: ");
										scanf("%d", &fno);
										if(fno%2)
											printf("\n\n%d is odd.", fno);
										else
											printf("\n\n%d is even.", fno);
										printf("\n\n--------------------------------------------------------------------------------");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data....");
										break;
								}
								printf("\n\n\nDo you want to continue Simple If-else Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y' ||in=='Y');
/*--------------------------End of Simple if-Else Menu-----------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 50:
							do
							{
								clrscr();
/*1.3.2 ---------------------------Nested if-Else Menu------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Checking given year is Leap year or not");
								printf("\n2.Checking given character is vowel or consonant");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c", &in);
								if(in=='m' || in=='M')
									goto MainMenu;
								else if(in=='b' || in=='B')
									goto IEMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.3.2.1 ----------------Program for checking given year is leap year or not----------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Program for checking enter year is leap year or not");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter year\t\t: ");
										scanf("%d", &fno);
										if(fno%400 == 0 || fno%100 != 0)
										{
											if(fno%4 == 0)
												printf("\n\nLeap Year!");
											else
												printf("\n\nNot leap year!");
										}
										else
											printf("\n\nNot leap year!");
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.3.2.2 --------------Program for checking given character is vowel or consonant---------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Program for check the type of character(alphabet)");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter any character\t\t:");
										scanf(" %c", &ch);
										if(ch >= 65 && ch <= 90 || ch>=97 && ch<=122)
										{
											if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
											   ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
											   printf("\n\nEnter character is Vowel.");
											else
												printf("\n\nEnter character is consonant.");
										}
										else
											printf("\n\nEnter character is not an alphabet.");
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data....");
										break;
								}
								printf("\n\n\nDo you want to continue Nested If-else Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y' ||in=='Y');
/*1--------------------------End of Nested if-Else Menu------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 51:
							do
							{
								clrscr();
/*1.3.3 ---------------------------------if-Else Ladder Menu------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Finding greatest number from two numbers");
								printf("\n2.Finding greatest number from three numbers");
								printf("\n3.Checking given number is positive or negative");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c", &in);
								if(in=='m' || in=='M')
									goto MainMenu;
								else if(in=='b' || in=='B')
									goto IEMenu;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.3.3.1 ----------------Program for finding greatest number from two numbers---------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Program for finding the greatest number from two numbers");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter first number\t: ");
										scanf("%d", &fno);
										printf("\nEnter second number\t: ");
										scanf("%d", &sno);
										if(fno == sno)
											printf("\nBoth are same!");
										else if(fno>sno)
											printf("\n%d is greater.", fno);
										else
											printf("\n%d is greater.", sno);
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.3.3.2 --------------Program for finding greatest number from three numbers-------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Program for finding the greatest number from three numbers");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter first number\t: ");
										scanf("%d", &fno);
										printf("\nEnter second number\t: ");
										scanf("%d", &sno);
										printf("\nEnter third number\t: ");
										scanf("%d", &tno);
										if(fno == sno && fno == tno)
											printf("\nAll three numbers are same.");
										else if(fno > sno && fno > tno)
											printf("\n %d is greatest value.", fno);
										else if(sno > tno)
											printf("\n %d is greatest value.", sno);
										else
											printf("\n %d is greatest value.", tno);
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 51:
/*1.3.3.3  --------------Program for checking given number is positive or negative----------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Program for checking the given number is positive or negative");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter any number: ");
										scanf("%d", &fno);
										if(fno == 0)
											printf("\n0 is nither positive nor negative value.");
										else if(fno < 0)
											printf("\n%d is negative.", fno);
										else
											printf("\n%d is positive.", fno);
										printf("\n\n--------------------------------------------------------------------------------");
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data....");
										break;
								}
								printf("\n\n\nDo you want to continue If-else Ladder Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y' ||in=='Y');
/*----------------------------End of if-Else Ladder Menu-----------------------------------------------------------------------------------------------------------------------------*/
							break;
						default:
							printf("\n\n\nEnter valid data....");
							break;
					}
					printf("\n\n\nDo you want to continue If-else Menu(y/n): ");
					scanf(" %c", &in);
				}while(in=='y' ||in=='Y');
/*--------------------------------------End of if-Else Menu--------------------------------------------------------------------------------------------------------------------------------*/
				break;
			case 52:
				do
				{
					Loops:
					clrscr();
/*1.4 -------------------------------Loop Programs Menu----------------------------------------------------------------------------------------------------------------------------------------*/
					printf("\n\n================================================================================");
					printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
					printf("\n\n================================================================================");
					printf("\n1.While Loop");
					printf("\n2.For Loop");
					printf("\n3.do-While Loop");
					printf("\n\n================================================================================");
					printf("\n\n\nEnter your choice: ");
					scanf(" %c", &in);
					if(in=='m' || in=='M' || in=='b' || in=='B')
						goto MainMenu;
					else if(in=='x' || in=='X')
						exit(0);
					clrscr();
					switch(in)
					{
						case 49:
							do
							{
								clrscr();
/*1.4.1 -----------------------------While Loop Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Printing table of given number");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %=c", &in);
								if(in=='m' || in=='M')
									goto MainMenu;
								else if(in=='b' || in=='B')
									goto Loops;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.4.1.1 ---------------------------Printing table of given number-----------------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Printing table of given numbere");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter a number\t\t: ");
										scanf("%d", &fno);
										sno=1;
										while(sno<=10)
										{
											printf("\n\t%d", fno*sno);
											sno=sno+1;
										}
										printf("\n\n--------------------------------------------------------------------------------");
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data....");
								}
								printf("\n\n\nDo you want to continue While Loop Programs Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y' || in == 'Y');
/*---------------------------------End While Loop Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 50:
							do
							{
								For:
								clrscr();
/*1.4.2 -----------------------------For Loop Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Fibonacci Series");
								printf("\n2.Check given number is prime or not");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %d", &in);
								if(in=='m' || in=='M')
									goto MainMenu;
								else if(in=='b' || in=='B')
									goto Loops;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
										do
										{
											clrscr();
/*1.4.2.1 -------------------------Fibonacci Series Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
											printf("\n\n================================================================================");
											printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
											printf("\n\n================================================================================");
											printf("\n1.Print series upto given number of terms");
											printf("\n2.Print series upto given term");
											printf("\n\n================================================================================");
											printf("\n\n\nEnter your choice: ");
											scanf(" %c", &in);
											if(in=='m' || in=='M')
												goto MainMenu;
											else if(in=='b' || in=='B')
												goto For;
											else if(in=='x' || in=='X')
												exit(0);
											clrscr();
											switch(in)
											{
												case 49:
/*1.4.2.1.1 -------------------------Print series upto given number of terms--------------------------------------------------------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Printf series upto given number of terms");
													printf("\n--------------------------------------------------------------------------------");
													printf("\nEnter the number of terms\t\t:");
													scanf("%d", &ch);
													fno=0;sno=1;tno=0;
													if(ch<0)
														printf("\nEnter vaid entry....");
													else
													{
														for(var=0; var<ch; var++)
														{
															tno = fno+sno;
															printf("\t%d", fno);
															fno = sno;
															sno = tno;
														}
													}
													printf("\n\n--------------------------------------------------------------------------------");
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												case 50:
/*1.4.2.1.2 -------------------------Print series upto given term-----------------------------------------------------------------------------------------------------------------------------*/
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Print series upto given term");
													printf("\n--------------------------------------------------------------------------------");
													printf("\n\nEnter term\t\t:");
													scanf("%d", &ch);
													fno=0;sno=1;
													for(tno=1; fno<=ch; tno=fno+sno)
													{
														printf("\t%d", fno);
														fno = sno;
														sno = tno;
													}
													printf("\n\n--------------------------------------------------------------------------------");
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
													break;
												default:
													printf("\n\n\nEnter valid data....");
											}
											printf("\n\n\nDo you want to continue Fibonacci Series Program Menu(y/n): ");
											scanf(" %c", &in);
										}while(in=='y' || in == 'Y');
/*------------------------------------End Fibonacci Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									case 50:
/*1.4.2.2 -----------------------------Check wether given number is prime or not-----------------------------------------------------------------------------------------------------------------------*/
										printf("\n\n--------------------------------------------------------------------------------");
										printf("Chcek whether given numbere is prime or not");
										printf("\n--------------------------------------------------------------------------------");
										printf("\nEnter a number\t\t: ");
										scanf("%d", &fno);
										for(sno=2 ; sno<=fno/2 ; sno++)
										{
											if(fno%sno==0)
											{
												ch=1;
												break;
											}
										}
										if(ch==2)
											printf("\n\nPrime");
										else
											printf("\n\nNot Prime");
										printf("\n\n--------------------------------------------------------------------------------");
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data....");
								}
								printf("\n\n\nDo you want to continue For Loop Programs Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y' || in == 'Y');
/*------------------------------------End For Loop Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						case 51:
							do
							{
								Do:
								clrscr();
/*1.4.3 ------------------------------do-While Loop Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
								printf("\n\n================================================================================");
								printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
								printf("\n\n================================================================================");
								printf("\n1.Printing required number in given range");
								printf("\n\n================================================================================");
								printf("\n\n\nEnter your choice: ");
								scanf(" %c", &in);
								if(in=='m' || in=='M')
									goto MainMenu;
								else if(in=='b' || in=='B')
									goto Loops;
								else if(in=='x' || in=='X')
									exit(0);
								clrscr();
								switch(in)
								{
									case 49:
/*1.4.3.1 -----------------------Printing required number in given range Menu--------------------------------------------------------------------------------------------------------------------*/
										do
										{
											clrscr();
											printf("\n\n================================================================================");
											printf("m:Main Menu\t\t\tb:back\t\t\tx:close");
											printf("\n\n================================================================================");
											printf("\n1.Printing Prime number in given range");
											printf("\n2.Printing Palindrom number in given range");
											printf("\n3.Printing Armstrong number in given range");
											printf("\n\n================================================================================");
											printf("\n\n\nEnter your choice: ");
											scanf(" %c", &in);
											if(in=='m' || in=='M')
												goto MainMenu;
											else if(in=='b' || in=='B')
												goto Do;
											else if(in=='x' || in=='X')
												exit(0);
											clrscr();
											switch(in)
											{
												case 49:
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Printing Prime number in given range");
													break;
												case 50:
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Printing Palindrome number in given range");
													break;
												case 51:
													printf("\n\n--------------------------------------------------------------------------------");
													printf("Printing Armstong number in given range");
													break;
												default:
													printf("\n\n\nEnter valid data...");
													break;
											}
											if(in==49 || in==50 || in==51)
											{
/*-----------------------------------Common of programs--------------------------------------------------------------------------------------------------------------------------------------------*/
												printf("\n--------------------------------------------------------------------------------");
												printf("Enter range....");
												printf("\nEnter first number\t\t: ");
												scanf("%d", &fno);
												printf("\nEnter second number\t\t: ");
												scanf("%d", &sno);
												if(fno<0 || sno<0)
												{
													printf("\n\n\nEnter valid data.....");
													break;
												}
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
												else
												{
/*------------------------------------For small to larger number series----------------------------------------------------------------------------------------------------------------------------*/
													if(fno<=sno)
													{
														switch(in)
														{
															case 49:
/*-------------------------------For Printing prime numbers in given range--------------------------------------------------------------------------------------------------------------------*/
																while(fno<=sno)
																{
																	var = 0;
																	for(ch=2; ch<=(fno/2); ch++)
																	{
																		if(fno%ch == 0)
																		{
																			var = 1;
																			break;
																		}
																	}
																	if(var == 0)
																		printf("\t%d", fno);
																	fno = fno+1;
																}
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
																break;
															case 50:
/*---------------------------------Printing palindrome number in given range-------------------------------------------------------------------------------------------------------------------------*/
																for(; fno<=sno; fno++)
																{
																	var = 0;
																	for(ch=fno; ch>0; )
																	{
																		tno = ch%10;
																		ch = ch/10;
																		var = var*10+tno;
																	}
																	if(fno == var)
																		printf("\t%d", fno);
																}
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
																break;
															case 51:
/*---------------------------------Printing Armstrong number in given range-------------------------------------------------------------------------------------------------------------------------*/
																for(; fno<=sno; fno++)
																{
																	var = 0;
																	for(ch=fno; ch>0;)
																	{
																		tno = ch%10;
																		ch = ch/10;
																		var  = var + (tno*tno*tno);
																	}
																	if(fno == var)
																		printf("\t%d", fno);
																}
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
																break;
														}
													}
/*------------------------------------End of smaller to larger number series----------------------------------------------------------------------------------------------------------------------------*/
													else
													{
/*------------------------------------For larger to smaller number series----------------------------------------------------------------------------------------------------------------------------*/
														switch(in)
														{
															case 49:
/*---------------------------------Printing Prime number in given range-------------------------------------------------------------------------------------------------------------------------*/
																while(fno>=sno)
																{
																	ch = 2; var = 0;
																	while(ch<=(fno/2))
																	{
																		if(fno%ch == 0)
																		{
																			var = 1;
																			break;
																		}
																		ch = ch+1;
																	}
																	if(var == 0)
																		printf("\t%d", fno);
																	fno = fno-1;
																}
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
																break;
															case 50:
/*---------------------------------Printing palindrome number in given range-------------------------------------------------------------------------------------------------------------------------*/
																while(fno<=sno)
																{
																	ch = fno;var = 0;
																	while(ch>0)
																	{
																		tno = ch%10;
																		ch = ch/10;
																		var = var*10+tno;
																	}
																	if(fno == var)
																		printf("\t%d", fno);
																	fno = fno+1;
																}
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
																break;
															case 51:
/*---------------------------------Printing Armstrong number in given range-------------------------------------------------------------------------------------------------------------------------*/
																while(fno>=sno)
																{
																	ch = fno;var = 0;
																	while(ch>0)
																	{
																		tno = ch%10;
																		ch = ch/10;
																		var  = var + (tno*tno*tno);
																	}
																	if(fno == var)
																		printf("\t%d", fno);
																	fno = fno-1;
																}
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
																break;
														}
													}
/*------------------------------------End of larger to smaller number series----------------------------------------------------------------------------------------------------------------------------*/
													printf("\n--------------------------------------------------------------------------------");
												}
											}
											printf("\n\n\nDo you want to continue Printing Number in given range Menu(y/n): ");
											scanf(" %c", &in);
										}while(in=='y' || in == 'Y');
/*-------------------------End Printing required number in given range Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
										break;
									default:
										printf("\n\n\nEnter valid data....");
								}
								printf("\n\n\nDo you want to continue do-While Loop Programs Menu(y/n): ");
								scanf(" %c", &in);
							}while(in=='y' || in == 'Y');
/*------------------------------------End do-While Loop Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
							break;
						default:
							printf("\n\n\nEnter valid data....");
							break;
					}
					printf("\n\n\nDo you want to continue Loop Programs Menu(y/n): ");
					scanf(" %c", &in);
				}while(in=='y' || in == 'Y');
/*------------------------------------End Loop Program Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
				break;
			default:
				printf("\n\n\nEnter valid data...");
		}
		printf("\n\n\nDo you want to continue Main Menu(y/n): ");
		scanf(" %c", &in);
	}while(in=='y' || in == 'Y');
/*------------------------------------End Main Menu--------------------------------------------------------------------------------------------------------------------------------------------*/
	printf("\n\nPress any key to exit......");
	getch();
}

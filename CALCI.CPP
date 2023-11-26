#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int area()
{
	clrscr();
	int a;
	char ch;
	cout<<"\n ************WELCPOME TO THE AREA CALCIULATING**************";
	cout<<"\n *********************options: **********************";
	cout<<"\n (1) CIRCLE ";
	cout<<"\n (2) RECTANGLE ";
	cout<<"\n (3) SQUARE ";
	cout<<"\n (4) TRIANGLE ";
	cout<<"\n (5) TRAPZIUM ";
	cout<<"\n (6) n-SIDED POLYGON ";
	cout<<"\n Enter your choice: ";
	cin>>a;
	float r,l,b,s,s1,s2,s3,sn,d,h,n,m,n1;
	switch(a)
	{
		case 1:
				cout<<"\n Enter the radius of the circle ";
				cin>>r;
				cout<<"\n Area of the circle is :"<<3.14*r*r;
				break;
		case 2:
				cout<<"\n Enter the length and breadth of the Rectangle: ";
				cin>>l>>b;
				cout<<"\n Area of the Rectangle is: "<<l*b;
				break;
		case 3:
				cout<<"\n Enter the sides of the square: ";
				cin>>s;
				cout<<"\n Area of the square is: "<<s*s;
				break;
		case 4:
				cout<<"\n Enter the sides of the triangle: ";
				cin>>s1>>s2>>s3;
				sn=(s1+s2+s3)/2;
				s1=sn-s1;
				s2=sn-s2;
				s3=sn-s3;
				cout<<"\n Area of the triangle: "<<sqrt(sn*s1*s2*s3);
				break;
		case 5:
				cout<<"\n Enter the length of the parallel sides: ";
				cin>>b>>d;
				cout<<"\n Enter the height: ";
				cin>>h;
				cout<<"\n Area of the trapezium is: "<<0.5*(b+d)*h;
				break;
		case 6:
				cout<<"\n enter the no. side of the polygon: ";
				cin>>n;
				cout<<"\n Enter the side of the polygon ";
				cin>>n1;
				float m=3.14/n;
				r=tan(m);
				cout<<"\n area of the polygon: "<<n1*n1*0.25*r;
				break;
		default:
				cout<<"\n Wrong options:";
				break;
	}
	getch();
	return 0;
}

int perimeter()
{
	clrscr();
	int a;
	char ch;
	float r,l,b,s,s1,s2,s3,d,h,n;
	cout<<"\n **********WELCOME TO THE PERIMETER CALCULATING*********** ";
	cout<<"\n *************************options:************************* ";
	cout<<"\n (1) CIRCLE ";
	cout<<"\n (2) RECTANGLE ";
	cout<<"\n (3) SQUARE ";
	cout<<"\n (4) TRIANGLE ";
	cout<<"\n (5) TRAPZIUM ";
	cout<<"\n (6) n-SIDED POLYGON ";
	cout<<"\n Enter your choice: ";
	cin>>a;
	switch(a)
	{
		case 1:
				cout<<"\n Enter the radius of the circle ";
				cin>>r;
				cout<<"\n Perimeter of the circle is :"<<6.28*r;
				break;
		case 2:
				cout<<"\n Enter the length and breadth of the Rectangle: ";
				cin>>l>>b;
				cout<<"\n Perimeter of the Rectangle is: "<<2*(l+b);
				break;
		case 3:
				cout<<"\n Enter the sides of the square: ";
				cin>>s;
				cout<<"\n Perimeter of the square is: "<<4*s;
				break;
		case 4:
				cout<<"\n Enter the sides of the triangle: ";
				cin>>s1>>s2>>s3;
				cout<<"\n Perimeter of the triangle: "<<s1+s2+s3;
				break;
		case 5:
				cout<<"\n Enter the length of the parallel sides: ";
				cin>>b>>d;
				cout<<"\n Enter the height: ";
				cin>>h;
				float k=(h*h)+(d-b)*(d-b);
				float m=sqrt(k);
				cout<<"\n perimeter of the trapezium: "<<b+d+m;
				break;
		case 6:
				cout<<"\n enter the no. side of the polygon: ";
				cin>>n;
				cout<<"\n Enter the side of the polygon ";
				break;
		default:
				cout<<"\n Wrong options:";
				break;
	}
	getch();
	return 0;
}


int aircalci()
{
	clrscr();
	float a,b,n3,result,sum;
	char ch;
	int N;
	cout<<"\n *******************WELCOME TO THE AIRTHEMATIC CALCULATOR****************************";
	cout<<"\n (1)ADDITION ";
	cout<<"\n (2)SUBTRACTION ";
	cout<<"\n (3)MULTIPLICATION ";
	cout<<"\n (4)DIVISION ";
	cout<<"\n (5)PERCENTAGE ";
	cout<<"\n (6)FACTORIAL";
	cout<<"\n (7)nth ROOT ";
	cout<<"\n (8)POWER OF THE NUMBER ";
	cout<<"\n (9)LOGARITHUM ";
	cout<<"\n (10)SINE EVALUATION ";
	cout<<"\n (11)COSINE EVALUATION ";
	cout<<"\n (12)TANGENT CALCULATION ";
	cout<<"\n Enter your choice: ";
	cin>>N;
	switch(N)
	{
			case 1:
					cout<<"\n Enter the first number: ";
					cin>>a;
					cout<<"\n Enter the second number: ";
					cin>>b;
					sum=a+b;
					cout<<"\n Result is: "<<sum;
					cout<<"\n Do you want to continue: ";
					cin>>ch;
					while(ch=='Y'||ch=='y')
					{
							cout<<"Entrr the number: ";
							cin>>n3;
							sum=sum+n3;
							cout<<"\n Result "<<sum;
							cout<<"\n do u still want to continue: ";
							cin>>ch;
					}
					break;
			case 2:
					cout<<"\n Enter the first number: ";
					cin>>a;
					cout<<"\n Enter the second number: ";
					cin>>b;
					sum=a-b;
					cout<<"\n Result is: "<<sum;
					cout<<"\n Do you want to continue: ";
					cin>>ch;
					while(ch=='Y'||ch=='y')
					{
							cout<<"Entrr the number: ";
							cin>>n3;
							sum=sum-n3;
							cout<<"\n Result "<<sum;
							cout<<"\n do u still want to continue: ";
							cin>>ch;
					}
					break;
			case 3:
					cout<<"\n Enter the first number: ";
					cin>>a;
					cout<<"\n Enter the second number: ";
					cin>>b;
					sum=a*b;
					cout<<"\n Result is: "<<sum;
					cout<<"\n Do you want to continue: ";
					cin>>ch;
					while(ch=='Y'||ch=='y')
					{
							cout<<"Entrr the number: ";
							cin>>n3;
							sum=sum*n3;
							cout<<"\n Result "<<sum;
							cout<<"\n do u still want to continue: ";
							cin>>ch;
					}
					break;
			case 4:
					cout<<"\n Enter the first number: ";
					cin>>a;
					cout<<"\n Enter the second number: ";
					cin>>b;
					sum=a/b;
					cout<<"\n Result is: "<<sum;
					cout<<"\n Do you want to continue: ";
					cin>>ch;
					while(ch=='Y'||ch=='y')
					{
							cout<<"Entrr the number: ";
							cin>>n3;
							sum=sum/n3;
							cout<<"\n Result "<<sum;
							cout<<"\n do u still want to continue: ";
							cin>>ch;
					}
					break;
			case 5:
					do
					{
						cout<<"\n Enter the number: ";
						cin>>a;
						cout<<"Enter the precentage: ";
						cin>>b;
						result=(a*b)/100;
						cout<<"\n Result is: "<<result;
						cout<<"\n Do u still wanna continue: ";
						cin>>ch;
					}while(ch=='Y'||ch=='y');
					break;
			case 6:
					do
					{
						cout<<"\n Enter the number ";
						cin>>a;
						result=1;
						for(b=0;b<a;b++)
						{
							result=result*b;
						}
						cout<<"\n Result is: "<<result;
						cout<<"\n Do u want to continue: ";
						cin>>ch;
					}while(ch=='Y'||ch=='y');
					break;
			case 7:
					do
					{
						cout<<"\n Enter the number: ";
						cin>>a;
						cout<<"\n Enter the power: ";
						cin>>b;
						float v=1/b;
						result=pow(a,v);
						cout<<"\n Result is: "<<result;
						cout<<"\n Do u want to continue: ";
						cin>>ch;
					}while(ch=='Y'||ch=='y');
					break;
			case 8:
					do
					{
						cout<<"\n Enter the number: ";
						cin>>a;
							cout<<"\n Enter the power: ";
						cin>>b;
						result=pow(a,b);
						cout<<"\n Result is: "<<result;
						cout<<"\n Do u want to continue: ";
						cin>>ch;
					}while(ch=='Y'||ch=='y');
					break;
			case 9:
					do
					{
						cout<<"\n Enter the number: ";
						cin>>a;
						result=log(a);
						cout<<"\n Result is: "<<result;
						cout<<"\n Do u want to continue: ";
						cin>>ch;
					}while(ch=='Y'||ch=='y');
					break;
			case 10:
					do
					{
						cout<<"\n Enter the number: ";
						cin>>a;
						result=sin(a);
						cout<<"\n Result is: "<<result;
						cout<<"\n Do u want to continue: ";
						cin>>ch;
					}while(ch=='Y'||ch=='y');
					break;
			case 11:
					do
					{
						cout<<"\n Enter the number: ";
						cin>>a;
						result=cos(a);
						cout<<"\n Result is: "<<result;
						cout<<"\n Do u want to continue: ";
						cin>>ch;
					}while(ch=='Y'||ch=='y');
					break;
			case 12:
					do
					{
						cout<<"\n Enter the number: ";
						cin>>a;
						result=tan(a);
						cout<<"\n Result is: "<<result;
						cout<<"\n Do u want to continue: ";
						cin>>ch;
					}while(ch=='Y'||ch=='y');
					break;
			 default:
					cout<<"\n wrong option ";
					break;
	}
	getch();
	return 0;
}
void main()
{
	clrscr();
	long int p;
	char ch,ch1;
	char str[80]="d_maam";
	char name[80];
	cout<<"\n ************************************WELCOME THE CALCULATOR**********************************";
	cout<<"\n ENTER YOUR NAME: ";
	cin.getline(name,80);
	cout<<"\n ENTER THE PASSWORD: ";
	cin>>p;
	if(strcmp(name,str)==0&&p==18)
	{
		do
		{
			clrscr();
			cout<<"\n OPTIONS ";
			cout<<"\n (A) AREA CALCULATION ";
			cout<<"\n (B) PERIMETER CALCULATION ";
			cout<<"\n (C) AIRTHEMATIC CALCULATION ";
			cout<<"\n Enter your choice: ";
			cin>>ch;
			switch(ch)
			{
				case 'a':
					area();
					break;
				case 'b':
					perimeter();
					break;
				case 'c':
					aircalci();
					break;
				default:
					cout<<"\n WRONG OPTION!! ";
					break;
			}
			cout<<"\n Do u want to continue(RETURN TO THE MAIN MENU): ";
			cin>>ch1;
			}while(ch1=='Y'||ch1=='y');
	}
	else
	{
			cout<<"\n SORRY WRONG PASSWORD!! ";
	}
	getch();
}

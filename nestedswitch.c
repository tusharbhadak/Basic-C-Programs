//nested switch
int main()
{
int a = 15;
int b = 20;
clrscr();
switch (a) { //Outer switch

    case 25 / 5:
        switch (b) { // Inner switch. 
            case 100 / 10:
                printf("I am inside two switches!!\n");
                break;
            default:
                printf("me too!\n");
        }
        break;
    default:
	printf("I am default\n");
}
getch();
return 0;
}

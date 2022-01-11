/*
	
	Mini Project Structure	
	
*/
//#include "header.h"
#include "main.h"

//extern int count;

void main_menu(){

	printf("\nMain Menu\n");
	
	//printf("\n count = %d\n",count);
	
	printf("1.Add\n2.Modify\n3.View\n4.Delete\n*.Exit\n");
	
	void (*funp[4])();	// Array of Function Pointer
	funp[0] = add;
	funp[1] = modify;
	funp[2] = view;
	funp[3] = delete;
	
	char choice;
	
	//getchar();
	scanf(" %c",&choice);
	switch(choice){
		
		case '1': 
			//count++;
			funp[0]();
			break;
			
		case '2': 
			funp[1]();
			break;
			
		case '3': 
			funp[2]();
			break;
			
		case '4': 
			funp[3]();
			break;
			
		case '*':
			printf("Exiting from the Program \n");
			break;
			//exit(0);
			
		default :
			printf("Invalid Option -- Enter Your Responsse again\n");
			main_menu();
		}
	
	}
	
void main(){

	printf("In Main Function : \n");
	
	//Initialise Start Menu Function
	read_db();
	main_menu();
	write_db();
	
	printf("Exited from the program\n");
	
}

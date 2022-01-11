/*	
	Add Employee Details to Excel Sheet 
*/
#include "add.h"
#if 0
const char *timestamp(){
			
	char *buffer = malloc(max_size);
	time_t t = time(NULL);
	struct tm  *tm;
	tm= localtime(&t); 
			  
	if ((tm->tm_hour) <12){
			  	
		sprintf(buffer,"%02d/%02d/%d %02d:%02d am", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, tm->tm_hour, tm->tm_min);
		//printf("%02d/%02d/%d %02d:%02d am", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, tm->tm_hour, tm->tm_min);
	}
	else if ((tm->tm_hour)  == 12){
		sprintf(buffer,"%02d/%02d/%d %02d:%02d pm", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, tm->tm_hour, tm->tm_min);
		//printf("%02d/%02d/%d %02d:%02d pm", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, tm->tm_hour, tm->tm_min);
	}
	else{
		sprintf(buffer,"%02d/%02d/%d %02d:%02d pm", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, (tm->tm_hour - 12), tm->tm_min);
		//printf("%02d/%02d/%d %02d:%02d pm", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, (tm->tm_hour - 12), tm->tm_min);
	}
	
	return buffer;
}
#endif

void add()
{
	extern employee *head,*last;
	extern int count;
	printf("Add Operation\n");
	employee *new_node;
	new_node = malloc(sizeof(employee));
	
	printf("\nEnter Employee ID : ");
	scanf("%s",new_node->empid);
	
	
	printf("\nEnter Name of the Employee : ");
	getchar();
	scanf("%[^\n]s",new_node->name);
	
	
	printf("\nEnter Employee Email ID : ");
	scanf("%s",new_node->emailid);
	
	
	printf("\nEnter Band : ");
	scanf("%s",new_node->band);
	
	
	printf("\nEnter Date of Joining : ");
	scanf("%s",new_node->doj);
	
	
	printf("\nEmployee Mobile Number : ");
	scanf("%s",new_node->phoneno);
	
	
	printf("\nEnter Detials of reporting Manager : ");
	getchar();
	scanf("%[^\n]s",new_node->reporting_manager);
	
	
	
	char repo;
	
	printf("\nAny Reportees working under you : Yes(Y)/No(N) : ");
	scanf(" %c",&repo);
	
	if (repo == 'Y'){
		
		
		printf("\nEnter total no. of reporteees : ");
		int total_reportee;
		scanf("%d",&total_reportee);
		int i;
		for (i=0; i<total_reportee; i++){
			char new_entry_reportee[max_size];
			getchar();
			printf("\nEnter Reportee Name and ID : ");
			scanf("%[^\n]s",new_entry_reportee);
			strcat(new_entry_reportee,"/");
			strcat(new_node->reportees,new_entry_reportee);
		}
		new_node->reportees[strlen(new_node->reportees)-1] = '\0';
	}
	
	else{
		strcpy(new_node->reportees,"NA");
	}
	
	
		
	printf("\nEnter Tech Area of Employee : ");
	scanf("%s",new_node->techarea);
	
	
	
	printf("\nProject Information : ");
	getchar();
	scanf("%[^\n]s",new_node->project_info);
	
	
	
	strcpy(new_node->status,"Active");			//implicit initialisation
	
	
	strcpy(new_node->relieving_date,"NA");	//implicit initialisation
	
	
	
	
	
	
	new_node->next=NULL;
	last->next=new_node;
	last=new_node;
	count++;
	main_menu();
}

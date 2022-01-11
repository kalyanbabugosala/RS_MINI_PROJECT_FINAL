//#include "header.h"
#include "modify.h"
void modify()
{
	extern employee *head,*last;
	int exp=1;
	int choice;

	employee *modify_node=head;
	unsigned char id[max_size],modify[max_size];
	char buf_char;
	unsigned register int i,reportee_count;
	
	printf("Enter the Employee ID\n");
	scanf("%s",id);
	
	while(modify_node!=NULL){
		if(strlen(id)==strlen(modify_node->empid))
			if(strcmp(id,modify_node->empid)){
				modify_node=modify_node->next;
				continue;
			}
			else
				break;
		else
			modify_node=modify_node->next;
	}
	if(modify_node!=NULL){
		printf("%25s\t:\t\n","Details of the Employee");
		printf("%25s\t:\t%s\n",head->empid,modify_node->empid);
		printf("%25s\t:\t%s\n",head->name,modify_node->name);
		printf("%25s\t:\t%s\n",head->emailid,modify_node->emailid);
		printf("%25s\t:\t%s\n",head->band,modify_node->band);
		printf("%25s\t:\t%s\n",head->doj,modify_node->doj);
		printf("%25s\t:\t%s\n",head->phoneno,modify_node->phoneno);
		printf("%25s\t:\t%s\n",head->reporting_manager,modify_node->reporting_manager);
		
		reportee_count=0;
		for(i=0;i<max_size;i++){
			buf_char=modify_node->reportees[i];
			
			if(buf_char=='/'){
				printf("\n%25s[%d]\t:\t",head->reportees,1+reportee_count++);
				continue;	
			}
			else if(i==0)
				printf("%25s[%d]\t:\t",head->reportees,1+reportee_count++);
			printf("%c",buf_char);
		}
		printf("\n");
		printf("%25s\t:\t%s\n",head->techarea,modify_node->techarea);
		printf("%25s\t:\t%s\n",head->project_info,modify_node->project_info);
		printf("%25s\t:\t%s\n",head->status,modify_node->status);
		printf("%25s\t:\t%s\n",head->relieving_date,modify_node->relieving_date);
		printf("\n\n\n\n");
		
		
		
		while(exp)
			{       
			
				printf("\n\n\n\n\n");
				printf("\nEnter your choice to modify :  \n");
				printf("1.Name\n2.Phone number\n3.Reporting Manager\n4.Band\n5.Reportees\n6.Tech Area\n   7.Project Info\n8.Exit\n");
				
				scanf("%d",&choice);
				switch(choice)
				{
					case 1: 
					printf("Enter the new name\n");
					scanf("%s",modify);
					strcpy(modify_node->name,modify);
					break;
			
					case 2:
					printf("Enter the new phone number\n");
					scanf("%s",modify);
					strcpy(modify_node->phoneno,modify);
					break;
			
					case 3: 
					printf("Enter the new reporting manager name\n");
					scanf("%s",modify);
					strcpy(modify_node->reporting_manager,modify);
					break;
			
					case 4: 
					printf("Enter the new band\n");
					scanf("%s",modify);
					strcpy(modify_node->band,modify);
					break;
					
					case 5: 
					printf("Enter the new Reportees\n");
					printf("\nEnter total no. of reporteees : ");
					int total_reportee;
					scanf("%d",&total_reportee);
					int i;
					for (i=0; i<total_reportee; i++)
					{
						char new_entry_reportee[max_size];
						getchar();
						printf("\nEnter Reportee Name and ID : ");
						scanf("%[^\n]s",new_entry_reportee);
						strcat(new_entry_reportee,"/");
						strcat(modify_node->reportees,new_entry_reportee);
					}
					modify_node->reportees[strlen(modify_node->reportees)-1] = '\0';
					break;
					
					case 6: 
					printf("Enter the new tech area\n");
					scanf("%s",modify);
					strcpy(modify_node->techarea,modify);
					break;
					
					case 7: 
					printf("project info\n");
					scanf("%s",modify);
					strcpy(modify_node->project_info,modify);
					break;
			
					case 8:
					printf("Exiting from the Modify\n");
					exp=0;
					break;
			//exit(0);
			
					default :
					printf("Invalid Option -- Enter Your choice again\n");				
					break;
			
				}
			
			
			
			}
			
	}
	

	else
		printf("Employee ID doesn't exist\n");





	main_menu();
	//return;
}


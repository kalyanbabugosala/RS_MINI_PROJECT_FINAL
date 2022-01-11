//#include "header.h"
#include "view.h"

void view(){

	extern employee *first_node,*last_node;
	employee *view_node=first_node;
	
	unsigned char entered_id[max_size],reportee_display[max_size];
	unsigned register int i,reportee_count,flag=1;
	
	printf("Enter the Thundersoft Employee ID(Asociate code) to access the deatails\n");
	scanf("%s",entered_id);
	
	while(view_node!=NULL){
		if(strlen(entered_id)==strlen(view_node->id))
			if(strcmp(entered_id,view_node->id)){
				view_node=view_node->next;
				continue;
			}
			else
				break;
		else
			view_node=view_node->next;
	}
	if(view_node!=NULL){
	
	if(!(strcmp(view_node->status,"Active"))){
		printf("%20s\t:\t%s\n",first_node->id,view_node->id);
		printf("%20s\t:\t%s\n",first_node->name,view_node->name);
		printf("%20s\t:\t%s\n",first_node->email,view_node->email);
		printf("%20s\t:\t%s\n",first_node->band,view_node->band);
		printf("%20s\t:\t%s\n",first_node->date,view_node->date);
		printf("%20s\t:\t%s\n",first_node->mobile,view_node->mobile);
		printf("%20s\t:\t%s\n",first_node->manager,view_node->manager);
		
		if (view_node->reportees == "NA"){
			printf("%20s\t:\t%s\n",first_node->reportees,"NA");
		}
		else{
			printf("%20s\t:",first_node->reportees);
			//char* token = strtok(view_node->reportees, "//");
			strcpy(reportee_display,view_node->reportees);
			char* token = strtok(reportee_display, "//");
			
			//printf("\t%s\n", token);
			while (token != NULL) {
				if(flag){
					printf("\t%s\n", token);
					flag=0;
					}
				else{
					printf("\t\t\t\t%s\n", token);
					
				}
				token = strtok(NULL, "//");
				
			}
		}	
			
		printf("%20s\t:\t%s\n",first_node->techarea,view_node->techarea);
		printf("%20s\t:\t%s\n",first_node->project,view_node->project);
		printf("%20s\t:\t%s\n",first_node->status,view_node->status);
		printf("%20s\t:\t%s\n",first_node->employee_relieving_date,view_node->employee_relieving_date);
	}
	else{
		printf("Employee has been deleted \n");
		printf("%20s\t:\t%s\n",first_node->id,view_node->id);
		printf("%20s\t:\t%s\n",first_node->name,view_node->name);
		printf("%20s\t:\t%s\n",first_node->status,view_node->status);
		printf("%20s\t:\t%s\n",first_node->employee_relieving_date,view_node->employee_relieving_date);
	}
		printf("\n\n\n\n");
		//view_node=view_node->next;	
	}

	else
		printf("Employee ID doesn't exist\n");
	Start_Menu();
	//return;

}




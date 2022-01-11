
#include "view.h"

void view(){

	extern employee *head,*last;
	employee *view_node=head;
	
	char id[max_size];
	//char buf_char;
	//unsigned register int i,reportee_count;
	
	printf("\nEnter the Employee ID\n");
	scanf("%s",id);
	
	while(view_node!=NULL){
		if(strlen(id)==strlen(view_node->empid))
			if(strcmp(id,view_node->empid)){
				view_node=view_node->next;
				continue;
			}
			else
				break;
		else
			view_node=view_node->next;
	}
	if(view_node!=NULL){
		printf("%25s\t:\t%s\n",head->empid,view_node->empid);
		printf("%25s\t:\t%s\n",head->name,view_node->name);
		printf("%25s\t:\t%s\n",head->emailid,view_node->emailid);
		printf("%25s\t:\t%s\n",head->band,view_node->band);
		printf("%25s\t:\t%s\n",head->doj,view_node->doj);
		printf("%25s\t:\t%s\n",head->phoneno,view_node->phoneno);
		printf("%25s\t:\t%s\n",head->reporting_manager,view_node->reporting_manager);
		
		/*reportee_count=0;
		for(i=0;i<max_size;i++){
			buf_char=view_node->reportees[i];
			
			if(buf_char=='/'){
				printf("\n%20s[%d]\t:\t",head->reportees,1+reportee_count++);
				continue;	
			}
			else if(i==0)
				printf("%20s[%d]\t:\t",head->reportees,1+reportee_count++);
			printf("%c",buf_char);
		}
		printf("\n");*/
		printf("%25s\t:\t%s\n",head->techarea,view_node->techarea);
		printf("%25s\t:\t%s\n",head->project_info,view_node->project_info);
		printf("%25s\t:\t%s\n",head->status,view_node->status);
		printf("%25s\t:\t%s\n",head->relieving_date,view_node->relieving_date);
		printf("\n\n\n\n");
		view_node=view_node->next;	
	}
	

	else
		printf("Employee ID doesn't exist\n");
	main_menu();
	//return;

}




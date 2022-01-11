//#include "header.h"
#include "delete.h"
void delete(){

	extern employee *head,*last;
	employee *delete_node=head;
	unsigned char id[max_size],buf_char,deletion[max_size];
	unsigned register int i,reportee_count;
	
	printf("Enter the Employee ID to delete\n");
	scanf("%s",id);
	
	while(delete_node!=NULL){
		if(strlen(id)==strlen(delete_node->empid))
			if(strcmp(id,delete_node->empid)){
				delete_node=delete_node->next;
				continue;
			}
			else
				break;
		else
			delete_node=delete_node->next;
	}
	if(delete_node!=NULL){
		#if 0
		printf("%25s\t:\t\n","Details of the Employee to be deleted");
		printf("%25s\t:\t%s\n",head->empid,delete_node->empid);
		printf("%25s\t:\t%s\n",head->name,delete_node->name);
		printf("%25s\t:\t%s\n",head->emailid,delete_node->emailid);
		printf("%25s\t:\t%s\n",head->band,delete_node->band);
		printf("%25s\t:\t%s\n",head->doj,delete_node->doj);
		printf("%25s\t:\t%s\n",head->phoneno,delete_node->phoneno);
		printf("%25s\t:\t%s\n",head->reporting_manager,delete_node->reporting_manager);
		
		/*reportee_count=0;
		for(i=0;i<max_size;i++){
			buf_char=delete_node->reportees[i];
			
			if(buf_char==';'){
				printf("\n%20s[%d]\t:\t",head->reportees,1+reportee_count++);
				continue;	
			}
			else if(i==0)
				printf("%20s[%d]\t:\t",head->reportees,1+reportee_count++);
			printf("%c",buf_char);
		}
		printf("\n");*/
		printf("%25s\t:\t%s\n",head->techarea,delete_node->techarea);
		printf("%25s\t:\t%s\n",head->project_info,delete_node->project_info);
		printf("%25s\t:\t%s\n",head->status,delete_node->status);
		printf("%25s\t:\t%s\n",head->relieving_date,delete_node->relieving_date);
		printf("\n\n\n\n");
		#endif
		if(!(strcmp(delete_node->status,"Active")))
		{
			//printf("\n");
			//scanf("%s",deletion);
			strcpy(delete_node->status,"Resignation");	
			printf("\n%s is successfully resigned......\n",delete_node->empid);
		}
		else 
		{
			printf("\n\n\nEntered user is already RESIGNED or NOTISED\n\n\n");
			printf("%25s\t:\t\n","Details of the Employee to be deleted");
			printf("%25s\t:\t%s\n",head->empid,delete_node->empid);
			printf("%25s\t:\t%s\n",head->name,delete_node->name);
			printf("%25s\t:\t%s\n",head->emailid,delete_node->emailid);
			printf("%25s\t:\t%s\n",head->band,delete_node->band);
			printf("%25s\t:\t%s\n",head->doj,delete_node->doj);
			printf("%25s\t:\t%s\n",head->phoneno,delete_node->phoneno);
			printf("%25s\t:\t%s\n",head->reporting_manager,delete_node->reporting_manager);
		
		/*reportee_count=0;
		for(i=0;i<max_size;i++){
			buf_char=delete_node->reportees[i];
			
			if(buf_char==';'){
				printf("\n%20s[%d]\t:\t",head->reportees,1+reportee_count++);
				continue;	
			}
			else if(i==0)
				printf("%20s[%d]\t:\t",head->reportees,1+reportee_count++);
			printf("%c",buf_char);
		}
		printf("\n");*/
			printf("%25s\t:\t%s\n",head->techarea,delete_node->techarea);
			printf("%25s\t:\t%s\n",head->project_info,delete_node->project_info);
			printf("%25s\t:\t%s\n",head->status,delete_node->status);
			printf("%25s\t:\t%s\n",head->relieving_date,delete_node->relieving_date);
			printf("\n\n\n\n");
		}	
				
	}
	

	else
		printf("Employee ID doesn't exist\n");





	main_menu();
	//return;
}

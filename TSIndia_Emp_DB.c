//#include "header.h"
#include "TSIndia_Emp_DB.h"


employee *head=NULL,*last=NULL;

int count = 0;

void file_length()
{
	char ch;
	FILE *fp;
	fp = fopen("TSIndia_Emp_DB.xlsx","r");
	while(1)
	{
		ch = fgetc(fp);
		if(ch == '\n')
		{
			count++;
		}
		if(feof(fp))
		{
			break;
		}
	}
	fclose(fp);
	return ;
}


void read_db(){

	unsigned register int i,j,reportee_count;
	signed char buffer[max_size];
	//signed char file_access,buffer_char,buf_char,buffer_max[max_size];
	FILE *read_fp;
	employee *node=NULL;
	
	file_length();
	
	read_fp=fopen("TSIndia_Emp_DB.xlsx","r");
	
/*Linked List Creation*/
	
	
	for(i=0;i<count;i++){
	node=(employee*)malloc(sizeof(employee));
	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->empid,buffer);
	
	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->name,buffer);
	
	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->emailid,buffer);

	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->band,buffer);
	
	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->doj,buffer);
	
	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->phoneno,buffer);
	
	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->reporting_manager,buffer);

	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->reportees,buffer);
	
	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->techarea,buffer);
	
	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->project_info,buffer);

	
	
	fscanf(read_fp,"%[^\t]%*c",buffer);
	strcpy(node->status,buffer);
	
	
	fscanf(read_fp,"%[^\n]%*c",buffer);
	strcpy(node->relieving_date,buffer);
	
		
	
	node->next=NULL;
	
	if(head==NULL)
		head=last=node;
	else{
	
		last->next=node;
		last=node;
	
	}
	}

	fclose(read_fp);
	
	return;
	}
		
void write_db(){
	
	
	
	unsigned register int i,j,reportee_count;
	extern int count;
	signed char buffer[max_size];
	//signed char file_access,buffer_char,buf_char,buffer_max[max_size];
	FILE *write_fp;
	employee *access_node=NULL,*write_node=NULL;
	
	//printf("In the write fun count = %d",count);
	#if 1
	if (remove("TSIndia_Emp_DB.xlsx") == 0){
		printf("New File Created\n\n");
	}
	#endif
	
	write_fp=fopen("TSIndia_Emp_DB.xlsx","a");
	
	
	
	write_node=head;

	for(i=0;i<count;i++){
	strcpy(buffer,"\0");
	
	strcpy(buffer,write_node->empid);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->name);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->emailid);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->band);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->doj);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->phoneno);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->reporting_manager);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->reportees);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->techarea);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->project_info);
	fprintf(write_fp,"%s\t",buffer);
	
	
	strcpy(buffer,write_node->status);
	fprintf(write_fp,"%s\t",buffer);
	
	strcpy(buffer,write_node->relieving_date);
	fprintf(write_fp,"%s\n",buffer);
	
	
	
	
	access_node=write_node;
	write_node=write_node->next;
	free(access_node);

	
}
	
	fclose(write_fp);
	return;
}	

/*
	
	Header File
	
*/

#ifndef  headers 		// Maintains Single Copy 

#define headers
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h> 
	#include <time.h>
	
	#define max_size 350
	#pragma pack(1)

	 typedef struct employee
	{
		char empid[max_size];
		char name[max_size];
		char emailid[max_size];
		char band[max_size];
		char doj[max_size];
		//char date_employee_created[max_size];		// employee details added
		char phoneno[max_size]; 
		char reporting_manager[max_size];
		char reportees[max_size];
		char techarea[max_size];
		char project_info[max_size];	
		char status[max_size];
		char relieving_date[max_size];	// employee relieving date
		struct employee *next;
	}employee;


#endif

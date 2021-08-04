# 1 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2

# 1 "C:\\\\XCM\\\\CommonActions.h" 1



xcmLogin()
{
	lr_save_string("lt.xcmsolutions.com/xcmv2","P_URL");
	lr_think_time(2);
web_set_max_html_param_len("99999999");

	
   web_set_sockets_option("SSL_VERSION","TLS1.2");
	
	web_add_auto_header("Sec-Fetch-Site","none");

	web_add_auto_header("Sec-Fetch-Mode","navigate");

	web_add_auto_header("Sec-Fetch-Dest","document");

	web_add_auto_header("Sec-Fetch-User", "?1");

	web_add_auto_header("Upgrade-Insecure-Requests","1");
	
	web_add_header("Origin", 
		"https://{P_URL}");
	
	lr_start_transaction(lr_eval_string("{Scenario}_{ClientType}_{ScenarioPrepix}_Launch"));

		web_reg_find("Search=Body",
		"Text=Remember Email?",
		"LAST");

	web_url("xcmv2", 
		"URL=https://{P_URL}/account/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ClientType}_{ScenarioPrepix}_Launch"),2);

lr_think_time(2);

	(web_remove_auto_header("Sec-Fetch-User", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	 

	
	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");
	
	 
	web_reg_save_param("DelivaredName","LB=<label title=\"","RB=\">","LAST");
	
 web_reg_save_param("UserAssignID","LB=var loggedinuserid = ","RB=;","LAST");
 
	web_reg_save_param("C_firmId","LB=\"firmId\":","RB=,\"integrationId\":","LAST");

 
	web_reg_save_param("C_Loginid","lb=var loggedinuserid = ","rb=;","LAST");
	
	 
	 
	
	 

 
	 
	 
	 
	 
	 
	 

	web_reg_save_param("firmId","lb=\"firmId\":","rb=,\"firmName","LAST");
web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB/IC={xpid:\"",
		"RB/IC=\",licenseKey:",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/login*",
		"Notfound=warning",
		"LAST");
web_reg_save_param("C_UserID","LB=var loggedinuserid = ","RB=;","LAST");

web_reg_save_param_ex(
		"ParamName=c_loggedinuserid",
		"LB=    var loggedinuserid = ",
		"RB=;\r\n    var firmContext ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/xcmv2/*",
		"LAST");
		
		 
	web_reg_save_param("c_FirmID","LB=\"firmId\":","RB=,\"","LAST");
		
 
	web_reg_save_param_regexp(
		"ParamName=C_Userid",
		"RegExp=\\ \\ \\ \\ var\\ loggedinuserid\\ =\\ (.*?);\\\r\\\n\\ \\ \\ \\ var\\ firmContext\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/xcmv2/*",
		"LAST");
web_reg_save_param_ex(
		"ParamName=C_Firmid",
		"LB=firmContext.FirmSettingsContext.firmId == ",
		"RB=\r",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/xcmv2/*",
		"LAST");
web_reg_save_param_ex(
		"ParamName=c_loggedinuserid",
		"LB=    var loggedinuserid = ",
		"RB=;\r\n    var firmContext ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/xcmv2/*",
		"LAST");

	 
	
	web_reg_save_param("c_FirmID","LB=\"firmId\":","RB=,\"","LAST");

web_reg_save_param("c_FirmID","LB=\"firmId\":","RB=,\"","LAST");

web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB/IC={xpid:\"",
		"RB/IC=\",licenseKey:",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/login*",
		"Notfound=warning",
		"LAST");

 
	
  

 

web_reg_save_param_ex(
		"ParamName=c_checklist",
		"LB=item bucketcount ",
		"RB=\" href",
		"Ordinal=7",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/xcmv2/*",
		"LAST");
		
		web_reg_save_param("c_FirmID","LB=\"firmId\":","RB=,\"","LAST");
		
 

 

 
	
	web_reg_save_param("c_FirmID","LB=\"firmId\":","RB=,\"","LAST");
	
	 
	
 	 

web_reg_save_param("c_FirmID","LB=\"firmId\":","RB=,\"","LAST");
 
 
	 
	 
	 
	
	web_reg_save_param("C_firmId","lb=\"firmId\":","rb=,\"firmName","LAST");

	 
	 

	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");

	lr_save_string("Axcess@#xCm","P_Password");
lr_start_transaction(lr_eval_string("{Scenario}_{ClientType}_{ScenarioPrepix}_Login"));

	 

	web_submit_data("Login", 
		"Action=https://{P_URL}/Account/Login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://{P_URL}/Account/Login?ReturnUrl=%2Fxcmv2%2F", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=Email", "Value={P_Username}", "ENDITEM", 
		"Name=Password", "Value={P_Password}", "ENDITEM", 
		"Name=RememberMe", "Value=false", "ENDITEM", 
		"LAST");


	 web_url("task", 
		"URL= https://{P_URL}/api/task?query=%7B%22bucketName%22%3A%22TATM%22%7D", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer= https://{P_URL}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"https://login.xcmsolutions.com");

	web_custom_request("status", 
		"URL= https://{P_URL}/account/status?1610016448681", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer= https://{P_URL}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_url("userbuckets", 
		"URL= https://{P_URL}/api/task/userbuckets", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer= https://{P_URL}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST"); 

	(web_remove_auto_header("X-NewRelic-ID", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Search=Body",
		"Text=true",
		"LAST");

	web_url("MyView", 
		"URL= https://{P_URL}/api/task/taskcolumn/MyView", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer= https://{P_URL}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"LAST");
lr_end_transaction(lr_eval_string("{Scenario}_{ClientType}_{ScenarioPrepix}_Login"), 2);
	 
	
	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	return 0;
}


xcmLogout()
{
	
	lr_think_time(2);
lr_start_transaction(lr_eval_string("{Scenario}_{ClientType}_{ScenarioPrepix}_Logout"));
 

web_reg_find("Search=Body",
		"Text=Log in",
		"LAST");

	web_url("login_2", 
		"URL=https://{P_URL}/account/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"LAST");
	web_url("xcmv2_3", 
		"URL= https://{P_URL}/Account/Login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	
	lr_end_transaction(lr_eval_string("{Scenario}_{ClientType}_{ScenarioPrepix}_Logout"), 2);
	 
	 
	
	return 0;
}

# 9 "globals.h" 2

# 1 "C:\\\\XCM\\\\CommonfileltenvSML.h" 1



int i,j,k,l,m,n,y,f;
 

Utilities()

{
lr_think_time(2);
	web_set_max_html_param_len("99999");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Utilities"));	

	web_reg_find("Text=Administrator Utilities","SaveCount=utilities","Fail=NotFound","LAST");

	web_url("CPAUtilities", 
		"URL=https://lt.xcmsolutions.com/xcmv2/CPAUtilities", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"LAST");


	if(atoi(lr_eval_string("{utilities}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Utilities"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Utilities"),1);
	}

(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

return 0;	
	
}


ManageCustomGridSettings()
{
lr_think_time(2);
	web_set_max_html_param_len("99999");

web_reg_find("Text=Available Columns","SaveCount=ManageCustomGridSettings","Fail=NotFound","LAST");

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ManageCustomGridSettings"));

	web_url("CustomGridSetting", 
		"URL=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/CPAUtilities.aspx", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

 
 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("myview", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/customgridsettings/myview", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");

	if(atoi(lr_eval_string("{ManageCustomGridSettings}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ManageCustomGridSettings"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ManageCustomGridSettings"),1);
	}
return 0;
}

MyView()

{
	lr_think_time(2);
	web_set_max_html_param_len("99999");

	web_reg_find("Text=xcmv2","SaveCount=tasks","Fail=NotFound","LAST");

	(web_remove_auto_header("X-NewRelic-ID", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));



	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_MyView"));

	web_url("xcmv2_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CPAUtilities", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"LAST");

 
 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("task_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task?query=%7B%22bucketName%22%3A%22TATM%22%7D", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("status_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/account/status?1610021728924", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_url("userbuckets_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/userbuckets", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("MyView_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/taskcolumn/MyView", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"LAST");

	if(atoi(lr_eval_string("{tasks}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_MyView"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_MyView"),1);
	}

 
 

	
	 

return 0;

}

ViewName()

{
	lr_think_time(2);
web_set_max_html_param_len("99999");

web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(2);

	web_reg_find("Text=clientId","SaveCount=clientId","Fail=NotFound","LAST");

	web_reg_save_param("c_idrandom","LB={\"id\":","RB=,","ORD=All","LAST");



	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ViewName"));

	web_url("task_3",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task?query=%7B%22bucketName%22%3A%22TAXC%22%7D",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/",
		"Snapshot=t67.inf",
		"Mode=HTML",
		"LAST");
		
		lr_save_string(lr_paramarr_random("c_idrandom"),"c_id");

 
	web_convert_from_formatted("FormattedData=<LR_EXTENSION name=\"Base64\">{c_id}</LR_EXTENSION>", 
		"TargetParam=c_id_TOBASE64", 
		"LAST");

	web_url("MyView_3", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/taskcolumn/MyView", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"LAST");

	if(atoi(lr_eval_string("{clientId}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ViewName"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ViewName"),1);
	}
return 0;

}
	


ClientName()

{
lr_think_time(2);
	web_set_max_html_param_len("99999");
	web_reg_find("Text=view","SaveCount=view","Fail=NotFound","LAST");

	 


	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClientName"));

	web_url("routing",
		"URL=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t70.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=../wwwroot/assets/images/tharrow.png", "Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}", "ENDITEM",
		"LAST");

 
 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("userautosuggest",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/user/userautosuggest",
		"Method=GET",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"LAST");

	web_reg_save_param("C_associatedStatusId","LB=categoryId\":1,\"id\":","RB=},","LAST");
	
	for(n=1;n<=5;n++)
	{
	web_custom_request("1",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/controlsheet/{c_id}/1814518/1/1",
		"Method=GET",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"LAST");
	}
	
	web_url("document-template.html",
		"URL=https://lt.xcmsolutions.com/xcmv2/widget/template/cch/document-template.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}",
		"Snapshot=t73.inf",
		"Mode=HTML",
		"LAST");

	web_url("login-template.html",
		"URL=https://lt.xcmsolutions.com/xcmv2/widget/template/cch/login-template.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}",
		"Snapshot=t74.inf",
		"Mode=HTML",
		"LAST");

	web_url("file-template.html",
		"URL=https://lt.xcmsolutions.com/xcmv2/widget/template/file-template.html",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"LAST");

	if(atoi(lr_eval_string("{view}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClientName"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClientName"),1);
	}
	
return 0;
}
	

ClickHeadingPts()

{
	lr_think_time(2);
	web_set_max_html_param_len("99999");


	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickHeadingPts"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("point", 
		"URL=https://lt.xcmsolutions.com/xcmv2/point", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("2153034",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/prior/{c_id}",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/point",
		"Snapshot=t126.inf",
		"Mode=HTML",
		"LAST");

	web_url("points",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/points?query={c_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/point",
		"Snapshot=t127.inf",
		"Mode=HTML",
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("userautosuggest_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/user/userautosuggest", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/point", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"LAST");


	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickHeadingPts"),2);
return 0;
}
	

ClickHeadingDetails()


{
lr_think_time(2);
	web_set_max_html_param_len("99999");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickHeadingDetails"));

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=https://lt.xcmsolutions.com/xcmv2/task/details", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_find("Text=assignedBy","SaveCount=heading","Fail=NotFound","LAST");

	web_url("2153034_2",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/tasktrack/{c_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/task/details",
		"Snapshot=t132.inf",
		"Mode=HTML",
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_url("2153034_3",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/tasktrackatualtime/{c_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/task/details",
		"Snapshot=t133.inf",
		"Mode=HTML",
		"LAST");


	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickHeadingDetails"),2);
return 0;

}

ClickHeadingCkl()

{
lr_think_time(2);
	web_set_max_html_param_len("99999");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickHeadingCkl"));

	 
# 584 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	web_submit_data("checklists", 
		"Action=https://lt.xcmsolutions.com/xcmv2/api/checklists", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=associatedStatusId", "Value={C_associatedStatusId}", "ENDITEM", 
		"Name=completionDueOn", "Value=1/1/1900", "ENDITEM", 
		"Name=assignToAdmin", "Value=true", "ENDITEM", 
		"Name=assignedPersonId", "Value=0", "ENDITEM", 
		"Name=checklistDescription", "Value=<p>{P_ChekDsc}</p>", "ENDITEM", 
		"Name=taskId", "Value={c_id}", "ENDITEM", 
		"Name=checklistItem", "Value=", "ENDITEM", 
		"LAST");

	
	web_reg_save_param("C_StatusID","LB=</p>\",\"chktaskid\":\"","RB=\",\"clientName\"","ord=1","LAST");
	
	 
	
	web_reg_save_param("C_checklistid","LB=\"checklistStatus\":\"C\",\"checklistid\":","RB=,\"checklistsortingdata\"","LAST");
	
	web_url("checklists_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/checklists?query={c_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	 
# 637 "C:\\\\XCM\\\\CommonfileltenvSML.h"

	 

	web_url("checklists_3", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/checklists?query={c_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={c_id_TOBASE64}", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"LAST");



	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickHeadingCkl"),2);

 
return 0;
}



RestoreDefault()

{
lr_think_time(2);
web_set_max_html_param_len("999999");


	

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_RestoreDefault"));

	web_custom_request("myview_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/customgridsettings/add/default/myview", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"Snapshot=t311.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_RestoreDefault"),2);

	
	return 0;

}


SaveMyView_SearchButton()
{
lr_think_time(2);
web_set_max_html_param_len("999999");


lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SaveMyView_SearchButton"));

		
	 
	

	

	 
# 726 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	 
# 758 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	web_custom_request("myviewandSearch", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/customgridsettings/add/myviewandSearch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"ColumnHeader\":\"Client/Entity\",\"ColumnID\":1,\"ColumnMouseOver\":\"Client/Entity Name\",\"ColumnName\":\"Client/Entity\",\"ColumnUniqueID\":\"clientName\",\"ColumnWidth\":8,\"FirmID\":{C_firmId},\"GroupName\":\"Client\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":1},{\"ColumnHeader\":\"Number\",\"ColumnID\":2,\""
		"ColumnMouseOver\":\"Number\",\"ColumnName\":\"Number\",\"ColumnUniqueID\":\"clientAccountNumber\",\"ColumnWidth\":5,\"FirmID\":{C_firmId},\"GroupName\":\"Client\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":2},{\"ColumnHeader\":\"Type\",\"ColumnID\":3,\"ColumnMouseOver\":\"Task Type\",\"ColumnName\":\"Type of Task\",\""
		"ColumnUniqueID\":\"taskTypeName\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":3},{\"ColumnHeader\":\"PED\",\"ColumnID\":4,\"ColumnMouseOver\":\"Period End Date\",\"ColumnName\":\"Period End\",\"ColumnUniqueID\":\"periodEndDate\",\"ColumnWidth\":6,\"FirmID\":{C_firmId},\""
		"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":4},{\"ColumnHeader\":\"Cat.\",\"ColumnID\":5,\"ColumnMouseOver\":\"Category\",\"ColumnName\":\"Task Category\",\"ColumnUniqueID\":\"categoryId\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\""
		"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":5},{\"ColumnHeader\":\"Desc\",\"ColumnID\":6,\"ColumnMouseOver\":\"Description\",\"ColumnName\":\"Description\",\"ColumnUniqueID\":\"description\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\""
		"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":6},{\"ColumnHeader\":\"Status\",\"ColumnID\":7,\"ColumnMouseOver\":\"Current Status\",\"ColumnName\":\"Status\",\"ColumnUniqueID\":\"currentStatus\",\"ColumnWidth\":8,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,"
		"\"SortID\":7},{\"ColumnHeader\":\"Start Date\",\"ColumnID\":8,\"ColumnMouseOver\":\"Start Date\",\"ColumnName\":\"Start Date\",\"ColumnUniqueID\":\"start_on\",\"ColumnWidth\":6,\"FirmID\":{C_firmId},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":8},{\"ColumnHeader\":\"Due Date\",\"ColumnID\":9,\""
		"ColumnMouseOver\":\"Due Date\",\"ColumnName\":\"Due Date\",\"ColumnUniqueID\":\"due_on\",\"ColumnWidth\":6,\"FirmID\":{C_firmId},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":9},{\"ColumnHeader\":\"Last Chg\",\"ColumnID\":10,\"ColumnMouseOver\":\"Last Changed Date\",\"ColumnName\":\"Last Chg\",\""
		"ColumnUniqueID\":\"updated_on\",\"ColumnWidth\":10,\"FirmID\":{C_firmId},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":10},{\"ColumnHeader\":\"ADD\",\"ColumnID\":11,\"ColumnMouseOver\":\"Anticipated Delivery Date\",\"ColumnName\":\"Anticipated Delivery Date\",\"ColumnUniqueID\":\"anticipation_date\",\""
		"ColumnWidth\":6,\"FirmID\":{C_firmId},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":11},{\"ColumnHeader\":\"Who Has\",\"ColumnID\":12,\"ColumnMouseOver\":\"Who Has Task\",\"ColumnName\":\"Who Has\",\"ColumnUniqueID\":\"Full_assigned_name\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\""
		"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":12},{\"ColumnHeader\":\"Ext\",\"ColumnID\":13,\"ColumnMouseOver\":\"Extension Task\",\"ColumnName\":\"Ext\",\"ColumnUniqueID\":\"extensionTask\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Extension\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\""
		":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":13},{\"ColumnHeader\":\"Who Has Ext\",\"ColumnID\":14,\"ColumnMouseOver\":\"Who Has Extension\",\"ColumnName\":\"Who Has Ext\",\"ColumnUniqueID\":\"Full_ext_assigned_to_name\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Extension\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\""
		"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":14},{\"ColumnHeader\":\"Ori\",\"ColumnID\":15,\"ColumnMouseOver\":\"Originating Location\",\"ColumnName\":\"Originating Location\",\"ColumnUniqueID\":\"originatingLocation\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\""
		"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":15},{\"ColumnHeader\":\"Curr\",\"ColumnID\":16,\"ColumnMouseOver\":\"Current Location\",\"ColumnName\":\"Current Location\",\"ColumnUniqueID\":\"currentLocation\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\""
		":16},{\"ColumnHeader\":\"Pts\",\"ColumnID\":17,\"ColumnMouseOver\":\"Points\",\"ColumnName\":\"Issues & Points\",\"ColumnUniqueID\":\"points\",\"ColumnWidth\":2,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":17},{\"ColumnHeader\":\"Ckl\",\"ColumnID\":18,\"ColumnMouseOver\":\"Checklists\",\""
		"ColumnName\":\"Check List\",\"ColumnUniqueID\":\"checklists\",\"ColumnWidth\":2,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":18},{\"ColumnHeader\":\"DTL\",\"ColumnID\":19,\"ColumnMouseOver\":\"Details\",\"ColumnName\":\"Details\",\"ColumnUniqueID\":\"details\",\"ColumnWidth\":2,\"FirmID\""
		":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":19},{\"ColumnHeader\":\"P\",\"ColumnID\":20,\"ColumnMouseOver\":\"Priority\",\"ColumnName\":\"Priority\",\"ColumnUniqueID\":\"priority\",\"ColumnWidth\":2,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\""
		"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":20},{\"ColumnHeader\":\"D\",\"ColumnID\":21,\"ColumnMouseOver\":\"Difficulty\",\"ColumnName\":\"Difficulty\",\"ColumnUniqueID\":\"difficulty\",\"ColumnWidth\":2,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\""
		"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":21},{\"ColumnHeader\":\"Asmbly Instrn\",\"ColumnID\":83,\"ColumnMouseOver\":\"Assembly Instructions\",\"ColumnName\":\"Assembly Instructions\",\"ColumnUniqueID\":\"Assembly_Instructions\",\"ColumnWidth\":8,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\""
		"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":22},{\"ColumnHeader\":\"Linked Tasks\",\"ColumnID\":87,\"ColumnMouseOver\":\"Linked Tasks\",\"ColumnName\":\"Linked Tasks\",\"ColumnUniqueID\":\"Linked_Tasks\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\""
		":23},{\"ColumnHeader\":\"Del Count\",\"ColumnID\":86,\"ColumnMouseOver\":\"Deliverable Count\",\"ColumnName\":\"Deliverable Count\",\"ColumnUniqueID\":\"Deliverable_Count\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":24},{\"ColumnHeader\":\"Docs\",\"ColumnID\":89,\""
		"ColumnMouseOver\":\"Linked Documents\",\"ColumnName\":\"Linked Documents\",\"ColumnUniqueID\":\"Linked_Documents\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":25}]", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SaveMyView_SearchButton"),2);
return 0;	
}


PerformReLogout()

{
	
lr_think_time(2);
lr_start_transaction(lr_eval_string("{Scenario}_{ClientType}_{ScenarioPrepix}_{TN1}_PerformReLogout"));

web_reg_find("Search=Body",
		"Text=Log in",
		"LAST");

	web_url("login_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/account/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"LAST");
	web_url("xcmv2_3", 
		"URL= https://lt.xcmsolutions.com/xcmv2/Account/Login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	
	
	 
	lr_end_transaction(lr_eval_string("{Scenario}_{ClientType}_{ScenarioPrepix}_{TN1}_PerformReLogout"),2);
	
	return 0;
}


PerformReLogin()

{
lr_think_time(2);
web_set_max_html_param_len("999999");


 
	lr_save_string("Axcess@#xCm","P_Password");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_PerformReLogin"));

	web_submit_data("Login", 
		"Action=https://lt.xcmsolutions.com/xcmv2/Account/Login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/account/login", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=Email", "Value={P_Username}", "ENDITEM", 
		"Name=Password", "Value={P_Password}", "ENDITEM", 
		"Name=RememberMe", "Value=false", "ENDITEM", 
		"LAST");



		web_url("task", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task?query=%7B%22bucketName%22%3A%22TATM%22%7D", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	

	web_custom_request("status", 
		"URL=https://lt.xcmsolutions.com/xcmv2/account/status?1610016448681", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");
		
		for(y=1;y<=12;y++)

{

	web_url("userbuckets", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/userbuckets", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");
}
	(web_remove_auto_header("X-NewRelic-ID", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Search=Body",
		"Text=true",
		"LAST");

	web_url("MyView", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/taskcolumn/MyView", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_PerformReLogin"),2);
return 0;

}




AdvanceSearch()

{
lr_think_time(2);
web_set_max_html_param_len("999999");


 

web_reg_save_param("C_Tasktype","LB=,\"id\":","RB=},{\"Name\"","LAST");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Clickon AdvanceSearch"));

	 
# 952 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	web_url("search", 
		"URL=https://lt.xcmsolutions.com/xcmv2/search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Clickon AdvanceSearch"),2);
	

return 0;

}



SelectTaskSearch()



{

lr_think_time(2);

web_set_max_html_param_len("999999");


	 
	
	web_reg_save_param("C_Clientlist","LB=[{\"id\":","RB=,\"clientId","ord=all","Notfound=warning","LAST");
	
	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectTaskSearch"));


	 
# 1011 "C:\\\\XCM\\\\CommonfileltenvSML.h"

	 
# 1031 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	web_custom_request("results", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/results", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":{\"selected_staff\":\"1\",\"category\":\"1\",\"year\":\"2021\",\"task_type\":\"{C_Tasktype}\",\"keyword_search_pattern\":\"2\",\"keyword_search\":\"\",\"group\":\"0\",\"group_no_search_pattern\":\"1\",\"group_no\":\"\",\"periodenddate_from\":\"\",\"periodenddate_to\":\"\",\"priority\":\"0\",\"difficulty\":\"0\",\"who_has\":\"0\",\"projectedstartdate_from\":\"\",\"projectedstartdate_to\":\"\",\"extension_task_category\":\"1\",\"extension_status\":\"0\",\"orginal_duedate_from\":\"\","
		"\"orginal_duedate_to\":\"\",\"current_duedate_from\":\"\",\"current_duedate_to\":\"\",\"selected_role_users\":\"0\",\"selected_role\":\"0\",\"open_points\":false,\"open_checklist\":false,\"without_projected_start_date\":false,\"has_portal\":false,\"client_name\":\"0\",\"status\":\"0\",\"account_no\":\"0\",\"standard_jurisdiction\":\"0\",\"tsj\":\"0\",\"fsj\":\"0\",\"orginal_location\":\"0\",\"current_location\":\"0\",\"selected_rolestaff\":\"0\",\"includestatus\":true,\"includetasktype\":true,\""
		"QuicksrchID\":\"0\"},\"controlsettings\":[{\"FirmId\":{C_firmId},\"CategoryID\":1,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"TX\"},{\"FirmId\":{C_firmId},\"CategoryID\":2,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\""
		":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"FS\"},{\"FirmId\":{C_firmId},\"CategoryID\":3,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\""
		"Extension\":false,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OFA\"},{\"FirmId\":{C_firmId},\"CategoryID\":4,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OT\""
		"}]}","LAST");
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectTaskSearch"),2);

 
}

SelectClientMoveTask()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

	lr_save_string(lr_paramarr_random("C_Clientlist"),"ClientID");
	
	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectClientMoveTask"));

	web_url("workflowstate", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/workflowstate/?query={ClientID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("userautosuggest", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/user/userautosuggest", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("1", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/FirmSettings/statusbycategory/1", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("X-NewRelic-ID", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Search=Body",
		"Text=true",
		"LAST");

	web_custom_request("true", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/FirmSettings/getmanagestatusinfo/1/1/26/true", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectClientMoveTask"),2);
return 0;
	
}

ClickonBulkedit()

{
lr_think_time(2);

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickonBulkedit"));
	

	web_custom_request("false", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/FirmSettings/getmanagestatusinfo/1/1/26/false", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickonBulkedit"),2);
return 0;

}

Clickon_Save_Move()
{
	lr_think_time(2);
web_set_max_html_param_len("999999");

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Clickon_Save_Move"));
	
	web_url("movetask",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/signoffs/movetask?query=tid%3D{ClientID}%3Fcid%3D1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/search",
		"Snapshot=t58.inf",
		"Mode=HTML",
		"LAST");

	web_reg_find("Search=Body",
		"Text={\"exception\":\"OK\"",
		"LAST");

	web_custom_request("movetasks",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/workflowstate/movetasks",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/search",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[{\"BulkMoveMessage\":null,\"ClientAccountNumber\":\"\",\"IsActiveUser\":\"N\",\"IsPreparerId\":true,\"IsTaskOutsourced\":false,\"TaskDescription\":\"Move Complete test\",\"Ttl_Checklists\":9,\"Ttl_Points\":0,\"addorchangeTime\":0,\"assignedto\":\"Momin, Tawfiq\",\"assignedtoId\":123777,\"categoryId\":1,\"checklistsCount\":9,\"clientName\":\"ABC Daycare\",\"firmId\":0,\"fromstatus\":\"Preparation\",\"fromstatusId\":26,\"id\":{ClientID},\"lockStatus\":false,\"nextRoleId\":5,\"normalsignoffcount\":0,\"periodEndDate\":\"2018-12-31T00:00:00\",\"pointsCount\":0,\"previousRole\":\"Audit Manager\",\"previousRoleId\":5,\"requiredsignoffcount\":0,\"saveToWhomRoutingSheetRole\":true,\"selectedSignOffId\":0,\"selectedSignOffs\":null,\"signOffComment\":null,\"signoffprompt\":null,\"signoffs\":null,\"taskCategory\":\"TAX\",\"taskType\":\"1040\",\"taskTypeId\":1,\"tostatus\":\"Preparation\",\"tostatusId\":26,\"tostatusassignRule\":\"P\",\"warningsignoffcount\":0,\"allowMove\":false,\"blankUser\":false,\"isrepeat\":true"
		",\"lockstatus\":false,\"ismapped\":true,\"isbulkedited\":false,\"isbulkuser\":false,\"isadminstatus\":false,\"isactiveuser\":true}]",
		"LAST");

 
 

	

	web_url("0",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/autosuggestgroupsByid/0",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/search",
		"Snapshot=t60.inf",
		"Mode=HTML",
		"LAST");

	web_url("0_2",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/getusersById/0",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/search",
		"Snapshot=t61.inf",
		"Mode=HTML",
		"LAST");



	web_custom_request("GetTSJListById",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/GetTSJListById",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/search",
		"Snapshot=t62.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[\"0\"]",
		"LAST");

	web_custom_request("GetFSJListById",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/GetFSJListById",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/search",
		"Snapshot=t63.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[\"0\"]",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-NewRelic-ID", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

 
 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	web_reg_save_param_ex("paramname=C_ClientId","LB=\"clientId\":","RB=,\"categoryId\":","ordinal=all","Notfound=warning","LAST");

	web_custom_request("results", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/results", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":{\"selected_staff\":\"1\",\"category\":\"1\",\"year\":\"2021\",\"task_type\":\"{C_Tasktype}\",\"keyword_search_pattern\":\"2\",\"keyword_search\":\"\",\"group\":\"0\",\"group_no_search_pattern\":\"1\",\"group_no\":\"\",\"periodenddate_from\":\"\",\"periodenddate_to\":\"\",\"priority\":\"0\",\"difficulty\":\"0\",\"who_has\":\"0\",\"projectedstartdate_from\":\"\",\"projectedstartdate_to\":\"\",\"extension_task_category\":\"1\",\"extension_status\":\"0\",\"orginal_duedate_from\":\"\","
		"\"orginal_duedate_to\":\"\",\"current_duedate_from\":\"\",\"current_duedate_to\":\"\",\"selected_role_users\":\"0\",\"selected_role\":\"0\",\"open_points\":false,\"open_checklist\":false,\"without_projected_start_date\":false,\"has_portal\":false,\"client_name\":\"0\",\"status\":\"0\",\"account_no\":\"0\",\"standard_jurisdiction\":\"0\",\"tsj\":\"0\",\"fsj\":\"0\",\"orginal_location\":\"0\",\"current_location\":\"0\",\"selected_rolestaff\":\"0\",\"includestatus\":true,\"includetasktype\":true,\""
		"QuicksrchID\":\"0\"},\"controlsettings\":[{\"FirmId\":{C_firmId},\"CategoryID\":1,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"TX\"},{\"FirmId\":{C_firmId},\"CategoryID\":2,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\""
		":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"FS\"},{\"FirmId\":{C_firmId},\"CategoryID\":3,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\""
		"Extension\":false,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OFA\"},{\"FirmId\":{C_firmId},\"CategoryID\":4,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OT\""
		"}]}","LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Clickon_Save_Move"),2);
lr_output_message(" Usernameis %s Clientid is %s",lr_eval_string("{P_Username}"),lr_eval_string("{C_ClientId_count}"));

return 0;

}



SearchTab()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

	web_reg_find("Text=ColumnHeader","SaveCount=pagecontent_search","Fail=NotFound","LAST");

	 

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SearchTab"));

	web_url("search", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/customgridsettings/search", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	if(atoi(lr_eval_string("{pagecontent_search}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SearchTab"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SearchTab"),1);
	}
return 0;
}


 
# 1353 "C:\\\\XCM\\\\CommonfileltenvSML.h"
SelectFilterndSearch()
{
lr_think_time(2);
web_set_max_html_param_len("99999999");

 

	 

web_reg_save_param_ex("paramname=C_ClientId","LB=\"clientId\":","RB=,\"categoryId\":\"","ordinal=all","Notfound=Warning","LAST");

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectFilterndSearch"));
   
# 1380 "C:\\\\XCM\\\\CommonfileltenvSML.h"

web_custom_request("results", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/results", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":{\"selected_staff\":\"1\",\"category\":\"1\",\"year\":\"2021\",\"task_type\":\"{C_Tasktype}\",\"keyword_search_pattern\":\"2\",\"keyword_search\":\"\",\"group\":\"0\",\"group_no_search_pattern\":\"1\",\"group_no\":\"\",\"periodenddate_from\":\"\",\"periodenddate_to\":\"\",\"priority\":\"0\",\"difficulty\":\"0\",\"who_has\":\"0\",\"projectedstartdate_from\":\"\",\"projectedstartdate_to\":\"\",\"extension_task_category\":\"1\",\"extension_status\":\"0\",\"orginal_duedate_from\":\"\","
		"\"orginal_duedate_to\":\"\",\"current_duedate_from\":\"\",\"current_duedate_to\":\"\",\"selected_role_users\":\"0\",\"selected_role\":\"0\",\"open_points\":false,\"open_checklist\":false,\"without_projected_start_date\":false,\"has_portal\":false,\"client_name\":\"0\",\"status\":\"0\",\"account_no\":\"0\",\"standard_jurisdiction\":\"0\",\"tsj\":\"0\",\"fsj\":\"0\",\"orginal_location\":\"0\",\"current_location\":\"0\",\"selected_rolestaff\":\"0\",\"includestatus\":true,\"includetasktype\":true,\""
		"QuicksrchID\":\"0\"},\"controlsettings\":[{\"FirmId\":{C_firmId},\"CategoryID\":1,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"TX\"},{\"FirmId\":{C_firmId},\"CategoryID\":2,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\""
		":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"FS\"},{\"FirmId\":{C_firmId},\"CategoryID\":3,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\""
		"Extension\":false,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OFA\"},{\"FirmId\":{C_firmId},\"CategoryID\":4,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OT\""
		"}]}","LAST");


	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectFilterndSearch"),0);
lr_output_message(" Usernameis %s Clientid is %s",lr_eval_string("{P_Username}"),lr_eval_string("{C_ClientId_count}"));
return 0;
	}
	
ClickonReport()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

 

		lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickonReport"));

	web_reg_find("Search=Body",
		"Text=Profile",
		"LAST");

	web_url("reports", 
		"URL=https://lt.xcmsolutions.com/xcmv2/reports", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickonReport"),2);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");
return 0;
}


ClickBy_DeliverablesReport()

{
	lr_think_time(2);
web_set_max_html_param_len("999999");


web_reg_save_param("LocationId","LB=\"origLocationId\":","RB=,\"fiscalYear","LAST");
	
	 
	
	web_reg_save_param("AccountNum","LB=\"accountNo\":\"","RB=\",","LAST");
	
	
	 
	
	web_reg_save_param("FirmId","LB=\"firmId\":","RB=,\"accountNo\":","LAST");
		
	web_reg_find("Search=Body",
		"Text={\"results\":[{\"id\"",
		"LAST");
	
	web_url("quicksearchforclient", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/firmsettings/quicksearchforclient?term=a", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t866.inf", 
		"Mode=HTML", 
		"LAST");

		
	 
	web_reg_save_param_ex(
		"ParamName=UserId",
		"LB=id=\"ContentPlaceHolder1_HiddenfieldUserid\" value=\"",
		"RB=\" ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/DueDateByJurisdictionFiltr.aspx*",
		"LAST");
	
 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickBy_DeliverablesReport"));

	web_reg_find("Search=Body",
		"Text=All",
		"LAST");

	web_url("DueDateByJurisdictionFiltr.aspx", 
		"URL=https://lt.xcmsolutions.com/xcmv2/XCM/DueDateByJurisdictionFiltr.aspx", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/CPAReports.aspx", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://login.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

 
 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("{UserId}",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/user/getusersById/{UserId}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/DueDateByJurisdictionFiltr.aspx",
		"Snapshot=t19.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickBy_DeliverablesReport"),2);
return 0;

}



SelectAllyearRunReport()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

web_add_auto_header("Origin", 
		"https://login.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(2);

	web_reg_find("Search=Body",
		"Text=Due Date - Deliverables",
		"LAST");

	 
# 1585 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	 
# 1676 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
 





	web_reg_save_param_ex(
		"ParamName=__VIEWSTATEGENERATOR",
		"LB/IC=id=\"__VIEWSTATEGENERATOR\" value=\"",
		"RB/IC=\" ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 





	web_reg_save_param_ex(
		"ParamName=ControlID",
		"LB/IC=u0026ControlID=",
		"RB/IC=\\u0026OpType",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

web_reg_save_param("C_Viewstate","LB=\"hidden\" name=\"__VIEWSTATE\" id=\"__VIEWSTATE\" value=\"","RB=\"","LAST");
	
web_reg_save_param("C_EVENTVALIDATION","LB=\hidden\" name=\"__EVENTVALIDATION\" id=\"__EVENTVALIDATION\" value=\"","RB=\"","LAST");

 

web_set_max_html_param_len("999999");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectAllyearRunReport"));

	web_url("DueDateByJurisdictionReportViewer.aspx", 
		"URL=https://lt.xcmsolutions.com/xcmv2/XCM/DueDateByJurisdictionReportViewer.aspx?Category=0&OriginalLocation={OriginalLocation}&CurrentLocation=0&TaskType=0&WhoHasTask=0&CPAResponsible=0&TaxPartner=0&AuditPartner=0&TaxManager=0&AuditManager=0&TaxSenior=0&AuditSenior=0&TaxStaff=0&AuditStaff=0&Firmid={C_firmId}&FiscalYear=0&Status=0&DueDateReportMonth=0&DueDateReportYear=0&OriginalDueDateYear=&OriginalDueDateMonth=0&KeywordSearch=&PeriodEndFrom=&PeriodEndTo=&Return=0&Clients=1&UserId={UserId}&columntohide=--&"
		"CustReportname=DueDateByJurisdictionReport.rdl&reportname=DueDateByJurisdictionReport.rdl&MyClientsUser={UserId}&columnsetting=0&firmlevel=&Group=0&CompletedAfter=&CompletedBefore=&Archive=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/DueDateByJurisdictionFiltr.aspx", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("Reserved.ReportViewerWebControl.axd",
		"Action=https://lt.xcmsolutions.com/xcmv2/Reserved.ReportViewerWebControl.axd?OpType=SessionKeepAlive&ControlID={ControlID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/DueDateByJurisdictionReportViewer.aspx?Category=0&OriginalLocation={OriginalLocation}&CurrentLocation=0&TaskType=0&WhoHasTask=0&CPAResponsible=0&TaxPartner=0&AuditPartner=0&TaxManager=0&AuditManager=0&TaxSenior=0&AuditSenior=0&TaxStaff=0&AuditStaff=0&Firmid={C_firmId}&FiscalYear=0&Status=0&DueDateReportMonth=0&DueDateReportYear=0&OriginalDueDateYear=&OriginalDueDateMonth=0&KeywordSearch=&PeriodEndFrom=&PeriodEndTo=&Return=0&Clients=1&UserId={UserId}&columntohide=--&CustReportname=DueDateByJurisdictionReport.rdl&reportname=DueDateByJurisdictionReport.rdl&MyClientsUser={UserId}&columnsetting=0&firmlevel=&Group=0&CompletedAfter=&CompletedBefore=&Archive=0",
		"Snapshot=t2.inf",
		"Mode=HTML",
		"ITEMDATA",
		"LAST");

	web_add_header("X-MicrosoftAjax", 
		"Delta=true");

	web_submit_data("DueDateByJurisdictionReportViewer.aspx_2",
		"Action=https://lt.xcmsolutions.com/xcmv2/XCM/DueDateByJurisdictionReportViewer.aspx?Category=0&OriginalLocation={OriginalLocation}&CurrentLocation=0&TaskType=0&WhoHasTask=0&CPAResponsible=0&TaxPartner=0&AuditPartner=0&TaxManager=0&AuditManager=0&TaxSenior=0&AuditSenior=0&TaxStaff=0&AuditStaff=0&Firmid={C_firmId}&FiscalYear=0&Status=0&DueDateReportMonth=0&DueDateReportYear=0&OriginalDueDateYear=&OriginalDueDateMonth=0&KeywordSearch=&PeriodEndFrom=&PeriodEndTo=&Return=0&Clients=1&UserId={UserId}&columntohide=--&CustReportname=DueDateByJurisdictionReport.rdl&reportname=DueDateByJurisdictionReport.rdl&MyClientsUser={UserId}&columnsetting=0&firmlevel=&Group=0&CompletedAfter=&CompletedBefore=&Archive=0",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/DueDateByJurisdictionReportViewer.aspx?Category=0&OriginalLocation={OriginalLocation}&CurrentLocation=0&TaskType=0&WhoHasTask=0&CPAResponsible=0&TaxPartner=0&AuditPartner=0&TaxManager=0&AuditManager=0&TaxSenior=0&AuditSenior=0&TaxStaff=0&AuditStaff=0&Firmid={C_firmId}&FiscalYear=0&Status=0&DueDateReportMonth=0&DueDateReportYear=0&OriginalDueDateYear=&OriginalDueDateMonth=0&KeywordSearch=&PeriodEndFrom=&PeriodEndTo=&Return=0&Clients=1&UserId={UserId}&columntohide=--&CustReportname=DueDateByJurisdictionReport.rdl&reportname=DueDateByJurisdictionReport.rdl&MyClientsUser={UserId}&columnsetting=0&firmlevel=&Group=0&CompletedAfter=&CompletedBefore=&Archive=0",
		"Snapshot=t3.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=ScriptManager1", "Value=ScriptManager1|ReportViewer1$ctl09$Reserved_AsyncLoadTarget", "ENDITEM",
		"Name=__EVENTTARGET", "Value=ReportViewer1$ctl09$Reserved_AsyncLoadTarget", "ENDITEM",
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM",
		"Name=__VIEWSTATE", "Value={C_Viewstate}", "ENDITEM",
		"Name=__VIEWSTATEGENERATOR", "Value={__VIEWSTATEGENERATOR}", "ENDITEM",
		"Name=__EVENTVALIDATION", "Value={C_EVENTVALIDATION}", "ENDITEM",
		"Name=ReportViewer1$ctl03$ctl00", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl03$ctl01", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl10", "Value=ltr", "ENDITEM",
		"Name=ReportViewer1$ctl11", "Value=standards", "ENDITEM",
		"Name=ReportViewer1$AsyncWait$HiddenCancelField", "Value=False", "ENDITEM",
		"Name=ReportViewer1$ToggleParam$store", "Value=", "ENDITEM",
		"Name=ReportViewer1$ToggleParam$collapse", "Value=false", "ENDITEM",
		"Name=ReportViewer1$ctl05$ctl00$CurrentPage", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl05$ctl03$ctl00", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl08$ClientClickedId", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl07$store", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl07$collapse", "Value=false", "ENDITEM",
		"Name=ReportViewer1$ctl09$VisibilityState$ctl00", "Value=None", "ENDITEM",
		"Name=ReportViewer1$ctl09$ScrollPosition", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl09$ReportControl$ctl02", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl09$ReportControl$ctl03", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl09$ReportControl$ctl04", "Value=100", "ENDITEM",
		"Name=__ASYNCPOST", "Value=true", "ENDITEM",
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectAllyearRunReport"),2);
	
	 
return 0;
	
}





Click_RunReport()

{

lr_think_time(2);
web_set_max_html_param_len("999999");


 





	web_reg_save_param_ex(
		"ParamName=__VIEWSTATEGENERATOR",
		"LB/IC=id=\"__VIEWSTATEGENERATOR\" value=\"",
		"RB/IC=\" ",
		"SEARCH_FILTERS",
		"Scope=Body",
		 
		"LAST");
		
web_reg_save_param("C_Viewstate","LB=\"hidden\" name=\"__VIEWSTATE\" id=\"__VIEWSTATE\" value=\"","RB=\" />","LAST");

 
	
web_reg_save_param("C_EVENTVALIDATION","LB=\hidden\" name=\"__EVENTVALIDATION\" id=\"__EVENTVALIDATION\" value=\"","RB=\" />","LAST");

 
	web_reg_save_param_ex(
		"ParamName=C_ControlID",
		"LB=u0026ControlID=",
		"RB=\\u0026OpType",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");
		



 

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Click_RunReport"));
		

	 
# 1854 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	 
# 1864 "C:\\\\XCM\\\\CommonfileltenvSML.h"

	
	web_url("DetailTaskByFirmReportViewer.aspx",
		"URL=https://lt.xcmsolutions.com/xcmv2/XCM/DetailTaskByFirmReportViewer.aspx?SavedReportId=0&Category=1&OriginalLocation=1176&WhoHasTask=0&Status=0&TaskType=0&Account_Number=&Keyword=&PeriodEndFrom=&PeriodEndTo=&SubmitAfter=&SubmitBefore=&CPAResponsible=0&TaxPartner=0&AuditPartner=0&Manager=0&AuditManager=0&TaxSenior=0&AuditSenior=0&AuditStaff=0&TaxStaff=0&Group=0&CurrentLocation=0&fiscalyear=2020&Clients=1&columntohide=--&CompletedAfter=&CompletedBefore=&CustReportname=DetailTaskByFirm.rdl&reportname=DetailTaskByFirm.rdl&MyClientsUser={C_UserID}&columnsetting=0&firmlevel=&Archive=0&UserId={C_UserID}&FirmId={FirmId}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/CPADetailTaskByFirmReport.aspx",
		"Snapshot=t99.inf",
		"Mode=HTML",
		"LAST");
	
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://login.xcmsolutions.com");

 
 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("Reserved.ReportViewerWebControl.axd",
		"Action=https://lt.xcmsolutions.com/xcmv2/Reserved.ReportViewerWebControl.axd?OpType=SessionKeepAlive&ControlID={C_ControlID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/DetailTaskByFirmReportViewer.aspx?SavedReportId=0&Category=0&OriginalLocation={LocationId}&WhoHasTask=0&Status=0&TaskType=0&Account_Number=&Keyword=&PeriodEndFrom=&PeriodEndTo=&SubmitAfter=&SubmitBefore=&CPAResponsible=0&TaxPartner=0&AuditPartner=0&Manager=0&AuditManager=0&TaxSenior=0&AuditSenior=0&AuditStaff=0&TaxStaff=0&Group=0&CurrentLocation=0&fiscalyear=2022&Clients=1&columntohide=--&CompletedAfter=&CompletedBefore=&CustReportname=DetailTaskByFirm.rdl&reportname=DetailTaskByFirm.rdl&MyClientsUser={C_UserID}&columnsetting=0&firmlevel=&Archive=0&UserId={C_UserID}&FirmId=697",
		"Snapshot=t26.inf",
		"Mode=HTML",
		"ITEMDATA",
		"LAST");

	web_add_header("X-MicrosoftAjax", 
		"Delta=true");

	web_submit_data("DetailTaskByFirmReportViewer.aspx_2",
		"Action=https://lt.xcmsolutions.com/xcmv2/XCM/DetailTaskByFirmReportViewer.aspx?SavedReportId=0&Category=0&OriginalLocation={LocationId}&WhoHasTask=0&Status=0&TaskType=0&Account_Number=&Keyword=&PeriodEndFrom=&PeriodEndTo=&SubmitAfter=&SubmitBefore=&CPAResponsible=0&TaxPartner=0&AuditPartner=0&Manager=0&AuditManager=0&TaxSenior=0&AuditSenior=0&AuditStaff=0&TaxStaff=0&Group=0&CurrentLocation=0&fiscalyear=2022&Clients=1&columntohide=--&CompletedAfter=&CompletedBefore=&CustReportname=DetailTaskByFirm.rdl&reportname=DetailTaskByFirm.rdl&MyClientsUser={C_UserID}&columnsetting=0&firmlevel=&Archive=0&UserId={C_UserID}&FirmId=697",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/DetailTaskByFirmReportViewer.aspx?SavedReportId=0&Category=0&OriginalLocation={LocationId}&WhoHasTask=0&Status=0&TaskType=0&Account_Number=&Keyword=&PeriodEndFrom=&PeriodEndTo=&SubmitAfter=&SubmitBefore=&CPAResponsible=0&TaxPartner=0&AuditPartner=0&Manager=0&AuditManager=0&TaxSenior=0&AuditSenior=0&AuditStaff=0&TaxStaff=0&Group=0&CurrentLocation=0&fiscalyear=2022&Clients=1&columntohide=--&CompletedAfter=&CompletedBefore=&CustReportname=DetailTaskByFirm.rdl&reportname=DetailTaskByFirm.rdl&MyClientsUser={C_UserID}&columnsetting=0&firmlevel=&Archive=0&UserId={C_UserID}&FirmId=697",
		"Snapshot=t27.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=ScriptManager2", "Value=ScriptManager2|ReportViewer1$ctl09$Reserved_AsyncLoadTarget", "ENDITEM",
		"Name=__EVENTTARGET", "Value=ReportViewer1$ctl09$Reserved_AsyncLoadTarget", "ENDITEM",
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM",
		"Name=__VIEWSTATE", "Value={C_Viewstate}", "ENDITEM",
		"Name=__VIEWSTATEGENERATOR", "Value={__VIEWSTATEGENERATOR}", "ENDITEM",
		"Name=__EVENTVALIDATION", "Value={C_EVENTVALIDATION}", "ENDITEM",
		"Name=ReportViewer1$ctl03$ctl00", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl03$ctl01", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl10", "Value=ltr", "ENDITEM",
		"Name=ReportViewer1$ctl11", "Value=standards", "ENDITEM",
		"Name=ReportViewer1$AsyncWait$HiddenCancelField", "Value=False", "ENDITEM",
		"Name=ReportViewer1$ToggleParam$store", "Value=", "ENDITEM",
		"Name=ReportViewer1$ToggleParam$collapse", "Value=false", "ENDITEM",
		"Name=ReportViewer1$ctl05$ctl00$CurrentPage", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl05$ctl03$ctl00", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl08$ClientClickedId", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl07$store", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl07$collapse", "Value=false", "ENDITEM",
		"Name=ReportViewer1$ctl09$VisibilityState$ctl00", "Value=None", "ENDITEM",
		"Name=ReportViewer1$ctl09$ScrollPosition", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl09$ReportControl$ctl02", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl09$ReportControl$ctl03", "Value=", "ENDITEM",
		"Name=ReportViewer1$ctl09$ReportControl$ctl04", "Value=100", "ENDITEM",
		"Name=__ASYNCPOST", "Value=true", "ENDITEM",
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Click_RunReport"),2);
	
	 

return 0;

}


	
	 


Click_schedular()

{
	lr_think_time(2);
web_set_max_html_param_len("999999");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Click_schedular"));

	
	 
	 
 

	web_url("oldras", 
		"URL=https://lt.xcmsolutions.com/xcmv2/oldras", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");


	
	web_url("SaveFilterTable_new.aspx", 
		"URL=https://lt.xcmsolutions.com/xcmv2/XCM/SaveFilterTable_new.aspx?Search_page=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/Schedule_ResourceAllocation_new.aspx", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Click_schedular"),2);
return 0;


}


Click_Search_RAS()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Click_Search_RAS"));

	

	web_url("search", 
		"URL=https://lt.xcmsolutions.com/xcmv2/search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/oldras", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Click_Search_RAS"),2);
return 0;


}

Choose_Tax_in_Task_categoty()

{

web_set_max_html_param_len("999999");

	 


	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Choose_Tax_in_Task_categoty"));

 
 


	web_custom_request("results", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/results", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":{\"selected_staff\":\"1\",\"category\":\"4\",\"year\":\"2021\",\"task_type\":\"{C_Tasktype}\",\"keyword_search_pattern\":\"2\",\"keyword_search\":\"\",\"group\":\"0\",\"group_no_search_pattern\":\"1\",\"group_no\":\"\",\"periodenddate_from\":\"\",\"periodenddate_to\":\"\",\"priority\":\"0\",\"difficulty\":\"0\",\"who_has\":\"0\",\"projectedstartdate_from\":\"\",\"projectedstartdate_to\":\"\",\"extension_task_category\":\"1\",\"extension_status\":\"0\",\"orginal_duedate_from\":\"\","
		"\"orginal_duedate_to\":\"\",\"current_duedate_from\":\"\",\"current_duedate_to\":\"\",\"selected_role_users\":\"0\",\"selected_role\":\"0\",\"open_points\":false,\"open_checklist\":false,\"without_projected_start_date\":false,\"has_portal\":false,\"client_name\":\"0\",\"status\":\"0\",\"account_no\":\"0\",\"standard_jurisdiction\":\"0\",\"tsj\":\"0\",\"fsj\":\"0\",\"orginal_location\":\"0\",\"current_location\":\"0\",\"selected_rolestaff\":\"0\",\"includestatus\":true,\"includetasktype\":true,\""
		"QuicksrchID\":\"0\"},\"controlsettings\":[{\"FirmId\":{C_firmId},\"CategoryID\":1,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"TX\"},{\"FirmId\":{C_firmId},\"CategoryID\":2,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\""
		":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"FS\"},{\"FirmId\":{C_firmId},\"CategoryID\":3,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\""
		"Extension\":false,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OFA\"},{\"FirmId\":{C_firmId},\"CategoryID\":4,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OT\""
		"}]}","LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Choose_Tax_in_Task_categoty"),2);
return 0;

}



Choose_Others_in_Task_categoty()

{
lr_think_time(2);
web_set_max_html_param_len("99999");
	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Choose_Others_in_Task_categoty"));

 
 
	
	web_custom_request("results", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/results", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":{\"selected_staff\":\"1\",\"category\":\"4\",\"year\":\"2021\",\"task_type\":\"{C_Tasktype}\",\"keyword_search_pattern\":\"2\",\"keyword_search\":\"\",\"group\":\"0\",\"group_no_search_pattern\":\"1\",\"group_no\":\"\",\"periodenddate_from\":\"\",\"periodenddate_to\":\"\",\"priority\":\"0\",\"difficulty\":\"0\",\"who_has\":\"0\",\"projectedstartdate_from\":\"\",\"projectedstartdate_to\":\"\",\"extension_task_category\":\"1\",\"extension_status\":\"0\",\"orginal_duedate_from\":\"\","
		"\"orginal_duedate_to\":\"\",\"current_duedate_from\":\"\",\"current_duedate_to\":\"\",\"selected_role_users\":\"0\",\"selected_role\":\"0\",\"open_points\":false,\"open_checklist\":false,\"without_projected_start_date\":false,\"has_portal\":false,\"client_name\":\"0\",\"status\":\"0\",\"account_no\":\"0\",\"standard_jurisdiction\":\"0\",\"tsj\":\"0\",\"fsj\":\"0\",\"orginal_location\":\"0\",\"current_location\":\"0\",\"selected_rolestaff\":\"0\",\"includestatus\":true,\"includetasktype\":true,\""
		"QuicksrchID\":\"0\"},\"controlsettings\":[{\"FirmId\":{C_firmId},\"CategoryID\":1,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"TX\"},{\"FirmId\":{C_firmId},\"CategoryID\":2,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\""
		":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"FS\"},{\"FirmId\":{C_firmId},\"CategoryID\":3,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\""
		"Extension\":false,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OFA\"},{\"FirmId\":{C_firmId},\"CategoryID\":4,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OT\""
		"}]}","LAST");

lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Choose_Others_in_Task_categoty"),2);

lr_output_message(" Usernameis %s Clientid is %s",lr_eval_string("{P_Username}"),lr_eval_string("{C_ClientId_count}"));
return 0;


}





CLICK_SBE()

{

lr_think_time(2);
web_set_max_html_param_len("999999");

web_reg_find("Text=ResourceAllocation","SaveCount=ResourceAllocation","Fail=NotFound","LAST");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBE"));

	web_url("sbe", 
		"URL=https://lt.xcmsolutions.com/xcmv2/sbe", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/Schedule_ResourceAllocation_new.aspx", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

 
 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("savedsearch", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/savedsearch", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_clientId",
		"QueryString=$.bookinglist[1].clientId",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("timelinedata", 
		"Action=https://lt.xcmsolutions.com/xcmv2/api/scheduler/timelinedata", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=byEmployees", "Value=0", "ENDITEM", 
		"Name=byLocations", "Value=", "ENDITEM", 
		"Name=byDepartments", "Value=0", "ENDITEM", 
		"Name=byTitles", "Value=0", "ENDITEM", 
		"Name=viewtype", "Value=sbeland", "ENDITEM", 
		"LAST");

	web_custom_request("2020", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/firmholidays/2020", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("2022", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/firmholidays/2022", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	(web_remove_auto_header("X-NewRelic-ID", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_url("sbe_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/sbe?popup=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

 
 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("savedsearch_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/savedsearch", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe?popup=true", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("timelinedata_2", 
		"Action=https://lt.xcmsolutions.com/xcmv2/api/scheduler/timelinedata", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe?popup=true", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=byEmployees", "Value=0", "ENDITEM", 
		"Name=byLocations", "Value=", "ENDITEM", 
		"Name=byDepartments", "Value=0", "ENDITEM", 
		"Name=byTitles", "Value=0", "ENDITEM", 
		"Name=viewtype", "Value=sbeland", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

 
 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("2020_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/firmholidays/2020", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe?popup=true", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("2022_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/firmholidays/2022", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe?popup=true", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	if(atoi(lr_eval_string("{ResourceAllocation}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBE"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBE"),1);
	}

return 0;
}



UPDATE_RAS_INFO()

{
lr_think_time(2);
web_set_max_html_param_len("999999");


	web_reg_find("Text=SBTshowTask","SaveCount=SBTshowTask","Fail=NotFound","LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

 
 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(2);

	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_UPDATE_RAS_INFO"));

	web_submit_data("update",
		"Action=https://lt.xcmsolutions.com/xcmv2/api/scheduler/calusersettings/update",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe?popup=true",
		"Snapshot=t32.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=cellWidth", "Value=50", "ENDITEM",
		"Name=DaysToShow", "Value=30", "ENDITEM",
		"Name=eventBubble", "Value=true", "ENDITEM",
		"Name=SBTshowTask", "Value=false", "ENDITEM",
		"Name=eventHeight", "Value=40", "ENDITEM",
		"Name=groupConcurrentEvents", "Value=false", "ENDITEM",
		"Name=scale", "Value=Day", "ENDITEM",
		"Name=availabilityBar", "Value=number", "ENDITEM",
		"Name=showRasInfo", "Value=true", "ENDITEM",
		"Name=id", "Value=9615", "ENDITEM",
		"Name=firmId", "Value={c_FirmID}", "ENDITEM",
		"Name=updatedOn", "Value={p_updatedOn}", "ENDITEM",
		"Name=userId", "Value={c_loggedinuserid}", "ENDITEM",
		"Name=showRoles", "Value=0", "ENDITEM",
		"Name=defaultYear", "Value=2021", "ENDITEM",
		"LAST");

	if(atoi(lr_eval_string("{SBTshowTask}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_UPDATE_RAS_INFO"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_UPDATE_RAS_INFO"),1);
	}
return 0;
}


SCHEDULER_FORECAST_REPORT()

{
	
	lr_think_time(2);
web_set_max_html_param_len("999999");

	web_reg_find("Text=Scheduler Forecast","SaveCount=forecast","Fail=NotFound","LAST");

	 



	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SCHEDULER_FORECAST_REPORT"));

	web_url("SBEReport", 
		"URL=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

 
 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("lookupdata", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/lookupdata", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("jobcode", 
		"URL=https://lt.xcmsolutions.com/xcmv2//api/scheduler/jobcode", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=html", 
		"LAST");

	if(atoi(lr_eval_string("{forecast}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SCHEDULER_FORECAST_REPORT"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SCHEDULER_FORECAST_REPORT"),1);
	}
return 0;

}

RUN_SUMMARY_REPORT()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_RUN_SUMMARY_REPORT"));

	web_custom_request("2021", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/firmholidays/2020", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	web_custom_request("calsettings", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/calsettings", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=\"942,943,1420,1432,2639\"", 
		"LAST");

	web_reg_find("Text=reportData","SaveCount=branchName","Fail=NotFound","LAST");

	web_custom_request("search", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/sbe/report/search", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"selectedStaff\":\"0\",\"reportType\":\"s+ummary\",\"calStartdate\":\"{p_calDate}\",\"calEnddate\":\"{p_calDate}\",\"reportDateType\":\"0\",\"bookingTotalsBy\":\"0\",\"clientEntity\":\"0\",\"category\":\"1,2,3,8,4,12,13\",\"clientNumber\":\"0\",\"categoryType\":\"0\",\"keywordmatch\":\"0\",\"keywordvalue\":\"0\",\"fiscalYear\":\"2020\",\"clientGroup\":\"0\",\"status\":\"0\",\"originatingLocation\":\"0\",\"showTasks\":\"0\",\"fromPeriodEnd\":\"0\",\"toPeriodEnd\":\"0\",\"fromcurrentduedate\":\""
		"0\",\"tocurrentduedate\":\"0\",\"jobCode\":\"0\",\"role\":\"0\",\"showBookings\":\"0\",\"userid\":\"0\",\"userlocationid\":\"942,943,1420,1432,2639\",\"rasinfo\":\"0\",\"title\":\"0\",\"nichegroup\":\"0\",\"expertise\":\"0\",\"industrygroup\":\"0\",\"department\":\"0\",\"availability\":\"0\",\"projectedstartdate\":\"0\",\"projectedenddate\":\"0\",\"remhours\":\"0\",\"overunderbudget\":\"0\",\"usertype\":\"0\",\"Type\":\"\",\"priority\":\"0\",\"summary\":\"0\",\"includestatus\":true,\"experties\":"
		"\"0\",\"includecategoryType\":true,\"type\":\"SBE\",\"primaryrole\":\"0\",\"departments\":\"0\"}", 
		"LAST");

	if(atoi(lr_eval_string("{branchName}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_RUN_SUMMARY_REPORT"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_RUN_SUMMARY_REPORT"),1);
	}
return 0;

}

H_RUN_DETAILED_REPORT()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_H_RUN_DETAILED_REPORT"));

	web_custom_request("2021_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/firmholidays/2021", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	web_custom_request("calsettings_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/calsettings", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=\"942,943,1420,1432,2639\"", 
		"LAST");

	web_reg_find("Text=reportData","SaveCount=branchid","Fail=NotFound","LAST");
	
	web_custom_request("search_2",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/sbe/report/search", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbe/SBEReport", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"selectedStaff\":\"0\",\"reportType\":\"detailed\",\"calStartdate\":\"{p_calDate}\",\"calEnddate\":\"{p_calDate}\",\"reportDateType\":\"0\",\"bookingTotalsBy\":\"0\",\"clientEntity\":\"0\",\"category\":\"1,2,3,8,4,12,13\",\"clientNumber\":\"0\",\"categoryType\":\"0\",\"keywordmatch\":\"0\",\"keywordvalue\":\"0\",\"fiscalYear\":\"2020\",\"clientGroup\":\"0\",\"status\":\"0\",\"originatingLocation\":\"0\",\"showTasks\":\"0\",\"fromPeriodEnd\":\"0\",\"toPeriodEnd\":\"0\",\"fromcurrentduedate\":"
		"\"0\",\"tocurrentduedate\":\"0\",\"jobCode\":\"0\",\"role\":\"0\",\"showBookings\":\"0\",\"userid\":\"0\",\"userlocationid\":\"942,943,1420,1432,2639\",\"rasinfo\":\"0\",\"title\":\"0\",\"nichegroup\":\"0\",\"expertise\":\"0\",\"industrygroup\":\"0\",\"department\":\"0\",\"availability\":\"0\",\"projectedstartdate\":\"0\",\"projectedenddate\":\"0\",\"remhours\":\"0\",\"overunderbudget\":\"0\",\"usertype\":\"0\",\"Type\":\"\",\"priority\":\"0\",\"summary\":\"1\",\"includestatus\":true,\"experties\""
		":\"0\",\"includecategoryType\":true,\"type\":\"SBE\",\"primaryrole\":\"0\",\"departments\":\"0\"}", 
		"LAST");

	if(atoi(lr_eval_string("{branchid}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_H_RUN_DETAILED_REPORT"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_H_RUN_DETAILED_REPORT"),1);
	}
return 0;
}

CLICK_SBT()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

	lr_think_time(2);
	
	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBT"));

	web_url("sbt", 
		"URL=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"LAST");

 
 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Text=DaysToShow","SaveCount=DaysToShow","Fail=NotFound","LAST");

	web_url("calusersettings", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/calusersettings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("savedsearch_4", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/savedsearch", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("resource", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/resource", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=\"942,943,1420,1432,2639\"", 
		"LAST");

	web_url("quicksearch", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/firmsettings/quicksearch?term=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("quicksearch_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/firmsettings/quicksearch?term=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"LAST");
	
	if(atoi(lr_eval_string("{DaysToShow}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBT"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBT"),1);
	}
return 0;
}

	


CLICK_SBT_SEARCH()

{
lr_think_time(2);
web_set_max_html_param_len("999999");

web_reg_find("Text=settings","SaveCount=settings","Fail=NotFound","LAST");

	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBT_SEARCH"));

	web_custom_request("taskdeatails",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/sbt/taskdeatails",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true",
		"Snapshot=t63.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"periodend\":\"2020\",\"tasklocation\":\"0\",\"category\":\"0\",\"clientid\":\"{c_clientId}\",\"tasktype\":\"0\",\"taskid\":\"0\",\"startdate\":\"{p_startdate}\",\"enddate\":\"{p_enddate}\",\"myclient\":\"0\",\"clientGroup\":\"0\"}",
		"LAST");

	if(atoi(lr_eval_string("{settings}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBT_SEARCH"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_CLICK_SBT_SEARCH"),1);
	}
	
	
return 0;
}



ScheduleByTask()

{
	lr_think_time(2);

web_set_max_html_param_len("99999");


	web_reg_find("Text=Schedule By Task","SaveCount=SBT","Fail=NotFound","LAST");

	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ScheduleByTask"));

	web_url("sbt", 
		"URL=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/Schedule_ResourceAllocation_new.aspx", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("calusersettings", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/calusersettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_custom_request("resource", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/resource", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=\"942,943,1420,1432,2639\"", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("savedsearch", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/savedsearch", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"LAST");
for(f=1;f<=30;f++)
	{
	web_url("quicksearch", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/firmsettings/quicksearch?term=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("quicksearch_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/firmsettings/quicksearch?term=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");
}

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ScheduleByTask"),2);

return 0;
}
TaskCalenderReport()

{
lr_think_time(2);
web_set_max_html_param_len("99999");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(10);

	web_reg_find("Text=results","SaveCount=results","Fail=NotFound","LAST");

	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_TaskCalenderReport"));

	web_url("quicksearch_4", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/firmsettings/quicksearch?term=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("SBTreport", 
		"URL=https://lt.xcmsolutions.com/xcmv2/sbt/SBTreport", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt?popup=true", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("jobcode", 
		"URL=https://lt.xcmsolutions.com/xcmv2//api/scheduler/jobcode", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt/SBTreport", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=html", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));

	web_custom_request("lookupdata", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/lookupdata", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt/SBTreport", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_TaskCalenderReport"),2);

return 0;
}
ClickRun()

{
lr_think_time(2);
web_set_max_html_param_len("99999");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(10);

	web_reg_find("Text=workinghrs","SaveCount=run","Fail=NotFound","LAST");

	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickRun"));

	web_custom_request("calsettings", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/calsettings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt/SBTreport", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=\"942,943,1420,1432,2639\"", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_custom_request("2021", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/firmholidays/2021", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt/SBTreport", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_custom_request("search", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/scheduler/sbt/report/search", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/sbt/SBTreport", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"type\":\"SBT\",\"selectedStaff\":\"1\",\"reportType\":\"detailed\",\"departments\":\"\",\"calStartdate\":\"{startendDate}\",\"calEnddate\":\"{p_enddate}\",\"reportDateType\":\"1\",\"bookingTotalsBy\":\"month\",\"clientEntity\":\"\",\"category\":\"1\",\"clientNumber\":\"0\",\"categoryType\":\"0\",\"taskTypeToInclude\":\"\",\"keywordmatch\":\"3\",\"keywordvalue\":\"0\",\"fiscalYear\":\"0\",\"clientGroup\":\"666666\",\"status\":\"0\",\"statusToInclude\":\"\",\"originatingLocation\":\"0\",\""
		"showTasks\":\"1\",\"fromPeriodEnd\":\"0\",\"toPeriodEnd\":\"0\",\"fromcurrentduedate\":\"0\",\"tocurrentduedate\":\"0\",\"jobCode\":\"0\",\"role\":\"2\",\"showBookings\":\"0\",\"summary\":\"1\",\"bookingStatus\":\"R,T,C\",\"includecategoryType\":true,\"includestatus\":true}", 
		"LAST");

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickRun"),2);
return 0;

}




SelectFieldndSaveforSearchndMyView()

{
lr_think_time(2);
web_set_max_html_param_len("99999");

web_reg_find("Text=Success","SaveCount=SearchndMyView","Fail=NotFound","LAST");

 
 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);

	 
	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectFieldndSaveforSearchndMyView"));

	web_custom_request("myviewandSearch",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/customgridsettings/add/myviewandSearch",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting",
		"Snapshot=t17.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[{\"ColumnHeader\":\"Client/Entity\",\"ColumnID\":1,\"ColumnMouseOver\":\"Client/Entity Name\",\"ColumnName\":\"Client/Entity\",\"ColumnUniqueID\":\"clientName\",\"ColumnWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Client\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":1},{\"ColumnHeader\":\"Number\",\"ColumnID\":2,\"ColumnMouseOver\":\"Number\",\"ColumnName\":\"Number\",\"ColumnUniqueID\":\"clientAccountNumber\",\"ColumnWidth\":5,\"FirmID\":{c_FirmID},\"GroupName\":\"Client\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":2},{\"ColumnHeader\":\"Type\",\"ColumnID\":3,\"ColumnMouseOver\":\"Task Type\",\"ColumnName\":\"Type of Task\",\"ColumnUniqueID\":\"taskTypeName\",\"Colum"
		"nWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":3},{\"ColumnHeader\":\"PED\",\"ColumnID\":4,\"ColumnMouseOver\":\"Period End Date\",\"ColumnName\":\"Period End\",\"ColumnUniqueID\":\"periodEndDate\",\"ColumnWidth\":6,\"FirmID\":{c_FirmID},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":4},{\"ColumnHeader\":\"Cat.\",\"ColumnID\":5,\"ColumnMouseOver\":\"Category\",\"ColumnName\":\"Task Category\",\"ColumnUniqueID\":\"categoryId\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":fals"
		"e,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":5},{\"ColumnHeader\":\"Desc\",\"ColumnID\":6,\"ColumnMouseOver\":\"Description\",\"ColumnName\":\"Description\",\"ColumnUniqueID\":\"description\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":6},{\"ColumnHeader\":\"Status\",\"ColumnID\":7,\"ColumnMouseOver\":\"Current Status\",\"ColumnName\":\"Status\",\"ColumnUniqueID\":\"currentStatus\",\"ColumnWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":7},{\"ColumnHeader\":\"Start Date\",\"ColumnID\":8,\"ColumnMouseOver\":\"Start Date"
		"\",\"ColumnName\":\"Start Date\",\"ColumnUniqueID\":\"start_on\",\"ColumnWidth\":6,\"FirmID\":{c_FirmID},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":8},{\"ColumnHeader\":\"Due Date\",\"ColumnID\":9,\"ColumnMouseOver\":\"Due Date\",\"ColumnName\":\"Due Date\",\"ColumnUniqueID\":\"due_on\",\"ColumnWidth\":6,\"FirmID\":{c_FirmID},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":9},{\"ColumnHeader\":\"Last Chg\",\"ColumnID\":10,\"ColumnMouseOver\":\"Last Changed Date\",\"ColumnName\":\"Last Chg\",\"ColumnUniqueID\":\"updated_on\",\"ColumnWidth\":10,\"FirmID\":{c_FirmID},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true"
		",\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":10},{\"ColumnHeader\":\"ADD\",\"ColumnID\":11,\"ColumnMouseOver\":\"Anticipated Delivery Date\",\"ColumnName\":\"Anticipated Delivery Date\",\"ColumnUniqueID\":\"anticipation_date\",\"ColumnWidth\":6,\"FirmID\":{c_FirmID},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":11},{\"ColumnHeader\":\"Who Has\",\"ColumnID\":12,\"ColumnMouseOver\":\"Who Has Task\",\"ColumnName\":\"Who Has\",\"ColumnUniqueID\":\"Full_assigned_name\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"Pare"
		"ntID\":0,\"Selected\":true,\"SortID\":12},{\"ColumnHeader\":\"Ext\",\"ColumnID\":13,\"ColumnMouseOver\":\"Extension Task\",\"ColumnName\":\"Ext\",\"ColumnUniqueID\":\"extensionTask\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Extension\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":13},{\"ColumnHeader\":\"Who Has Ext\",\"ColumnID\":14,\"ColumnMouseOver\":\"Who Has Extension\",\"ColumnName\":\"Who Has Ext\",\"ColumnUniqueID\":\"Full_ext_assigned_to_name\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Extension\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":14},{\"ColumnHeader\":\"Ori\",\"ColumnID\":15,\"ColumnMouseOver\":\"Originating Location\",\"ColumnNa"
		"me\":\"Originating Location\",\"ColumnUniqueID\":\"originatingLocation\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":15},{\"ColumnHeader\":\"Curr\",\"ColumnID\":16,\"ColumnMouseOver\":\"Current Location\",\"ColumnName\":\"Current Location\",\"ColumnUniqueID\":\"currentLocation\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":16},{\"ColumnHeader\":\"Pts\",\"ColumnID\":17,\"ColumnMouseOver\":\"Points\",\"ColumnName\":\"Issues & Points\",\"ColumnUniqueID\":\"points\",\"ColumnWidth\":2,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"I"
		"sDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":17},{\"ColumnHeader\":\"Ckl\",\"ColumnID\":18,\"ColumnMouseOver\":\"Checklists\",\"ColumnName\":\"Check List\",\"ColumnUniqueID\":\"checklists\",\"ColumnWidth\":2,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":18},{\"ColumnHeader\":\"DTL\",\"ColumnID\":19,\"ColumnMouseOver\":\"Details\",\"ColumnName\":\"Details\",\"ColumnUniqueID\":\"details\",\"ColumnWidth\":2,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":19},{"
		"\"ColumnHeader\":\"P\",\"ColumnID\":20,\"ColumnMouseOver\":\"Priority\",\"ColumnName\":\"Priority\",\"ColumnUniqueID\":\"priority\",\"ColumnWidth\":2,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":20},{\"ColumnHeader\":\"D\",\"ColumnID\":21,\"ColumnMouseOver\":\"Difficulty\",\"ColumnName\":\"Difficulty\",\"ColumnUniqueID\":\"difficulty\",\"ColumnWidth\":2,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":21},{\"ColumnHeader\":\"Asmbly Instrn\",\"ColumnID\":83,\"ColumnMouseOver\":\"Assembly Instructions\",\"ColumnName\":\"Assembly Instructions\",\"ColumnUniqueID\":\"Assembly_Instructions\",\"Colum"
		"nWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":22},{\"ColumnHeader\":\"Linked Tasks\",\"ColumnID\":87,\"ColumnMouseOver\":\"Linked Tasks\",\"ColumnName\":\"Linked Tasks\",\"ColumnUniqueID\":\"Linked_Tasks\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":23},{\"ColumnHeader\":\"Del Count\",\"ColumnID\":86,\"ColumnMouseOver\":\"Deliverable Count\",\"ColumnName\":\"Deliverable Count\",\"ColumnUniqueID\":\"Deliverable_Count\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMy"
		"ChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":24},{\"ColumnHeader\":\"Docs\",\"ColumnID\":89,\"ColumnMouseOver\":\"Linked Documents\",\"ColumnName\":\"Linked Documents\",\"ColumnUniqueID\":\"Linked_Documents\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":25},{\"ColumnHeader\":\"Asmbly Atch Count\",\"ColumnID\":84,\"ColumnMouseOver\":\"Assembly Attachments Count\",\"ColumnName\":\"Assembly Attachments Count\",\"ColumnUniqueID\":\"Assembly_Attachments_Count\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"Paren"
		"tID\":0,\"Selected\":true,\"SortID\":26},{\"ColumnHeader\":\"Release Date\",\"ColumnID\":90,\"ColumnMouseOver\":\"Release Date\",\"ColumnName\":\"Release Date\",\"ColumnUniqueID\":\"Release_Date\",\"ColumnWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":27},{\"ColumnHeader\":\"Ship Instrn\",\"ColumnID\":85,\"ColumnMouseOver\":\"Shipping Instructions\",\"ColumnName\":\"Shipping Instructions\",\"ColumnUniqueID\":\"Shipping_Instructions\",\"ColumnWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":28},{\"ColumnHeader\":\"Signoffs\",\"ColumnID\":88,\"ColumnMouseOver\":\"Open Signoff"
		"s\",\"ColumnName\":\"Signoffs\",\"ColumnUniqueID\":\"Open_Signoffs\",\"ColumnWidth\":3,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":29},{\"ColumnHeader\":\"Task Cmnts\",\"ColumnID\":82,\"ColumnMouseOver\":\"Task Comments\",\"ColumnName\":\"Task Comments\",\"ColumnUniqueID\":\"Task_Comments\",\"ColumnWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":30},{\"ColumnHeader\":\"Email\",\"ColumnID\":104,\"ColumnMouseOver\":\"Client / Entity Email\",\"ColumnName\":\"Client / Entity Email\",\"ColumnUniqueID\":\"clientEmail\",\"ColumnWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Client\",\"IsAdmin"
		"ChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":31},{\"ColumnHeader\":\"Phone\",\"ColumnID\":105,\"ColumnMouseOver\":\"Client / Entity Phone Number\",\"ColumnName\":\"Client / Entity Phone Number\",\"ColumnUniqueID\":\"clientPhoneNumber\",\"ColumnWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Client\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":32},{\"ColumnHeader\":\"Group Name\",\"ColumnID\":102,\"ColumnMouseOver\":\"Group Name\",\"ColumnName\":\"Group Name\",\"ColumnUniqueID\":\"GroupName\",\"ColumnWidth\":8,\"FirmID\":{c_FirmID},\"GroupName\":\"Client\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,"
		"\"IsSearchColumn\":true,\"IsViewColumn\":false,\"ParentID\":0,\"Selected\":true,\"SortID\":33}]",
		"LAST");

	if(atoi(lr_eval_string("{SearchndMyView}"))>0)
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectFieldndSaveforSearchndMyView"),0);
	}
	else
	{
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectFieldndSaveforSearchndMyView"),1);
	}
return 0;
}


Clickon_ManageUsers()

{
lr_think_time(2);
web_set_max_html_param_len("99999");
	
	
lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Clickon_ManageUsers"));

	web_url("ManageUserRights.aspx", 
		"URL=https://lt.xcmsolutions.com/xcmv2/XCM/ManageUserRights.aspx", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/CPAUtilities.aspx", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://login.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Clickon_ManageUsers"),2);
return 0;

}

AS()

{

web_set_max_html_param_len("99999");
return 0;

}

SEARCH_ALL_2018_2019_2020()

{
	
	lr_think_time(2);
web_set_max_html_param_len("99999");

i=atoi(lr_eval_string("{IteratonNumber}"));

web_reg_save_param_ex("paramname=C_ClientId","LB=\"clientId\":","RB=,\"categoryId\":","ordinal=all","Notfound=warning","LAST");
	
	
 

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SEARCH_ALL_2018_2019_2020"));

web_reg_find("Text=clientId","savecount=C_ClientId","LAST");

if(i%10==6)
{
lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_WithoutFilter"));
web_custom_request("results", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/results", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":{\"selected_staff\":\"0\",\"category\":\"0\",\"year\":\"2021\",\"keyword_search_pattern\":\"2\",\"keyword_search\":\"\",\"group\":\"0\",\"group_no_search_pattern\":\"1\",\"group_no\":\"\",\"periodenddate_from\":\"\",\"periodenddate_to\":\"\",\"priority\":\"0\",\"difficulty\":\"0\",\"who_has\":\"0\",\"projectedstartdate_from\":\"\",\"projectedstartdate_to\":\"\",\"extension_task_category\":\"1\",\"extension_status\":\"0\",\"orginal_duedate_from\":\"\","
		"\"orginal_duedate_to\":\"\",\"current_duedate_from\":\"\",\"current_duedate_to\":\"\",\"selected_role_users\":\"0\",\"selected_role\":\"0\",\"open_points\":false,\"open_checklist\":false,\"without_projected_start_date\":false,\"has_portal\":false,\"client_name\":\"0\",\"status\":\"0\",\"account_no\":\"0\",\"standard_jurisdiction\":\"0\",\"tsj\":\"0\",\"fsj\":\"0\",\"orginal_location\":\"0\",\"current_location\":\"0\",\"selected_rolestaff\":\"0\",\"includestatus\":true,\"includetasktype\":true,\""
		"QuicksrchID\":\"0\"},\"controlsettings\":[{\"FirmId\":{C_firmId},\"CategoryID\":1,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"TX\"},{\"FirmId\":{C_firmId},\"CategoryID\":2,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\""
		":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"FS\"},{\"FirmId\":{C_firmId},\"CategoryID\":3,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\""
		"Extension\":false,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OFA\"},{\"FirmId\":{C_firmId},\"CategoryID\":4,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OT\""
		"}]}","LAST");

lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_WithoutFilter"),2);

lr_output_message(" withoutFilter Usernameis %s Clientid is %s",lr_eval_string("{P_Username}"),lr_eval_string("{C_ClientId_count}"));
}
else

{
web_reg_save_param_ex("paramname=C_ClientId","LB=\"clientId\":","RB=,\"categoryId\":","ordinal=all","Notfound=warning","LAST");

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_WithFilter"));
web_custom_request("results", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/results", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":{\"selected_staff\":\"0\",\"category\":\"1\",\"year\":\"2021\",\"task_type\":\"{C_Tasktype}\",\"keyword_search_pattern\":\"2\",\"keyword_search\":\"\",\"group\":\"0\",\"group_no_search_pattern\":\"1\",\"group_no\":\"\",\"periodenddate_from\":\"\",\"periodenddate_to\":\"\",\"priority\":\"0\",\"difficulty\":\"0\",\"who_has\":\"0\",\"projectedstartdate_from\":\"\",\"projectedstartdate_to\":\"\",\"extension_task_category\":\"1\",\"extension_status\":\"0\",\"orginal_duedate_from\":\"\","
		"\"orginal_duedate_to\":\"\",\"current_duedate_from\":\"\",\"current_duedate_to\":\"\",\"selected_role_users\":\"0\",\"selected_role\":\"0\",\"open_points\":false,\"open_checklist\":false,\"without_projected_start_date\":false,\"has_portal\":false,\"client_name\":\"0\",\"status\":\"0\",\"account_no\":\"0\",\"standard_jurisdiction\":\"0\",\"tsj\":\"0\",\"fsj\":\"0\",\"orginal_location\":\"0\",\"current_location\":\"0\",\"selected_rolestaff\":\"0\",\"includestatus\":true,\"includetasktype\":true,\""
		"QuicksrchID\":\"0\"},\"controlsettings\":[{\"FirmId\":{C_firmId},\"CategoryID\":1,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"TX\"},{\"FirmId\":{C_firmId},\"CategoryID\":2,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\""
		":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"FS\"},{\"FirmId\":{C_firmId},\"CategoryID\":3,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\""
		"Extension\":false,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OFA\"},{\"FirmId\":{C_firmId},\"CategoryID\":4,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OT\""
		"}]}","LAST");lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_WithFilter"),2);

lr_output_message(" withfilter Usernameis %s Clientid is %s",lr_eval_string("{P_Username}"),lr_eval_string("{C_ClientId_count}"));
}

if(atoi(lr_eval_string("{C_ClientId}"))>0)
	{

		 
# 3103 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	 
# 3126 "C:\\\\XCM\\\\CommonfileltenvSML.h"

	

	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SEARCH_ALL_2018_2019_2020"),0);
	}
	else
	{
	
lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SEARCH_ALL_2018_2019_2020"),0);		
	}
return 0;

}

SEARCH_2018_20_TAX_CA()

{
lr_think_time(2);
web_set_max_html_param_len("99999");

web_reg_save_param_ex("paramname=C_ClientId","LB=\"clientId\":","RB=,\"categoryId\":","ordinal=all","Notfound=warning","LAST");
lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SEARCH_2018_20_TAX_CA"));

	for(y=1;y<=20;y++)

{
	web_custom_request("results", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/search/results", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/search", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":{\"selected_staff\":\"1\",\"category\":\"1\",\"year\":\"2021\",\"task_type\":\"{C_Tasktype}\",\"keyword_search_pattern\":\"2\",\"keyword_search\":\"\",\"group\":\"0\",\"group_no_search_pattern\":\"1\",\"group_no\":\"\",\"periodenddate_from\":\"\",\"periodenddate_to\":\"\",\"priority\":\"0\",\"difficulty\":\"0\",\"who_has\":\"0\",\"projectedstartdate_from\":\"\",\"projectedstartdate_to\":\"\",\"extension_task_category\":\"1\",\"extension_status\":\"0\",\"orginal_duedate_from\":\"\","
		"\"orginal_duedate_to\":\"\",\"current_duedate_from\":\"\",\"current_duedate_to\":\"\",\"selected_role_users\":\"0\",\"selected_role\":\"0\",\"open_points\":false,\"open_checklist\":false,\"without_projected_start_date\":false,\"has_portal\":false,\"client_name\":\"0\",\"status\":\"0\",\"account_no\":\"0\",\"standard_jurisdiction\":\"0\",\"tsj\":\"0\",\"fsj\":\"0\",\"orginal_location\":\"0\",\"current_location\":\"0\",\"selected_rolestaff\":\"0\",\"includestatus\":true,\"includetasktype\":true,\""
		"QuicksrchID\":\"0\"},\"controlsettings\":[{\"FirmId\":{C_firmId},\"CategoryID\":1,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"TX\"},{\"FirmId\":{C_firmId},\"CategoryID\":2,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\""
		":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"FS\"},{\"FirmId\":{C_firmId},\"CategoryID\":3,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\""
		"Extension\":false,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OFA\"},{\"FirmId\":{C_firmId},\"CategoryID\":4,\"GeneralTaskInfo\":true,\"CustomFields\":true,\"Staffing\":true,\"Deliverables\":true,\"Points\":true,\"Checklist\":true,\"SignOffs\":true,\"Assembly\":true,\"Shipping\":true,\"eFile\":true,\"Extension\":true,\"Documents\":false,\"Engagement\":false,\"Portal\":false,\"LinkedTasks\":true,\"Details\":true,\"CategoryCode\":\"OT\""
		"}]}","LAST");
}
	
	 
# 3191 "C:\\\\XCM\\\\CommonfileltenvSML.h"
	
	
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SEARCH_2018_20_TAX_CA"),2);
return 0;
	
}



UTR()
{
	lr_think_time(2);
	web_set_max_html_param_len("99999");
	
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
 
 

web_reg_save_param("C_LocationID","LB=\"locationId\":","RB=,\"middleName\"","LAST");

 
	web_reg_save_param_attrib(
		"ParamName=__RequestVerificationToken",
		"TagName=input",
		"Extract=value",
		"Name=__RequestVerificationToken",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=No",
		"RequestUrl=*/CPAUtilities*",
		"LAST");
		
		 

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Utilities"));
web_reg_find("Search=Body",
		"Text=results",
		"LAST");

	web_url("CPAUtilities", 
		"URL=https://lt.xcmsolutions.com/xcmv2/CPAUtilities", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CPAUtilities", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");
		lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_Utilities"),2);
return 0;
}

RolloverTaskLink()

{
	lr_think_time(2);
web_set_max_html_param_len("999999");

	 

	 

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

 





	web_reg_save_param_ex(
		"ParamName=__VIEWSTATEGENERATOR",
		"LB/IC=id=\"__VIEWSTATEGENERATOR\" value=\"",
		"RB/IC=\" ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");
web_reg_save_param("C_Viewstate","LB=\"hidden\" name=\"__VIEWSTATE\" id=\"__VIEWSTATE\" value=\"","RB=\"","LAST");

 
	
web_reg_save_param("C_EVENTVALIDATION","LB=\hidden\" name=\"__EVENTVALIDATION\" id=\"__EVENTVALIDATION\" value=\"","RB=\"","LAST");

 
	web_reg_save_param_attrib(
		"ParamName=C_Task",
		"TagName=input",
		"Extract=value",
		"Name=ctl00$ContentPlaceHolder1$selectedtasks",
		"Id=ContentPlaceHolder1_selectedtasks",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=No",
		"LAST");
		
		 
	web_reg_save_param_attrib(
		"ParamName=TaskStatus",
		"TagName=input",
		"Extract=value",
		"Name=ctl00$ContentPlaceHolder1$selectedstatus",
		"Id=ContentPlaceHolder1_selectedstatus",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=No",
		"LAST");
		 
	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_RolloverTaskLink"));

	web_reg_find("Search=Body",
		"Text=XCM #1 Workflow System",
		"LAST");

	web_url("RolloverSearch.aspx", 
		"URL=https://lt.xcmsolutions.com/xcmv2/XCM/RolloverSearch.aspx", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/CPAUtilities.aspx", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");
		lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_RolloverTaskLink"), 2);
return 0;

}


ClickSearchButtonBasedOnYear()

{
lr_think_time(2);	
web_set_max_html_param_len("99999");
 

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");
	 
	
	web_reg_save_param("C_AllTaskIDS","LB= id=\"ContentPlaceHolder1_SelectAllTaskIDs\" value=\"","RB=\"","ord=all","LAST");
	
	 
	
	web_reg_save_param("C_Viewstate1","LB=\"hidden\" name=\"__VIEWSTATE\" id=\"__VIEWSTATE\" value=\"","RB=\"","LAST");

web_reg_save_param("C_VIEWSTATEGENERATOR1","LB= name=\"__VIEWSTATEGENERATOR\" id=\"__VIEWSTATEGENERATOR\" value=\"","RB=\"","LAST");
	
web_reg_save_param("C_EVENTVALIDATION1","LB=\hidden\" name=\"__EVENTVALIDATION\" id=\"__EVENTVALIDATION\" value=\"","RB=\"","LAST");

	web_reg_save_param_regexp(
		"ParamName=C_TaskID",
		"RegExp=id=\"ContentPlaceHolder1_SelectAllTaskIDs\"\\ value=\"0,(.*?),(.*?),",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
		
		 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickSearchButtonBasedOnYear"));


	web_reg_find("Search=Body",
		"Text=Please select atleast one or more task",
		"LAST");

	web_submit_data("RolloverSearch.aspx_2",
		"Action=https://lt.xcmsolutions.com/xcmv2/XCM/RolloverSearch.aspx",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/RolloverSearch.aspx",
		"Snapshot=t3.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__EVENTTARGET", "Value=", "ENDITEM",
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM",
		"Name=__LASTFOCUS", "Value=", "ENDITEM",
		"Name=__VIEWSTATE", "Value={C_Viewstate}", "ENDITEM",
		"Name=__VIEWSTATEGENERATOR", "Value={__VIEWSTATEGENERATOR}", "ENDITEM",
		"Name=__VIEWSTATEENCRYPTED", "Value=", "ENDITEM",
		"Name=__EVENTVALIDATION", "Value={C_EVENTVALIDATION}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$ClientName", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$Category", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$ClientStatus", "Value=1", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$DummyTaskType", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$TaskType", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$ClientType", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$DummyStatusFilter", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$StatusFilter", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$PeriodEndFrom", "Value=", "ENDITEM",
		"Name=utilityGroup1", "Value=--Select--", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$PeriodEndTo", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$GroupNumber", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$year", "Value=2020", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$LocationName", "Value={C_LocationID}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$CurrentLoc", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$PrimaryTaskType", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$Search", "Value=Search", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$firmid", "Value={C_Firmid}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$rgroupname1", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$rgroupname2", "Value=--Select--", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$Pagecnt", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$userid", "Value={C_Userid}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectdTaskIDs", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$clnt", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$gid", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$assid", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$taskid", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$mode", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$openpoint", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$clienttype1", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$clientstatus1", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$grpname", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$grpnumber", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$fiscalyear", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$Clients", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$GroupID", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$BranchID", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$PrimaryTask", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$taskTypeIds", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$QuickSearch", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$SelectAllTaskIDs", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$OriginatingLoc", "Value={C_LocationID}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$categoryid", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$hStatusFilter", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectedstatus", "Value={TaskStatus}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectedtasks", "Value={C_Task}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectedstatuses", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectedtaskstypes", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$TaskcreatedId", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$SearchAction", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$tasktypetext_hidden", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$statustext_hidden", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$firmtype", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$recurringTask", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$noTaskYear", "Value=2021", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$OriginatingLocation", "Value={C_LocationID}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$TypeFilter", "Value=", "ENDITEM",
		"LAST");

	
		lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_ClickSearchButtonBasedOnYear"), 2);

return 0;
}



SelectTasks_ClickonRolloverButton()

{
lr_think_time(2);
web_set_max_html_param_len("99999");

web_convert_param("C_TaskID_URL1",
		"SourceString={C_TaskID}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		"LAST");

	(web_remove_auto_header("Sec-Fetch-User", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-MicrosoftAjax", 
		"Delta=true");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	 

	lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectTasks_ClickonRolloverButton"));


	web_submit_data("RolloverSearch.aspx_3",
		"Action=https://lt.xcmsolutions.com/xcmv2/XCM/RolloverSearch.aspx",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/RolloverSearch.aspx",
		"Snapshot=t4.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=ctl00$ContentPlaceHolder1$ScriptManager1", "Value=ctl00$ContentPlaceHolder1$UpdatePanel1|ctl00$ContentPlaceHolder1$Ssave", "ENDITEM",
		"Name=__EVENTTARGET", "Value=ctl00$ContentPlaceHolder1$Ssave", "ENDITEM",
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM",
		"Name=__LASTFOCUS", "Value=", "ENDITEM",
		"Name=__VIEWSTATE", "Value={C_Viewstate1}", "ENDITEM",
		"Name=__VIEWSTATEGENERATOR", "Value={__VIEWSTATEGENERATOR}", "ENDITEM",
		"Name=__VIEWSTATEENCRYPTED", "Value=", "ENDITEM",
		"Name=__EVENTVALIDATION", "Value={C_EVENTVALIDATION1}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$ClientName", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$Category", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$ClientStatus", "Value=1", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$DummyTaskType", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$TaskType", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$ClientType", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$DummyStatusFilter", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$StatusFilter", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$PeriodEndFrom", "Value=", "ENDITEM",
		"Name=utilityGroup1", "Value=--Select--", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$PeriodEndTo", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$GroupNumber", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$year", "Value=2020", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$LocationName", "Value={C_LocationID}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$CurrentLoc", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$PrimaryTaskType", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$firmid", "Value={C_Firmid}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$rgroupname1", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$rgroupname2", "Value=--Select--", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$Pagecnt", "Value=222", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$userid", "Value={C_Userid}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectdTaskIDs", "Value=0,{C_TaskID_URL1}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$clnt", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$gid", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$assid", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$taskid", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$mode", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$openpoint", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$clienttype1", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$clientstatus1", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$grpname", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$grpnumber", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$fiscalyear", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$Clients", "Value=51", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$GroupID", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$BranchID", "Value={C_LocationID}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$PrimaryTask", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$taskTypeIds", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$QuickSearch", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$SelectAllTaskIDs", "Value={C_AllTaskIDS}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$OriginatingLoc", "Value={C_LocationID}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$categoryid", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$hStatusFilter", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectedstatus", "Value={TaskStatus}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectedtasks", "Value={C_Task}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectedstatuses", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$selectedtaskstypes", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$TaskcreatedId", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$SearchAction", "Value=0", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$tasktypetext_hidden", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$statustext_hidden", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$firmtype", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$recurringTask", "Value=", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$noTaskYear", "Value=2021", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$OriginatingLocation", "Value={C_LocationID}", "ENDITEM",
		"Name=ctl00$ContentPlaceHolder1$TypeFilter", "Value=", "ENDITEM",
		"Name=__ASYNCPOST", "Value=true", "ENDITEM",
		"LAST");
	
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectTasks_ClickonRolloverButton"), 2);
return 0;
}

SelectAll_Newyear_ApplyButton()

{
lr_think_time(2);
web_set_max_html_param_len("99999");


 





	web_reg_save_param_ex(
		"ParamName=__VIEWSTATEGENERATOR_1",
		"LB/IC=id=\"__VIEWSTATEGENERATOR\" value=\"",
		"RB/IC=\" ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");
		
web_reg_save_param("C_Viewstate2","LB=\"hidden\" name=\"__VIEWSTATE\" id=\"__VIEWSTATE\" value=\"","RB=\"","LAST");

 
	
web_reg_save_param("C_EVENTVALIDATION2","LB=\hidden\" name=\"__EVENTVALIDATION\" id=\"__EVENTVALIDATION\" value=\"","RB=\"","LAST");

 

lr_start_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectAll_Newyear_ApplyButton"));


	web_reg_find("Search=Body",
		"Text=Rollover",
		"LAST");

	web_url("ScheduleType.aspx", 
		"URL=https://lt.xcmsolutions.com/xcmv2/XCM/ScheduleType.aspx?Type=Rollover", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/RolloverSearch.aspx", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_reg_find("Search=Body",
		"Text=alert(' Your request has been submitted to the application and is being processed in the background. Please check back later to access the tasks rolled over.')",
		"LAST");

	web_submit_data("ScheduleType.aspx_2",
		"Action=https://lt.xcmsolutions.com/xcmv2/XCM/ScheduleType.aspx?type=all&taskid={C_TaskID_URL1}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/ScheduleType.aspx?Type=Rollover",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__EVENTTARGET", "Value=ScheduleOK", "ENDITEM",
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM",
		"Name=__LASTFOCUS", "Value=", "ENDITEM",
		"Name=__VIEWSTATE", "Value={C_Viewstate2}", "ENDITEM",
		"Name=__VIEWSTATEGENERATOR", "Value={__VIEWSTATEGENERATOR_1}", "ENDITEM",
		"Name=__EVENTVALIDATION", "Value={C_EVENTVALIDATION2}", "ENDITEM",
		"Name=rollovertaskoptions", "Value=1", "ENDITEM",
		"Name=All", "Value=on", "ENDITEM",
		"Name=Checkboxlist$0", "Value=1", "ENDITEM",
		"Name=Checkboxlist$1", "Value=2", "ENDITEM",
		"Name=Checkboxlist$2", "Value=3", "ENDITEM",
		"Name=Checkboxlist$3", "Value=7", "ENDITEM",
		"Name=Checkboxlist$4", "Value=4", "ENDITEM",
		"Name=Checkboxlist$5", "Value=5", "ENDITEM",
		"Name=Checkboxlist$6", "Value=6", "ENDITEM",
		"Name=Checkboxlist$7", "Value=8", "ENDITEM",
		"Name=Checkboxlist$8", "Value=9", "ENDITEM",
		"Name=Checkboxlist$9", "Value=10", "ENDITEM",
		"Name=Checkboxlist$10", "Value=12", "ENDITEM",
		"Name=Checkboxlist$11", "Value=13", "ENDITEM",
		"Name=Checkboxlist$12", "Value=16", "ENDITEM",
		"Name=Checkboxlist$15", "Value=19", "ENDITEM",
		"Name=RolloverPEDate", "Value=1", "ENDITEM",
		"Name=FYear", "Value=2021", "ENDITEM",
		"Name=DateReceived1", "Value=", "ENDITEM",
		"Name=RolloverStaff", "Value=1", "ENDITEM",
		"Name=BudgetTypes", "Value=1", "ENDITEM",
		"Name=Description", "Value=", "ENDITEM",
		"Name=AssignTasktoStaff", "Value=", "ENDITEM",
		"Name=SelectedId", "Value=0", "ENDITEM",
		"Name=daysBefore", "Value=0", "ENDITEM",
		"Name=daysafter", "Value=0", "ENDITEM",
		"Name=SessionTimeOut", "Value=600", "ENDITEM",
		"Name=DateReceived", "Value=", "ENDITEM",
		"Name=Isrecurringtask", "Value=n", "ENDITEM",
		"Name=isXCMLitefirm", "Value=N", "ENDITEM",
		"Name=isIntegration", "Value=N", "ENDITEM",
		"Name=isLocal", "Value=Y", "ENDITEM",
		"Name=rightclick", "Value=", "ENDITEM",
		"Name=taskid", "Value=", "ENDITEM",
		"Name=mode", "Value=", "ENDITEM",
		"Name=Hidden1", "Value=", "ENDITEM",
		"Name=openCount", "Value=", "ENDITEM",
		"Name=Hidden2", "Value=", "ENDITEM",
		"Name=dateErr", "Value=", "ENDITEM",
		"Name=Edit", "Value=", "ENDITEM",
		"Name=RecurringPattern", "Value=0", "ENDITEM",
		"Name=StartDateBlank", "Value=0", "ENDITEM",
		"LAST");
	
	lr_end_transaction(lr_eval_string("{Scenario}_{ScenarioPrepix}_{ClientType}_{TN1}_SelectAll_Newyear_ApplyButton"), 2);
	
return 0;

	 
}

# 10 "globals.h" 2

 
# 1 "C:\\\\XCM\\\\ReducedLoginLib.h" 1

int checkDoLogin()
{
	if(atoi(lr_eval_string("{IterationNumber}")) % atoi(lr_eval_string("{MaxIterationCount}")) ==1)
	{
		return 1;
	}
	else  
	{
		return 0;
	}
}
int checkDoLogout()
{
	if(atoi(lr_eval_string("{IterationNumber}")) % atoi(lr_eval_string("{MaxIterationCount}")) ==0)
	{
		return 1;
	}
	else  
	{
		return 0;
	}
}
# 12 "globals.h" 2

 
 
int  doLogin, doLogout;

# 3 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	
	lr_save_string("SF", "ClientType");
	lr_save_string("SBTDR", "ScenarioPrepix");
	lr_save_string("S19","Scenario");
   	lr_save_string("01","TN1");

	return 0;
}
# 4 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2

# 1 "Login.c" 1
Login()
{
	
	doLogin = checkDoLogin();
	doLogout = checkDoLogout();
 
 
 
 
 
		xcmLogin();
 
	return 0;
}
# 5 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2

# 1 "CommonAction.c" 1
CommonAction()
{
	
	lr_start_transaction("S19_XCM_SBTDR_SF");
	
	lr_save_string("01","TN1");
	Click_schedular();
	
	
	lr_save_string("02","TN1");
	ScheduleByTask();
	
	
	lr_save_string("03","TN1");
	TaskCalenderReport();

	
	
	return 0;
}
# 6 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2

# 1 "Logout.c" 1
Logout()
{
 
 
		xcmLogout();
 
	return 0;
}
# 7 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2

# 1 "ClickRun1.c" 1
ClickRun1()
{
	
		
	
	lr_save_string("04","TN1");
	ClickRun();
	
     
    
	lr_end_transaction("S19_XCM_SBTDR_SF", 2);
	lr_output_message("%s",lr_eval_string("{P_Username}"));
	return 0;
}


# 8 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{     
	return 0;
}
# 9 "d:\\users\\sooraj.kurup\\appdata\\local\\temp\\1\\azzbe3zj.x3c\\s17_xcm_sbtdr_sf (1)\\\\combined_S17_XCM_SBTDR_SF.c" 2


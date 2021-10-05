#include <stdio.h>
#include "sqlite3.h"

int main(){
    sqlite3 *db；
    int aaaa;
    char errmsg;
     char inputsss;
     char* value;
     int ret;

    aaaa=sqlite3_open("coffee.db",&db);
    if (aaaa){
	fprinf(stderr,"can't open databse:%s\n",sqlite3_errmsg(db));
	exit(0);
     }else{
	fprintf(staderr,"open database sucessfully\n");
}

  

     value="select top 1 * from coffee order by newid()"

     printf("输入相应参数\n");
     scanf("%c",&inputsss);
	
     if (inputsss="/"){
	printf("Hello Coffee");
     }else if(inputsss="/rand"{
                ret=sqlite3_exec(db,value,NULL,NULL,&errmsg);
	if (ret=SQLITE_OK){
		printf(stdout,"successfuly");
}
     sqlite3_close(db)
     return 0;
}
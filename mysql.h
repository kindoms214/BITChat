#include <stdio.h>
#include <string.h>
#include <mysql/mysql.h>

struct data{
    char sender_id[40];
    char recv_id[40];
    char time[15];
    char msg[100];      //消息记录
};

int login(MYSQL operate_database);

int User_SignUp(MYSQL operate_database, char *user_id, char *user_password);

int User_Confirm(MYSQL operate_database, char *user_id, char *user_password);

int User_Destroy(MYSQL operate_database, char *user_id, char *user_password);

int Info_Update(MYSQL operate_database, char *user_id, char *alter_item, char *content);

int User_Msg_Store(MYSQL operate_database, struct data *s);

int Msg_seek(MYSQL operate_database, struct data *a);

#include "magnet_common.h"
#include <string.h>

/* ��  �ܣ���str�ַ����е�oldstr�ַ����滻Ϊnewstr�ַ���
 * ��  ����str������Ŀ�� oldstr�����滻�� newstr���滻��
 * ����ֵ�������滻֮����ַ���
 * ��  ���� V0.2
 */
char *strrpc(const char *str,char *oldstr,char *newstr){
    char bstr[strlen(str)];//ת��������
    memset(bstr,0,sizeof(bstr));
 
    for(int i = 0;i < strlen(str);i++){
        if(!strncmp(str+i,oldstr,strlen(oldstr))){//����Ŀ���ַ���
            strcat(bstr,newstr);
            i += strlen(oldstr) - 1;
        }else{
        	strncat(bstr,str + i,1);//����һ�ֽڽ�������
	    }
    }
 
    strcpy(str,bstr);
    return str;
}



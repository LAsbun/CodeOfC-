/*
	code in 20151226
	destination: Checkemail is valid
	
	����ĸ�ʽ xxx@xxx.com �ɵ�һ��xxx����3-18��Ӣ�ġ����֡��㡢���š��»������
	

*/


#include<iostream>
#include<string>
#include<string.h>
using namespace std;

bool check_email_is_valid(string email);
const string allow_emails_list[] = {"qq", "126", "gmail", "163", "sina", "outlook"};
int allow_emails_list_length = 6; 

int main(){
	string email;
	cout<<"Please input your email(input exit will end!): ";
	while(cin>>email){
		if(email == "exit") break;
		if(check_email_is_valid(email)){
			cout<<"Valid.\n"; 
		}
		else{
			cout<<"Not valid.\n";
		}
		cout<<"Please input your email(input exit will end!): ";
	}
	return 0;
}

bool check_char_is_valid(char s){
	if((s>='a'&&s<='z')||(s>='A'&&s<='Z')||s=='.'||s=='-'||s=='_'||(s>='0'&&s<='9')) return true;
	return false;
}


bool check_email_is_valid(string email){
	int length = email.length();
	if(length < 10) return false; //���email���Ȳ��Ǵ���10 �ͷ���false 
	string temp="";  //��ʱ��temp�ǽ�ȡ��email�ĺ���λ 
	for(int i = length-4; i <= length-1; ++i){
		temp+=email[i];
	}
	if(temp != ".com") return false;  //��֤����λ�ǲ���.com
	temp="";  //��ʱ��temp�ǽ�ȡ������email�ġ�@�����桮.com��ǰ����ַ� 
	int i = length-5; //i��ͳ��email�ġ�@��ǰ����ַ��м��� 
	for(;email[i]!='@';--i){
		if(i<3||!check_char_is_valid(email[i])) return false;  //��������3-18��Ӣ�ġ����֡��㡢���š��»������
		 temp += email[i]; 
	} 
	if(temp.length() < 2) return false;
	int j = 0;
	for(;j < allow_emails_list_length; ++ j){
		if(allow_emails_list[j] == temp) break;
	}
	if(j >= allow_emails_list_length) return false;
	//����������������email[i] == '@', 
	i = i-1; temp = "";
	 
	for(int j = 0; j <= i; ++ j){
		if(!check_char_is_valid(email[i])) return false;
	}
	return true;
}

/*
	code in 20151226
	destination: Checkemail is valid
	
	邮箱的格式 xxx@xxx.com 由第一个xxx是由3-18个英文、数字、点、减号、下划线组成
	

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
	if(length < 10) return false; //如果email长度不是大于10 就返回false 
	string temp="";  //此时的temp是截取的email的后四位 
	for(int i = length-4; i <= length-1; ++i){
		temp+=email[i];
	}
	if(temp != ".com") return false;  //验证后四位是不是.com
	temp="";  //此时的temp是截取的是在email的‘@’后面‘.com’前面的字符 
	int i = length-5; //i是统计email的‘@’前面的字符有几个 
	for(;email[i]!='@';--i){
		if(i<3||!check_char_is_valid(email[i])) return false;  //不满足由3-18个英文、数字、点、减号、下划线组成
		 temp += email[i]; 
	} 
	if(temp.length() < 2) return false;
	int j = 0;
	for(;j < allow_emails_list_length; ++ j){
		if(allow_emails_list[j] == temp) break;
	}
	if(j >= allow_emails_list_length) return false;
	//如果满足上面的条件email[i] == '@', 
	i = i-1; temp = "";
	 
	for(int j = 0; j <= i; ++ j){
		if(!check_char_is_valid(email[i])) return false;
	}
	return true;
}

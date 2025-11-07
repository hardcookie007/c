#include <stdio.h>
 int write (char zimu);
 int main()
 {
 	int n;
	scanf("%c",&n);
 	write(n);
    return 0;
 }
 
 int write (char zimu)
 {
	if(zimu>='a'&&zimu<='z')
	printf("%c\n",zimu-32);
	else
	printf("%c\n",zimu);
	return zimu;
 }
 
 
 //我怎么总是写这些弱智代码啊，还不知道字母的英文是什么，好丢人XD 

//V0
#include<stdio.h>
int main()
{
    char strExp[]="3+4";
    int l=strExp[0]-'0';
    int r=strExp[2]-'0';
    int result=l+r;
    printf("result=%d\n",result);
    return 0;
}

//V1
#include<stdio.h>
#include<string.h>
int main()
{
	char strExp[]="1+2+2+1+2+5+4-1-3+4-8";
	int result=strExp[0]-'0';
	int i;
	for(i=1;i<strlen(strExp);i++)
	{
		if(strExp[i]=='+')
		{
			int x=strExp[i+1]-'0';
			result+=x;
			i++;
		}
		else if(strExp[i]=='-')
		{
			int x=strExp[i+1]-'0';
			result-=x;
			i++;
		}
	}
	printf("%d",result);
	return 0;
}

//V2
#include<stdio.h>
#include<string.h>
int main()
{
	char strExp[]="2*2/4*1/1*2*3/2";
	int result=strExp[0]-'0';
	int i;
	for(i=1;i<strlen(strExp);i++)
	{
		if(strExp[i]=='*')
		{
			int x=strExp[i+1]-'0';
			result*=x;
			i++;
		}
		else if(strExp[i]=='/')
		{
			int x=strExp[i+1]-'0';
			result/=x;
			i++;
		}
	}
	printf("%d",result);
	return 0;
}

//V3
#include<stdio.h>
#include<string.h>
int main()
{
    char strExp[]="2+2*3+2/2-1";
    int result=strExp[0]-'0';
    for(int i=1;i<=strlen(strExp);i++)
    {
    	if(strExp[i]=='*')
    	{
    		int a=strExp[i-1]*strExp[i+1]/'0'/'0';
    		result+=a;
    		i++;
		}
	    if(strExp[i]=='/')
		{
			int b=strExp[i-1]/strExp[i+1];
			result+=b;
			i++;
		}
    	if(strExp[i]=='+')
    	{
    		int c=strExp[i+1]-'0';
    		result+=c;
    		i++;
		}
	   if(strExp[i]=='/')
		{
			int d=strExp[i+1]-'0';
			result+=d;
			i++;
		}
	}
	printf("%d",result);
    return 0;
}


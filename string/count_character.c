#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void frequency(char *s);
int main()
{
    char s[]="acfsybtbkuuiieeeecccfdrcasfesy";
    frequency(s);
    return 0;
}
void frequency(char *s)
{
    int length=strlen(s);
    int count=0;
    char unique[length];
    for(int i=0; i<length ; i++)
    {
        bool already_counted=false;
        for (int j=0; j<count; j++)
        {
            if(s[i]==unique [j])
            {


                already_counted =true;
                break;
            }
        }
        if(already_counted)continue;
        int countt=0;
        for(int j=0; j<length; j++)
        {



            if (s[i]==s[j])
                countt++;
        }

        printf("%c -%d\n",s[i],countt);
        unique[count]=s[i];
        count++;

    }
}



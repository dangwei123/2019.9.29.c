#define _CRT_SECURE_NO_WARNINGS 1
/*
ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str��
�������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����
class Solution {
public String toLowerCase(String str)
{
String result="";
for(int i=0;i<str.length();i++)
{
char c=str.charAt(i);
if(c>='A'&&c<='Z')
{
c+=32;
}
result+=c;
}
return result;
}
}
*/

/*СA �� СB ��������֡�СB ÿ�δ� 1, 2, 3 �����ѡ��һ����
СA ÿ��Ҳ�� 1, 2, 3 ��ѡ��һ���¡�����һ���������������Ϸ���뷵�� СA �¶��˼��Σ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/guess-numbers
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
int game(int* guess, int guessSize, int* answer, int answerSize)
{
	int count = 0;
	int i = 0;
	for (i = 0; i<guessSize; i++)
	{
		if (guess[i] == answer[i])
		{
			count++;
		}
	}
	return count;

}
*/

/*
��������֮��ĺ�������ָ�������������ֶ�Ӧ������λ��ͬ��λ�õ���Ŀ��

������������ x �� y����������֮��ĺ������롣
int hammingDistance(int x, int y)
{
int a=x^y;
int i=0;
int count=0;
for(i=0;i<32;i++)
{
if((a>>i)&1==1)
{
count++;
}
}
return count;

}

*/

#define _CRT_SECURE_NO_WARNINGS 1
/*
实现函数 ToLowerCase()，该函数接收一个字符串参数 str，
并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
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

/*小A 和 小B 在玩猜数字。小B 每次从 1, 2, 3 中随机选择一个，
小A 每次也从 1, 2, 3 中选择一个猜。他们一共进行三次这个游戏，请返回 小A 猜对了几次？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/guess-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。

给出两个整数 x 和 y，计算它们之间的汉明距离。
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

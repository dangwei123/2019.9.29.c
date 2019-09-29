#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*在二维平面上，有一个机器人从原点 (0, 0) 开始。给出它的移动顺序，
判断这个机器人在完成移动后是否在 (0, 0) 处结束。

移动顺序由字符串表示。字符 move[i] 表示其第 i 次移动。
机器人的有效动作有 R（右），L（左），U（上）和 D（下）。如果机器人在完成所有动作后返回原点，则返回 true。否则，返回 false。

注意：机器人“面朝”的方向无关紧要。 “R” 将始终使机器人向右移动一次，
“L” 将始终向左移动等。此外，假设每次移动机器人的移动幅度相同。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/robot-return-to-origin
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
bool judgeCircle(char * moves)
{
	int count1 = 0;
	int count2 = 0;
	while (*moves != '\0')
	{
		if (*moves == 'R')
		{
			count1++;
		}
		if (*moves == 'L')
		{
			count1--;
		}
		if (*moves == 'U')
		{
			count2++;
		}
		if (*moves == 'D')
		{
			count2--;
		}
		moves++;
	}
	return count1 == 0 && count2 == 0;

}
*/

/*你和你的朋友，两个人一起玩 Nim 游戏：桌子上有一堆石头，每次你们
轮流拿掉 1 - 3 块石头。 拿掉最后一块石头的人就是获胜者。你作为先手。

你们是聪明人，每一步都是最优解。 编写一个函数，
来判断你是否可以在给定石头数量的情况下赢得游戏。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/nim-game
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

bool canWinNim(int n)
{
return n%4!=0;

}
*/

/*爱丽丝和鲍勃一起玩游戏，他们轮流行动。爱丽丝先手开局。

最初，黑板上有一个数字 N 。在每个玩家的回合，玩家需要执行以下操作：

选出任一 x，满足 0 < x < N 且 N % x == 0 。
用 N - x 替换黑板上的数字 N 。
如果玩家无法执行这些操作，就会输掉游戏。

只有在爱丽丝在游戏中取得胜利时才返回 True，否则返回 false。假设两个玩家都以最佳状态参与游戏。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/divisor-game
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


bool divisorGame(int N)
{
return N%2==0;

}

*/

/*给定一个正整数，输出它的补数。补数是对该数的二进制表示取反。

注意:

给定的整数保证在32位带符号整数的范围内。
你可以假定二进制数不包含前导零位。
int findComplement(int num)
{
int sum=0;
int i=0;
int a=0;
while(num)
{
a=num%2;
if(a==0)
{
sum+=(int)pow((double)2,(double)(i));
}
if(a==1)
{
sum+=0;
}
i++;
num=num/2;
}
return sum;
}


*/

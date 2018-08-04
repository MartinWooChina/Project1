
#include <stdio.h>


#include <iostream>






int main() {
	//统计的数字存入currVal,读入新值存入val .
	int currVal = 0, val = 0;

	//读取第一个数字,并确认是否又数据可以处理

	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin>>val)
		{
			if (val==currVal)
			{
				++cnt;
			}
			else
			{
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val;//记住新值
				cnt = 1; //重置计数器
			}
		}//while 语句在这里结束
		// 记住打印文件中最后一个值的个数
		std::cout << currVal << " occures " << cnt << " times " << std::endl;







	}// if语句在这里结束

	return 818; 


}

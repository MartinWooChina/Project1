
#include <stdio.h>


#include <iostream>






int main() {
	//ͳ�Ƶ����ִ���currVal,������ֵ����val .
	int currVal = 0, val = 0;

	//��ȡ��һ������,��ȷ���Ƿ������ݿ��Դ���

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
				currVal = val;//��ס��ֵ
				cnt = 1; //���ü�����
			}
		}//while ������������
		// ��ס��ӡ�ļ������һ��ֵ�ĸ���
		std::cout << currVal << " occures " << cnt << " times " << std::endl;







	}// if������������

	return 818; 


}

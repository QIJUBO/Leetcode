#include<iostream>
#include <string>
using namespace std;
public String complexNumberMultiply(String a, String b) {
	//+�������е������ַ�  
	//���ڵ���ƥ���ֶΣ���+��*��|��\�ȣ�����ʹ�������ڡ�\\+"����[+]���д���  
	//Ϊʲô��Ҫ����\�أ���һ��\��java�ַ�����ת���ַ�������\\ʵ�ʾʹ���\��������ľ���\+  
	String[] split1 = a.split("\\+");
	int a1 = Integer.parseInt(split1[0]);
	String b1i = split1[1].substring(0, split1[1].length() - 1);
	int b1 = Integer.parseInt(b1i);

	String[] split2 = b.split("\\+");
	int a2 = Integer.parseInt(split2[0]);
	String b2i = split2[1].substring(0, split2[1].length() - 1);
	int b2 = Integer.parseInt(b2i);

	int final_a = a1*a2 - b1*b2;
	int final_b = a1*b2 + b1*a2;

	return String.valueOf(final_a) + '+' + String.valueOf(final_b) + 'i';

}

public static void main(String[] args) {
	// TODO Auto-generated method stub  
	Complex_Number_Multiplication_537 c = new Complex_Number_Multiplication_537();
	System.out.println(c.complexNumberMultiply("1+1i", "1+1i"));
	System.out.println(c.complexNumberMultiply("1+-1i", "1+-1i"));
}

/*
int main()
{
	string a = "2";
	string b = "1";
	string e = a + "+" + b;
	//string d = a + "+" + b + "i";
	cout << e;
	double c = atof(a.c_str());
	int i = std::stoi(a);
	//string d = c*c;
	cout << a << "+" << b<<"i";
	//return c*c+"i";
	system("pause");
}*/

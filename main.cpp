#include<stdio.h>
#include<iostream>

template<typename Type,typename Type2>
class TemplateClass {
public:
	TemplateClass(Type number1,Type number2) : number1(number1),number2(number2){}
	Type Min() {
		if (number1 < number2) {
			return static_cast<Type>(number1);
		}
		else {
			return static_cast<Type2>(number2);
		}
	};
private:
	Type number1;
	Type2 number2;
};
int main() {
	TemplateClass<int, float>intFloatTemplate(10, 50.0f);
	TemplateClass<int,double>intdoubleTemplate(80, 13.0);
	TemplateClass<float,int>FloatintTemplate(2.0f,9);
	TemplateClass<float,double>FloatdoubleTemplate(11.0f,3.5);
	TemplateClass<double,int>doubleintTemplate(666.0,333);
	TemplateClass<double,float>doublefloatTemplate(435.8,563.5f);

	std::cout << "int(10)とfloat(50.0f)を比べて小さい数字を表す:" << intFloatTemplate.Min() << std::endl;
	std::cout << "int(80)とdouble(13.0)を比べて小さい数字を表す:" << intdoubleTemplate.Min() << std::endl;
	std::cout << "float(2,0f)とint(9)を比べて小さい数字を表す:" << FloatintTemplate.Min() << std::endl;
	std::cout << "float(11.0f)とdlouble(3.5)を比べて小さい数字を表す:" << FloatdoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0)とint(333)を比べて小さい数字を表す:" << doubleintTemplate.Min() << std::endl;
	std::cout << "double(435.8)とfloat(563.5)を比べて小さい数字を表す:" << doublefloatTemplate.Min() << std::endl;
	return 0;
}
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

	std::cout << "int(10)��float(50.0f)���ׂď�����������\��:" << intFloatTemplate.Min() << std::endl;
	std::cout << "int(80)��double(13.0)���ׂď�����������\��:" << intdoubleTemplate.Min() << std::endl;
	std::cout << "float(2,0f)��int(9)���ׂď�����������\��:" << FloatintTemplate.Min() << std::endl;
	std::cout << "float(11.0f)��dlouble(3.5)���ׂď�����������\��:" << FloatdoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0)��int(333)���ׂď�����������\��:" << doubleintTemplate.Min() << std::endl;
	std::cout << "double(435.8)��float(563.5)���ׂď�����������\��:" << doublefloatTemplate.Min() << std::endl;
	return 0;
}
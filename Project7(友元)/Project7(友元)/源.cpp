#include  <iostream>

using  namespace  std;

class Car;

class Boat
{
public:
	Boat(float weight=0):weight(weight){}
	void setB(float W);
	friend float getTotalWeight(Boat& B, Car& C);
private:
	float weight;
};
void Boat::setB(float W)
{
	weight = W;
}

class Car
{
public:
	Car(float weight = 0) :weight(weight){}
	void setC(float W);
	friend float getTotalWeight(Boat& B, Car& C);
private:
	float weight;
};
void Car::setC(float W)
{
	weight = W;
}

float getTotalWeight(Boat& B, Car& C)
{
	return B.weight + C.weight;
}

int main()
{
	Boat B;
	Car C;
	float W;
	cout << "Input boat weight:";
	cin >> W;
	B.setB(W);
	cout << "Input car weight:";
	cin >> W;
	C.setC(W);
	
	cout<<"Total weight:"<< getTotalWeight(B, C);

	return 0;
}

//���䣺������Ԫ����������ƽ���֡�
//#include  <string> 
//#define  N  100 
//
//class  student
//{
//public:
//    student(string  id = "", int  score = 0) :id(id), score(score)
//    {}
//    //
//    void setStudent(string ID, int Score)
//    {
//        id = ID;
//        score = Score;
//    }
//    friend double average(student* p, int  count);
//    //
//private:
//    string  id;
//    int  score;
//};
//double  average(student* p, int  count)
//{
//    //
//    double all = 0;
//    int i;
//    for (i = 0; i < count; i++)
//    {
//        all += p->score;
//        p++;
//    }
//
//    return all / count;
//    //
//}
//int  main()
//{
//    student  stu[N];
//    string  id;
//    int  score, total = 0;
//    double  aver;
//    cin >> id;
//    while ((id != "0") && total < N)
//    {//
//        cin >> score;
//        stu[total++].setStudent(id, score);
//        cin >> id;
//    }//
//    aver = average(stu, total);
//    cout << aver;
//    return  0;
//}





//������X,Y,Z,����h(X*),���㣺��X��˽�г�Աi��Y�ĳ�Ա����g(X*)��X����Ԫ������
//ʵ�ֶ�X�ĳ�Աi��1����Z����X����Ԫ�࣬���Ա����f(X*)ʵ�ֶ�X�ĳ�Աi��5��
//����h(X*)��X����Ԫ������ʵ�ֶ�X�ĳ�Աi��10��������ʵ�ֲ��ԡ�
//��������Ҫ�������£�

//class X;//����һ����X,��ΪYҪ�������������ﻹû�ж���X
//
//class  Y
//{
//public:
//    void  g(X& x);
//};
//
//class  Z
//{
//public:
//    void  f(X& x);
//};
//
//class  X
//{
//public:
//    X(int  i) :i(i) {}
//    friend  void  Y::g(X& x);
//    friend  class  Z;
//    friend  void  h(X& x);
//    void  print()
//    {
//        cout << i;
//    }
//private:
//    int  i;
//};
//void Y::g(X& x)
//{
//    x.i++;
//}
//void Z::f(X& x)
//{
//    x.i += 5;
//}
//void h(X& x)
//{
//    x.i += 10;
//}
//
//int  main()
//{
//    int  a;
//    cin >> a;
//    X  x(a);
//    Y  y;
//    Z  z;
//    y.g(x);
//    z.f(x);
//    h(x);
//    x.print();
//}
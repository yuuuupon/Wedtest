//11問目は解けませんでした…
#include<stdio.h>
#include<iostream>
#include<random>

using namespace std;

    //10問目の構造体
	struct Vector2
	{
	public:
		float Getvec_x()
		{
			return vec_x;
		}

		float Getvec_y()
		{ 
			return vec_y; 
		}

		float Setvec_x(float num)
		{
			return vec_x = num;
		}

		float Setvec_y(float num)
		{
			return vec_y = num;
		}

		Vector2(float num1, float num2)
		{
			Setvec_x(num1);
			Setvec_y(num2);
		}

	private:
		float vec_x;
		float vec_y;
	};

	float Distance(Vector2 vec1, Vector2 vec2)
	{
		//sqrt 平方根
		//累乗は ^2 ではなく #include<math.h> からの pow関数 らしい…
		//それ使うのは嫌だったためこの書き方にします
		float ans = sqrt((vec2.Getvec_x() - vec1.Getvec_x()) * 
		((vec2.Getvec_x() - vec1.Getvec_x()) + ((vec2.Getvec_y() -
		vec1.Getvec_y()) * ((vec2.Getvec_y() - vec1.Getvec_y())))));

		printf("\n%f\n", ans);

		return ans;
	}

	//11問目の構造体
	//この中からランダム取り出し？
	struct Card
	{
	public:
		//カードの数字とマークの情報
		int GetCardNum()
		{
			return cardNum;
		}

		int SetCardNum(int num)
		{
			return cardNum = num;
		}

		//こっちがマークの情報のやつ
		string GetStr()
		{
			return str;
		}

		string SetStr(string str)
		{
			return str = str;
		}

	private:
		string str;
		int cardNum = 0;
	};

	//もう一つ山札構造体を作成
	//ランダム機能はこっちにつけるっぽい？


int main()
{
	//①
	printf("%d\n", 0b1011 + 0b0101);
	printf("%d\n", 0b110100 + 0b11011);
	printf("%d\n", 0b1011 + 0b110011);

	//②
	printf("%d\n", 0xFF + 0xFF);
	printf("%d\n", 0xed + 0x10);
	printf("%d\n", 0x563 + 0xcd);

	//③
	printf("char   1バイト");
	printf("\nint    4バイト");
	printf("\nfloat  4バイト");
	printf("\ndouble 8バイト");

	//④
	printf("\n①");

	//⑤
	printf("\n34回");

	//⑥
	printf("\n20回");

	//⑦
	printf("\n80");

	/*
	int array[4][5];
	cout << "array size: " << sizeof array << "\n";
	*/

	//⑧
	printf("\n20");

	//⑨
	printf("\nint");

	//⑩
	//２点間の距離を求める関数を作成してください。
	Vector2 vec1(11, 1);
	Vector2 vec2(22, 2);
	Distance(vec1, vec2);

	//⑪
	/*
	    カード構造体を作成してください。→○
	    このカードはトランプのカードのことです。
		情報として、なんのカードなのかを持っていてください。
		スペードの7である、ハートの13であるなど。→？

		この構造体には現在の自分の情報を設定する処理と、
		現在の自分の情報を開示する処理を作ってください。


		トランプの山札の構造体を作成してください。
		その際カードには先ほど作った構造体を使用してください。
		以下の条件を満たしておくこと。
		トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
		Card card[53];

	    シャッフル機能を実装する。→ random?
		card[53]にランダムにカード情報を付与してください。
		card[0]がクラブの6、card[1]がハートの5といったように。
		その際同じカードは存在しないようにしてください。→割り当て
	*/
}
//11��ڂ͉����܂���ł����c
#include<stdio.h>
#include<iostream>
#include<random>

using namespace std;

    //10��ڂ̍\����
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
		//sqrt ������
		//�ݏ�� ^2 �ł͂Ȃ� #include<math.h> ����� pow�֐� �炵���c
		//����g���̂͌����������߂��̏������ɂ��܂�
		float ans = sqrt((vec2.Getvec_x() - vec1.Getvec_x()) * 
		((vec2.Getvec_x() - vec1.Getvec_x()) + ((vec2.Getvec_y() -
		vec1.Getvec_y()) * ((vec2.Getvec_y() - vec1.Getvec_y())))));

		printf("\n%f\n", ans);

		return ans;
	}

	//11��ڂ̍\����
	//���̒����烉���_�����o���H
	struct Card
	{
	public:
		//�J�[�h�̐����ƃ}�[�N�̏��
		int GetCardNum()
		{
			return cardNum;
		}

		int SetCardNum(int num)
		{
			return cardNum = num;
		}

		//���������}�[�N�̏��̂��
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

	//������R�D�\���̂��쐬
	//�����_���@�\�͂������ɂ�����ۂ��H


int main()
{
	//�@
	printf("%d\n", 0b1011 + 0b0101);
	printf("%d\n", 0b110100 + 0b11011);
	printf("%d\n", 0b1011 + 0b110011);

	//�A
	printf("%d\n", 0xFF + 0xFF);
	printf("%d\n", 0xed + 0x10);
	printf("%d\n", 0x563 + 0xcd);

	//�B
	printf("char   1�o�C�g");
	printf("\nint    4�o�C�g");
	printf("\nfloat  4�o�C�g");
	printf("\ndouble 8�o�C�g");

	//�C
	printf("\n�@");

	//�D
	printf("\n34��");

	//�E
	printf("\n20��");

	//�F
	printf("\n80");

	/*
	int array[4][5];
	cout << "array size: " << sizeof array << "\n";
	*/

	//�G
	printf("\n20");

	//�H
	printf("\nint");

	//�I
	//�Q�_�Ԃ̋��������߂�֐����쐬���Ă��������B
	Vector2 vec1(11, 1);
	Vector2 vec2(22, 2);
	Distance(vec1, vec2);

	//�J
	/*
	    �J�[�h�\���̂��쐬���Ă��������B����
	    ���̃J�[�h�̓g�����v�̃J�[�h�̂��Ƃł��B
		���Ƃ��āA�Ȃ�̃J�[�h�Ȃ̂��������Ă��Ă��������B
		�X�y�[�h��7�ł���A�n�[�g��13�ł���ȂǁB���H

		���̍\���̂ɂ͌��݂̎����̏���ݒ肷�鏈���ƁA
		���݂̎����̏����J�����鏈��������Ă��������B


		�g�����v�̎R�D�̍\���̂��쐬���Ă��������B
		���̍ۃJ�[�h�ɂ͐�قǍ�����\���̂��g�p���Ă��������B
		�ȉ��̏����𖞂����Ă������ƁB
		�g�����v�̖�����53��(1 �` 13 * 4 + �W���[�J�[1)
		Card card[53];

	    �V���b�t���@�\����������B�� random?
		card[53]�Ƀ����_���ɃJ�[�h����t�^���Ă��������B
		card[0]���N���u��6�Acard[1]���n�[�g��5�Ƃ������悤�ɁB
		���̍ۓ����J�[�h�͑��݂��Ȃ��悤�ɂ��Ă��������B�����蓖��
	*/
}
#pragma once

namespace AssortedWidgets
{
	namespace Util
	{
		class Position
		{
		public:
			//���η�ֹ���ָ��������
			int x;
			int y;

		public:
			Position(void):x(0),y(0)
			{};

			Position(int _x,int _y):x(_x),y(_y)
			{};

			Position(const Position &in):x(in.x),y(in.y)
			{};

			void operator=(const Position &in)
			{
				x=in.x;
				y=in.y;
			};

			void operator+=(const Position &in)
			{
				x+=in.x;
				y+=in.y;
			};

			void operator-=(const Position &in)
			{
				x-=in.x;
				y-=in.y;
			};

			bool operator==(const Position &in)
			{
				return ((x==in.x)&&(y=in.y));
			};
		public:
			~Position(void){};
		};
	}
}
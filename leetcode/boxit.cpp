#include<iostream>
using namespace std;

class Box{             //class Box
private:
    int l,b,h;

    public :
    Box()                   //default constructor. b1
    {
        l=b=h=0;
    }
    Box(int length, int breadth, int height)  //parameterised constructor
    {
        l =length;
        b=breadth;
        h=height;
    }
    Box(const Box & B)    // copy constructor. b2
    {
        l =B.l;
        b=B.b;
        h=B.h;
    }

    int getLength()
    {
        return l;
    }
    
    int getBreadth()
    {
        return  b;
    }

    int getHeight()
   {
        return  h;
   }

    long long CalculateVolume()
     {
        long long volume = l;
            volume *= b;
            volume *= h;
            return volume;

    }

    bool operator < ( Box &B)
    {
        if (l<B.l)
        {
            return true;
        }
        if((b<B.b) && (l==B.l))
        {
            return true;
        }
        if (h<B.h && b==B.b && l==B.l)
        {
            return true;
        }  

        return false;
    }

friend ostream & operator << (ostream & out, Box &b);
};

ostream & operator << (ostream & out, Box &b)
{
    cout<<""<<b.l<<" "<<b.b<<" "<<b.h;
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
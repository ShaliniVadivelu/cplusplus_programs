/*The School №0 of the capital of Berland has n children studying in it. All the children in this school are gifted: some of them are good at programming, some are good at maths, others are good at PE (Physical Education). Hence, for each child we know value ti:

ti = 1, if the i-th child is good at programming,
ti = 2, if the i-th child is good at maths,
ti = 3, if the i-th child is good at PE
Each child happens to be good at exactly one of these three subjects.

The Team Scientific Decathlon Olympias requires teams of three students. The school teachers decided that the teams will be composed of three children that are good at different subjects. That is, each team must have one mathematician, one programmer and one sportsman. Of course, each child can be a member of no more than one team.

What is the maximum number of teams that the school will be able to present at the Olympiad? How should the teams be formed for that?

Input
The first line contains integer n (1 ≤ n ≤ 5000) — the number of children in the school. The second line contains n integers t1, t2, ..., tn (1 ≤ ti ≤ 3), where ti describes the skill of the i-th child.

Output
In the first line output integer w — the largest possible number of teams.

Then print w lines, containing three numbers in each line. Each triple represents the indexes of the children forming the team. You can print both the teams, and the numbers in the triplets in any order. The children are numbered from 1 to n in the order of their appearance in the input. Each child must participate in no more than one team. If there are several solutions, print any of them.

If no teams can be compiled, print the only line with value w equal to 0. */

#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
    int n_students,p_value[5000],m_value[5000],s_value[5000],team,chk,x=0,y=0,z=0;

    cin>>n_students;
    int studentValue[n_students];
    for (int i=0;i<n_students;i++) 
    {   // getting the each student value and storing it in array
        cin>>studentValue[i];
    }
    
    for (int i=0;i<n_students;i++)
    {
        // storing the index of the value of each student
        if (studentValue[i]==1)
        {
            p_value[x] =i+1;      
            x++;
        }
        else if (studentValue[i]==2)
        {
            m_value[y] =i+1;
            y++;
        }
        else if (studentValue[i]==3)
        {
            s_value[z] =i+1;
            z++;
        }
    }
    // checking the min of value count so that we can find the no.of possible team
    chk=min(x,y);    
    team=min(z,chk);

    cout<<team<<endl;
    // printing the index of value of each team in separate lines
    for (x=0,y=0,z=0;x<team,y<team,z<team;x++,y++,z++)
    cout<<p_value[x]<<" "<<m_value[y]<<" "<<s_value[z]<<endl;
}

// i/p :7
//      1 3 1 3 2 1 2

// o/p : 2
//       3 5 2
//       6 7 4

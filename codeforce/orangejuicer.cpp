//Kolya is going to make fresh orange juice. He has n oranges of sizes a1, a2, ..., an. Kolya will put them in the juicer in the fixed order, starting with orange of size a1, then orange of size a2 and so on. To be put in the juicer the orange must have size not exceeding b, so if Kolya sees an orange that is strictly greater he throws it away and continues with the next one.

//The juicer has a special section to collect waste. It overflows if Kolya squeezes oranges of the total size strictly greater than d. When it happens Kolya empties the waste section (even if there are no more oranges) and continues to squeeze the juice. How many times will he have to empty the waste section?
//Input
// The first line of the input contains three integers n, b and d (1 ≤ n ≤ 100 000, 1 ≤ b ≤ d ≤ 1 000 000) — the number of oranges, the maximum size of the orange that fits in the juicer and the value d, which determines the condition when the waste section should be emptied.

// The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 1 000 000) — sizes of the oranges listed in the order Kolya is going to try to put them in the juicer.

// Output
// Print one integer — the number of times Kolya will have to empty the waste section.

#include <iostream>
using namespace std;

int main()
{
    int long no_orange, max_size, waste_cdn, orange;
    int add_orange = 0, empties_waste = 0;
    cin >> no_orange >> max_size >> waste_cdn;

    for (int i = 0; i < no_orange; i++)
    {
        cin >> orange;
        if (orange > max_size)
        {
            continue;
        }
            add_orange += orange;

        if (add_orange > waste_cdn)
        {
            empties_waste += 1;
            add_orange = 0;
        }
    }

    cout << "" << empties_waste;
}

// i/p: 1 1 1 , 1 -> o/p : 0
// 3 10 10, 5 7 7 -> o/p:1
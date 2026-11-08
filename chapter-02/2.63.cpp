#include <iostream>

using std::cout;

int main()
{
    int day = 1;
    int gift;

    while (day <= 12) {
        cout << "On the ";

        switch (day) {
            case 1:
                cout << "first";
                break;
            case 2:
                cout << "second";
                break;
            case 3:
                cout << "third";
                break;
            case 4:
                cout << "fourth";
                break;
            case 5:
                cout << "fifth";
                break;
            case 6:
                cout << "sixth";
                break;
            case 7:
                cout << "seventh";
                break;
            case 8:
                cout << "eighth";
                break;
            case 9:
                cout << "ninth";
                break;
            case 10:
                cout << "tenth";
                break;
            case 11:
                cout << "eleventh";
                break;
            case 12:
                cout << "twelfth";
                break;
        }

        cout << " day of Christmas\nmy true love sent to me:\n";

        for (gift = day; gift >= 1; gift--) {
            switch (gift) {
                case 12:
                    cout << "Twelve drummers drumming,\n";
                    break;
                case 11:
                    cout << "Eleven pipers piping,\n";
                    break;
                case 10:
                    cout << "Ten lords a-leaping,\n";
                    break;
                case 9:
                    cout << "Nine ladies dancing,\n";
                    break;
                case 8:
                    cout << "Eight maids a-milking,\n";
                    break;
                case 7:
                    cout << "Seven swans a-swimming,\n";
                    break;
                case 6:
                    cout << "Six geese a-laying,\n";
                    break;
                case 5:
                    cout << "Five golden rings,\n";
                    break;
                case 4:
                    cout << "Four calling birds,\n";
                    break;
                case 3:
                    cout << "Three French hens,\n";
                    break;
                case 2:
                    cout << "Two turtle doves,\n";
                    break;
                case 1:
                    if (day > 1)
                        cout << "and ";
                    cout << "a partridge in a pear tree.\n";
                    break;
            }
        }

        cout << '\n';
        day++;
    }

    return 0;
}

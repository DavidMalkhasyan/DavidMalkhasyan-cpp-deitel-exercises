a)

if (age >= 65); // problem is here 
    cout << "Age is greater than or equal to 65" << endl;
else
    cout << "Age is less than 65" << endl;

b)
if (age >= 65)
    cout << "Age is greater than or equal to 65" << endl;
else; //same problem but in else 
    cout << "Age is less than 65" << endl;


c)

int x = 1, total; //its wrong way for declare 
while (x <= 10) {
    total += x;
    ++x;
}


d)

// everything fine
while (x <= 100) {
    total += x;
    ++x;
}

e)


while (y > 0) {
    cout << y << endl;
    ++y;
}




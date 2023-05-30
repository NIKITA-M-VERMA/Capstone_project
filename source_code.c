#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

void menu1();

void add()
{
    system("cls");
    int n;
    float sum = 0.0;
    printf("enter the no. of term to add : ");
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d terms : ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    printf("the sum is %f", sum);
    getch();
    system("cls");
    menu1();
}
void subt()
{
    system("cls");
    int n;
    printf("enter the no. of term to subtract from first term : ");
    scanf("%d", &n);
    float arr[n];
    printf("enter the %d terms : ", 1);
    scanf("%f", &arr[0]);
    float diff = arr[0];
    for (int i = 1; i < n; i++)
    {
        printf("enter the %d terms : ", i + 1);
        scanf("%f", &arr[i]);
        diff -= arr[i];
    }
    printf("the difference is %f", diff);
    getch();
    system("cls");
    menu1();
}

void multiply()
{
    system("cls");
    int n;
    float prod = 1.0;
    printf("enter the no. of term to multiply : ");
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d terms : ", i + 1);
        scanf("%f", &arr[i]);
        prod *= arr[i];
    }
    printf("the product is %f", prod);
    getch();
    system("cls");
    menu1();
}

void divide()
{
    system("cls");
    int n;
    printf("enter the no. of term to divide from first term : ");
    scanf("%d", &n);
    float arr[n];
    printf("enter the %d terms : ", 1);
    scanf("%f", &arr[0]);
    float div = arr[0];
    for (int i = 1; i < n; i++)
    {
        printf("enter the %d terms : ", i + 1);
        scanf("%f", &arr[i]);
        div /= arr[i];
    }
    printf("the dividend is %f", div);
    getch();
    system("cls");
    menu1();
}

void power()
{
    system("cls");
    float n, x;
    printf("enter the number: ");
    scanf("%f", &n);
    printf("enter the power: ");
    scanf("%f", &x);

    float power = pow(n, x);
    printf("the answer is %f", power);
    getch();
    system("cls");
    menu1();
}

void square_root()
{
    system("cls");
    float n, x;
    printf("enter the number: ");
    scanf("%f", &n);
    float power = pow(n, 0.5);
    printf("the answer is %f", power);
    getch();
    system("cls");
    menu1();
}

void sine()
{
    system("cls");
    float angle, angle1, sinvalue;
    int t;
    const float pi = 3.14159;
    printf("type 1 for angle in radian and 2 for angle in degree : ");
    scanf("%d", &t);
    if (t == 1)
    {
        printf("Enter an angle in radians: ");
        scanf("%f", &angle);
        sinvalue = sin(angle);
        printf("sin(%f) : %f\n", angle, sinvalue);
    }
    else if (t == 2)
    {
        printf("Enter an angle in degree: ");
        scanf("%f", &angle1);
        angle = angle1 * pi / 180;
        sinvalue = sin(angle);
        printf("sin(%f) : %f\n", angle1, sinvalue);
    }
    getch();
    system("cls");
    menu1();
}

void cosine()
{
    system("cls");
    float angle, angle1, cosvalue;
    int t;
    const float pi = 3.14159;
    printf("type 1 for angle in radian and 2 for angle in degree : ");
    scanf("%d", &t);
    if (t == 1)
    {
        printf("Enter an angle in radians: ");
        scanf("%f", &angle);
        cosvalue = cos(angle);
        printf("Cos(%f) : %f\n", angle, cosvalue);
    }
    else if (t == 2)
    {
        printf("Enter an angle in degree: ");
        scanf("%f", &angle1);
        angle = angle1 * pi / 180;
        cosvalue = cos(angle);
        printf("Cos(%f) : %f\n", angle1, cosvalue);
    }
    getch();
    system("cls");
    menu1();
}

void tangent()
{
    system("cls");

    float angle, angle1, tanvalue;
    int t;
    const float pi = 3.14159;
    printf("type 1 for angle in radian and 2 for angle in degree : ");
    scanf("%d", &t);
    if (t == 1)
    {
        printf("Enter an angle in radians: ");
        scanf("%f", &angle);
        tanvalue = tan(angle);
        printf("tan(%f) : %f\n", angle, tanvalue);
    }
    else if (t == 2)
    {
        printf("Enter an angle in degree: ");
        scanf("%f", &angle1);
        angle = angle1 * pi / 180;
        tanvalue = tan(angle);
        printf("tan(%f) : %f\n", angle1, tanvalue);
    }
    getch();
    system("cls");
    menu1();
}

void subtraction()
{
    system("cls");

    float i, j, k, x, y, z;
    printf("Enter the i,j,k components of Vector1 respectively:");
    scanf("%f%f%f", &i, &j, &k);
    printf("Enter the i,j,k components of Vector2 respectively:");
    scanf("%f%f%f", &x, &y, &z);
    i = i - x;
    j = j - y;
    k = k - z;
    printf("The resultant vector is:\n");
    printf("%fi,%fj,%fk", i, j, k);
    getch();
    system("cls");
    vector();
}

void cross()
{
    system("cls");

    float i, j, k, x, y, z, a, b, c;
    printf("Enter the i,j,k components of Vector1 respectively:");
    scanf("%f%f%f", &i, &j, &k);
    printf("Enter the i,j,k components of Vector2 respectively:");
    scanf("%f%f%f", &x, &y, &z);
    a = (j * z) - (k * y);
    b = (-1) * ((i * z) - (k * x));
    c = (i * y) - (x * j);
    printf("The resultant vector is:\n");
    printf("%fi,%fj,%fk", a, b, c);
    getch();
    system("cls");
    vector();
}
void magnitude()
{
    system("cls");

    int n;
    float magnitude;
    printf("Enter dimension of vector(2 or 3)");
    scanf("%d", &n);
    if (n == 3)
    {
        printf("Enter directin ratios x,y,z respectively:");
        float arr[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%f", &arr[i]);
        }
        magnitude = sqrt((arr[0] * arr[0]) + (arr[1] * arr[1]) + (arr[2] * arr[2]));
    }
    if (n == 2)
    {
        printf("Enter directin ratios x,y respectively:");
        float arr[2];
        for (int i = 0; i < 2; i++)
        {
            scanf("%f", &arr[i]);
        }
        magnitude = sqrt((arr[0] * arr[0]) + (arr[1] * arr[1]));
    }
    printf("Magnitude: %f", magnitude);
    getch();
    system("cls");
    vector();
}

void addVectors()
{
    system("cls");
    float i, j, k, x, y, z;
    printf("Enter the i,j,k components of Vector1 respectively:");
    scanf("%f%f%f", &i, &j, &k);
    printf("Enter the i,j,k components of Vector2 respectively:");
    scanf("%f%f%f", &x, &y, &z);
    i = i + x;
    j = j + y;
    k = k + z;
    printf("The resultant vector is:\n");
    printf("%fi,%fj,%fk", i, j, k);
    getch();
    system("cls");
    vector();
}

void dotProduct()
{
    system("cls");

    float i, j, k, x, y, z, a, b, c;
    printf("Enter the i,j,k components of Vector1 respectively:");
    scanf("%f%f%f", &i, &j, &k);
    printf("Enter the i,j,k components of Vector2 respectively:");
    scanf("%f%f%f", &x, &y, &z);
    a = (i * x);
    b = (j * y);
    c = (k * z);
    printf("The resultant vector is:\n");
    printf("%f", a + b + c);
    getch();
    system("cls");
    vector();
}

void box()
{
    system("cls");

    float i, j, k, x, y, z, a, b, c, p, q, r;
    printf("Enter the i,j,k components of Vector1 respectively:");
    scanf("%f%f%f", &p, &q, &r);
    printf("Enter the i,j,k components of Vector2 respectively:");
    scanf("%f%f%f", &i, &j, &k);
    printf("Enter the i,j,k components of Vector3 respectively:");
    scanf("%f%f%f", &x, &y, &z);
    a = (j * z) - (k * y);
    b = (-1) * ((i * z) - (k * x));
    c = (i * y) - (x * j);
    p = p * a;
    q = q * b;
    r = r * c;
    p = p + q + r;
    printf("The Box product is::\n");
    printf("%f", p);
    getch();
    system("cls");
    vector();
}
void projection()
{
    system("cls");

    int n;
    printf("Enter the dimension of vector A and B:");
    scanf("%d", &n);
    float A[3];
    float B[3];
    printf("To obtain projection vector of vector A on vector B.");
    printf("\nDirection ratios x,y,z of vector A:");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &A[i]);
    }
    printf("\nDirection ratios x,y,z of vector B:");

    for (int j = 0; j < 3; j++)
    {
        scanf("%f", &B[j]);
    }
    float magnitudeB = sqrt(B[0] * B[0] + B[1] * B[1] + B[2] * B[2]);
    float unitB[3];
    for (int k = 0; k < 3; k++)
    {
        unitB[k] = B[k] / magnitudeB;
    }
    float AdotunitB;
    for (int l = 0; l < 3; l++)
    {
        AdotunitB = AdotunitB + A[l] * unitB[l];
    }
    float proj[3];
    for (int m = 0; m < 3; m++)
    {
        proj[m] = unitB[m] * AdotunitB;
    }
    printf("projection of A on B: (%fi,%fj,%fk)", proj[0], proj[1], proj[2]);
    getch();
    system("cls");
    vector();
}

void scalarMultiplication()
{
    system("cls");

    float a, x, y, z;
    printf("a(xi,yj,zk)");
    printf("\nx=");
    scanf("%f", &x);
    printf("\ny=");
    scanf("%f", &y);
    printf("\nz=");
    scanf("%f", &z);
    printf("\na=");
    scanf("%f", &a);
    printf("\na(xi,yj,zk)=(%fi,%fj,%fk)", a * x, a * y, a * z);
    getch();
    system("cls");
    vector();
}

void exit1()
{
    menu1();
}

void vector()
{
    system("cls");
    int a;
    printf("\t\tVECTOR CALCULATOR\t\t\n\n\n");
    printf("1)a+b\n2)a-b\n3)a.b\n4)a x b\n5)Magnitude\n6)a.(b x c)\n7)Projection\n8)Scalar Mutiplication\n9)Exit\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        addVectors();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        dotProduct();
        break;
    case 4:
        cross();
        break;
    case 5:
        magnitude();
        break;
    case 6:
        box();
        break;
    case 7:
        projection();
        break;
    case 8:
        scalarMultiplication();
        break;
    case 9:
        exit1(0);
        break;
    default:
        printf("Please enter a number between 1-9");
    }
}

void calculator()
{
    menu1();
}
void menu1()
{
    int x;
    system("cls");
    printf("      * * * * * * * * * * *\n");
    printf("      *                   *\n");
    printf("      *    CALCULATOR     *\n");
    printf("      *                   *\n");
    printf("      * * * * *  *  * * * *\n");
    printf("      *         * *       *\n");
    printf("      * * * * *  *  * * * *\n");
    printf("      * * * * * * * * * * *\n");
    printf("      * * * * * * * * * * *\n");
    printf("      * * * * * * * * * * *\n");
    printf("      * * * * * * * * * * *\n");
    printf("      * * * * * * * * * * *\n");
    printf("      * * * * * * * * * * *\n");
    printf("      * * * * * * * * * * *\n");
    printf("      * * * * * * * * * * *\n");
    printf("      * * * * * * * * * * *\n");

    printf("         FUNCTIONS   ");
    printf("\n\n");
    printf("         1.ADD  \n");
    printf("         2.SUBTRACT   \n");
    printf("         3.MULTIPLY   \n");
    printf("         4.DIVIDE   \n");
    printf("         5.POWER   \n");
    printf("         6.SQUARE ROOT   \n");
    printf("         7.SINE   \n");
    printf("         8.COSINE   \n");
    printf("         9.TANGENT   \n");
    printf("         10.VECTOR CALCULATIONS   \n");
    printf("         11.exit   \n");

    printf("enter the choice : ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        add();
        break;
    case 2:
        subt();
        break;
    case 3:
        multiply();
        break;
    case 4:
        divide();
        break;
    case 5:
        power();
        break;
    case 6:
        square_root();
        break;
    case 7:
        sine();
        break;
    case 8:
        cosine();
        break;
    case 9:
        tangent();
        break;
    case 10:
        vector();
        break;
    case 11:
        main();
        break;

    default:
        system("cls");
        printf("\nEnter 1 to 10 only");
        printf("\n Enter any key");
        menu1();
    }
}

struct person
{
    char name[50];
    long int number;
    char email[50];
    int ringtone;
    char relation[50];
};
struct person p;
void back();
void menu();
void addperson(struct person *pe)
{
    system("cls");

    FILE *f;
    f = fopen("contact", "ab+");

    printf("Enter the name: ");
    scanf("%s", pe->name);
    printf("Enter the phone number: ");
    scanf("%ld", &pe->number);
    printf("Enter the email: ");
    scanf("%s", pe->email);

    char choice;
    printf("Do you want to set a specific ringtone for this person? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        int ringtoneChoice;

        printf("\nRingtone Options:\n");
        printf("1. Caller tune 1\n");
        printf("2. oh ho ho  2\n");
        printf("3. high rated gabru \n");
        printf("4. born to shine \n");
        printf("5. dhol jageeron da\n");
        printf("6.  jaguar \n");
        printf("7. amplifier\n");
        printf("8. guitar sikhda \n");
        printf("9. na na na\n");
        printf("10. party all night\n");
        printf("Enter the ringtone choice (1-10): ");
        scanf("%d", &ringtoneChoice);

        if (ringtoneChoice >= 1 && ringtoneChoice <= 10)
        {
            pe->ringtone = ringtoneChoice;
            printf("Ringtone set successfully!\n");
        }
        else
        {
            printf("Invalid ringtone choice. Setting to default.\n");
            pe->ringtone = 0; // Default ringtone
        }
    }
    else
    {
        pe->ringtone = 0; // Default ringtone
    }

    printf("Enter the relation with the connection: ");
    scanf("%s", pe->relation);

    printf("Contact added successfully.\n");
    fwrite(pe, sizeof(struct person), 1, f);
    fclose(f);

    printf("\n\nEnter any key");
    getch();
    system("cls");
    menu();
}

void search()
{
    FILE *f;
    int option;
    int found = 0;

    f = fopen("contact", "r");
    if (f == NULL)
    {
        system("cls");
        printf("No contacts available.\n");
        printf("\n\nPress any key to continue");
        getch();
        system("cls");
        menu();
    }

    system("cls");
    printf("Search by:\n");
    printf("1. Name\n");
    printf("2. Relation\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    if (option == 1)
    {
        char name[50];
        printf("Enter contact name: ");
        scanf("%s", name);

        while (fread(&p, sizeof(p), 1, f) == 1)
        {
            if (strcmp(p.name, name) == 0)
            {
                printf("\nName: %s\nPhone no.: %ld\nEmail: %s\n", p.name, p.number, p.email);
                found = 1;
            }
        }
    }
    else if (option == 2)
    {
        char relation[50];
        printf("Enter relation type: ");
        scanf("%s", relation);

        while (fread(&p, sizeof(p), 1, f) == 1)
        {
            if (strcmp(p.relation, relation) == 0)
            {
                printf("\nName: %s\nPhone no.: %ld\nEmail: %s\n", p.name, p.number, p.email);
                found = 1;
            }
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }

    if (found == 0)
    {
        printf("No contacts found with the given relation.\n");
        printf("Are you sure you have a connection with someone?\n");
    }

    fclose(f);
    printf("\n\nPress any key to continue");
    getch();
    system("cls");
    menu();
}

void update()
{
    FILE *f;
    char name1[100];
    int found = 0;

    f = fopen("contact", "r+");
    if (f == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    system("cls");
    printf("Enter the contact name: ");
    scanf("%49s", name1);

    while (fread(&p, sizeof(p), 1, f) == 1)
    {
        if (strcmp(p.name, name1) == 0)
        {
            printf("\nOld Details:\nName: %s\nPhone Number: %ld\nEmail: %s\nRelation: %s\nRingtone: %s\n",
                   p.name, p.number, p.email, p.relation, p.ringtone);
            printf("\nEnter new details:\n");
            printf("Enter the name: ");
            scanf("%49s", p.name);
            printf("Enter the phone number: ");
            scanf("%ld", &p.number);
            printf("Enter the email: ");
            scanf("%49s", p.email);
            printf("Enter the relation: ");
            scanf("%49s", p.relation);
            printf("Enter the ringtone: ");
            scanf("%49s", p.ringtone);
            fseek(f, ftell(f) - sizeof(p), 0);
            fwrite(&p, sizeof(p), 1, f);
            printf("\nContact updated successfully!");

            printf("\n\nThat's great! Your connections are improving. Hope this brings a positive impact on your life.\n");

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Contact not found!");
    }

    fclose(f);
    printf("\n\nPress any key to continue");
    getch();
    system("cls");
    menu();
}

void deleterecord()
{
    struct person p;
    FILE *f, *ft;
    int flag;
    char name[100];
    f = fopen("contact", "rb");
    if (f == NULL)
    {
        printf("\nCONTACT'S DATA NOT ADDED YET.");
    }
    else
    {
        ft = fopen("temp", "wb+");
        if (ft == NULL)
        {
            printf("\nfile opening error");
        }
        else
        {
            system("cls");
            printf("\nEnter CONTACT'S NAME:");
            scanf("%s", name);
            fflush(stdin);
            while (fread(&p, sizeof(p), 1, f) == 1)
            {
                if (strcmp(p.name, name) != 0)
                    fwrite(&p, sizeof(p), 1, ft);
                else if (strcmp(p.name, name) == 0)
                    flag = 1;
            }
            fclose(f);
            fclose(ft);
            if (flag != 1)
            {
                printf("\nNO CONTACT'S RECORD TO DELETE.");
                remove("temp");
            }
            else
            {
                remove("contact");
                rename("temp", "contact");
                printf("\nRECORD DELETED SUCCESSFULLY.");
            }
        }
    }
    printf("\n Enter any key");
    getch();
    system("cls");
    menu();
}

void listcontacts()
{
    FILE *f;
    struct person contacts[100];
    int count = 0;

    f = fopen("contact", "rb");
    if (f == NULL)
    {
        printf("No contacts available.\n");
        printf("\n\nPress any key to continue");
        getch();
        system("cls");
        menu();
    }

    system("cls");
    printf("List of Contacts:\n");

    while (fread(&contacts[count], sizeof(struct person), 1, f) == 1)
    {
        count++;
    }

    // Sorting contacts array by name in alphabetical order
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(contacts[i].name, contacts[j].name) > 0)
            {
                struct person temp = contacts[i];
                contacts[i] = contacts[j];
                contacts[j] = temp;
            }
        }
    }

    // sorted contacts
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s\nPhone Number: %ld\nEmail: %s\n\n", contacts[i].name, contacts[i].number, contacts[i].email);
    }

    fclose(f);
    printf("\n\nPress any key to continue");
    getch();
    system("cls");
    menu();
}

void block()
{
    struct person p;
    char nameb[100];
    FILE *f;
    f = fopen("contact", "rb");
    FILE *ptr;
    ptr = fopen("block", "ab");
    int flag = 0;
    FILE *ft;
    ft = fopen("temp", "wb");
    system("cls");

    printf("enter the conatct name to block: ");
    scanf("%s", nameb);

    if (f == NULL || ptr == NULL)
    {
        printf("ERROR OPENING FILES");
    }

    else
    {
        while (fread(&p, sizeof(p), 1, f) == 1)
        {
            if (strcmp(p.name, nameb) == 0)
            {
                fwrite(&p, sizeof(p), 1, ptr);
                flag = 1;
            }
            else
            {
                fwrite(&p, sizeof(p), 1, ft);
            }
        }

        fclose(f);
        fclose(ptr);
        fclose(ft);

        if (flag != 1)
        {
            printf("NO CONTACT'S RECORD TO BLOCK.\n");
            remove("temp");
        }
        else
        {
            remove("contact");
            rename("temp", "contact");
            printf("Contact blocked and moved to the block file.\n");
        }
    }
    printf("\n Enter any key");
    getch();
    system("cls");
    menu();
}

void unblock()
{
    struct person p;
    char nameu[100];
    FILE *f;
    f = fopen("contact", "ab");
    FILE *ptr;
    ptr = fopen("block", "rb");
    int flag = 0;
    FILE *ft;
    ft = fopen("temp", "wb");
    system("cls");

    printf("enter the contact name to unblock: ");
    scanf("%s", nameu);

    if (f == NULL || ptr == NULL || ft == NULL)
    {
        printf("ERROR OPENING FILES");
    }

    else
    {
        while (fread(&p, sizeof(p), 1, ptr) == 1)
        {
            if (strcmp(p.name, nameu) == 0)
            {
                fwrite(&p, sizeof(p), 1, f);

                flag = 1;
            }
            else
            {
                fwrite(&p, sizeof(p), 1, ft);
            }
        }

        fclose(f);
        fclose(ptr);
        fclose(ft);

        if (flag != 1)
        {
            printf("NO CONTACT'S RECORD TO UNBLOCK.\n");
            remove("temp");
        }
        else
        {
            remove("block");
            rename("temp", "block");
            printf("Contact unblocked and moved to the contact file.\n");
        }
    }
    printf("\n Enter any key");
    getch();
    system("cls");
    menu();
}

void blocklist()
{
    FILE *f;
    struct person contacts[100];
    int count = 0;

    f = fopen("block", "rb");
    if (f == NULL)
    {
        printf("No contacts available.\n");
        printf("\n\nPress any key to continue");
        getch();
        system("cls");
        menu();
    }

    system("cls");
    printf("List of Contacts:\n");

    while (fread(&contacts[count], sizeof(struct person), 1, f) == 1)
    {
        count++;
    }

    // Sorting contacts array by name in alphabetical order
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(contacts[i].name, contacts[j].name) > 0)
            {
                struct person temp = contacts[i];
                contacts[i] = contacts[j];
                contacts[j] = temp;
            }
        }
    }

    // sorted contacts
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s\nPhone Number: %ld\nEmail: %s\n\n", contacts[i].name, contacts[i].number, contacts[i].email);
    }

    fclose(f);
    printf("\n\nPress any key to continue");
    getch();
    system("cls");
    menu();
}

void message()
{
    FILE *f;
    char name[100];
    int found = 0;

    f = fopen("contact", "rb");
    if (f == NULL)
    {
        printf("No contacts available.\n");
        printf("\n\nPress any key to continue");
        getch();
        system("cls");
        menu();
    }

    system("cls");
    printf("Send Message\n");
    printf("Enter contact name: ");
    scanf("%s", name);

    while (fread(&p, sizeof(struct person), 1, f) == 1)
    {
        if (strcmp(p.name, name) == 0)
        {
            found = 1;
            break;
        }
    }

    fclose(f);

    if (found)
    {
        int choice;

        system("cls");
        printf("Contact found!\n");
        printf("Selected contact:\n");
        printf("Name: %s\nPhone Number: %ld\nEmail: %s\n\n", p.name, p.number, p.email);

        printf("Choose a message option:\n");
        printf("1. Good morning!\n");
        printf("2. Happy birthday!\n");
        printf("3. Congratulations!\n");
        printf("4. Thinking of you.\n");
        printf("5. Let's catch up!\n");
        printf("6. Type a custom message.\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        char message[200];

        switch (choice)
        {
        case 1:
            strcpy(message, "Good morning!");
            break;
        case 2:
            strcpy(message, "Happy birthday!");
            break;
        case 3:
            strcpy(message, "Congratulations!");
            break;
        case 4:
            strcpy(message, "Thinking of you.");
            break;
        case 5:
            strcpy(message, "Let's catch up!");
            break;
        case 6:
            printf("Enter your custom message: ");
            getchar(); // Clear newline character
            fgets(message, sizeof(message), stdin);
            break;
        default:
            printf("Invalid choice.\n");
            printf("\n\nPress any key to continue");
            getch();
            system("cls");
            menu();
        }

        printf("Message sent to %s: %s\n", p.name, message);
    }
    else
    {
        char choice;

        system("cls");
        printf("Contact not found!\n");
        printf("Would you like to save this as a new contact? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y')
        {
            addperson(&p);
        }
    }

    printf("\n\nPress any key to continue");
    getch();
    system("cls");
    menu();
}
void exit2()
{
    system("cls");
    main();
}

void phonebook()
{
    menu();
}

void menu()
{
    system("cls");
    printf("*************************************************************************************************************\n");
    printf("*                                                                                                           *\n");
    printf("*            ******   *   *  *******   *       *  ******       ******   *******   *******  *     *          *\n");
    printf("*            *    *   *   *  *     *   * *     *  *            *     *  *     *   *     *  *   *            *\n");
    printf("*            ******   *****  *     *   *   *   *  ****         *******  *     *   *     *  * *              *\n");
    printf("*            *        *   *  *     *   *     * *  *            *     *  *     *   *     *  *   *            *\n");
    printf("*            *        *   *  *******   *       *  ******       ******   *******   *******  *     *          *\n");
    printf("*                                                                                                           *\n");
    printf("*************************************************************************************************************\n");

    printf("\n\n\t\t\t  MENU\t\t\n\n");
    printf("\t1.Add New\n");
    printf("\t2.search\n");
    printf("\t3.modify\n");
    printf("\t4.list\n");
    printf("\t5.delete\n");
    printf("\t6.block\n");
    printf("\t7.unblock\n");
    printf("\t8.blocklist\n");
    printf("\t9.message\n");
    printf("\t10.exit\n");
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        addperson(&p);
        break;
    case 2:
        search();
        break;
    case 3:
        update();
        break;
    case 4:
        listcontacts();
        break;
    case 5:
        deleterecord();
        break;
    case 6:
        block();
        break;
    case 7:
        unblock();
        break;
    case 8:
        blocklist();
        break;
    case 9:
        message();
        break;
    case 10:
        exit2();
        break;

    default:
        system("cls");
        printf("\nEnter 1 to 9 only");
        printf("\n Enter any key");
        getch();
        menu();
    }
}

void back()
{
    menu();
}

int main()
{
    int n;
    system("cls");
    system("COLOR 3F");
    printf("* * * * * * * * * * * APPLICATION * * * * * * * * * * *\n\n\n");
    printf("1.PHONEBOOK\n");
    printf("2.CALCULATOR\n\n");
    printf("enter the choice to begin :");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        phonebook();
        break;
    case 2:
        calculator();
        break;
    }
}
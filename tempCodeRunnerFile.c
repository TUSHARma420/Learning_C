#include <stdio.h>

void insertion(int array[], int ele, int pos, int opt)
{
    int i;
    if (opt == 1) // element to be inserted at position given by user
    {
        for (i = 4; i >= pos - 1; i--)
        {
            array[i + 1] = array[i];
        }
        array[pos - 1] = ele;
    }
    else if (opt == 2) // element to be inserted at beginning of array
    {
        for (i = 4; i >= 0; i--)
        {
            array[i + 1] = array[i];
        }
        array[0] = ele;
    }
    else if (opt == 3) // element to be inserted at end of array
    {
        array[5] = ele;
    }
    else
    {
        printf("Wrong choice, error in code");
    }
    printf("The array after insertion is :- \n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", array[i]);
    }
}

void deletion(int array[], int ele, int pos, int opt)
{
    int i, j;
    if (opt == 1) // deletion by position
    {
        for (i = pos - 1; i < 4; i++)
        {
            array[i] = array[i + 1];
        }
    }
    else if (opt == 2) // deleting by element
    {
        for (i = 0; i < 5; i++)
        {
            if (array[i] == ele)
            {
                for (j = i; j < 4; j++)
                {
                    array[j] = array[j + 1];
                }
                break;
            }
        }
    }
    else if (opt == 3) // deleting by element, all occurrences of the element
    {
        for (i = 0; i < 5; i++)
        {
            if (array[i] == ele)
            {
                for (j = i; j < 4; j++)
                {
                    array[j] = array[j + 1];
                }
            }
        }
    }
    else
    {
        printf("Wrong choice, error in code");
    }
    int size = sizeof array / sizeof array[0];
    printf("The array after deletion is :- \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}

void search(int array[], int ele, int pos, int opt)
{
    int i;
    if (opt == 1) // searching by position
    {
        printf("Number at position %d is %d ", pos, array[pos]);
    }
    else if (opt == 2) // searching by element
    {
        for (i = 0; i < 5; i++)
        {
            if (array[i] == ele)
            {
                printf("%d found at position %d", ele, i);
                break;
            }
        }
    }
}

int main()
{
    int arr[50];
    int i, po, el;
    printf("Enter 5 array elements :- ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("-------------------MENU-------------------\n");
    printf("1. Insertion at a position in the array\n");
    printf("2. Insertion at beginning of array\n");
    printf("3. Insertion at end of array\n");
    printf("4. Delete by position\n");
    printf("5. Delete by element (first occurrence of element)\n");
    printf("6. Delete by element (all occurrences of element)\n");
    printf("7. Search by position\n");
    printf("8. Search by element (present or not)\n");
    printf("9. Revert the array\n");
    printf("Enter your choice :- \n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the position :- ");
        scanf("%d", &po);
        if (po < 0 || po > 5)
        {
            printf("Invalid positions");
            break;
        }
        printf("Enter the element to be inserted :- ");
        scanf("%d", &el);
        insertion(arr, el, po, 1);
        break;
    case 2:
        printf("Enter the element to be inserted :- ");
        scanf("%d", &el);
        po = 0;
        insertion(arr, el, po, 2);
        break;
    case 3:
        printf("Enter the element to be inserted :- ");
        scanf("%d", &el);
        po = 5;
        insertion(arr, el, po, 3);
        break;
    case 4:
        printf("Enter the position :- ");
        scanf("%d", &po);
        if (po < 0 || po > 5)
        {
            printf("Invalid positions");
            break;
        }
        deletion(arr, 0, po, 1);
        break;
    case 5:
        printf("Enter the element to be deleted :- ");
        scanf("%d", &el);
        po = 0;
        deletion(arr, el, po, 2);
        break;
    case 6:
        printf("Enter the element to be deleted :- ");
        scanf("%d", &el);
        po = 0;
        deletion(arr, el, po, 3);
        break;
    case 7:
        printf("Enter the position :- ");
        scanf("%d", &po);
        if (po < 0 || po > 5)
        {
            printf("Invalid positions");
            break;
        }
        search(arr, 0, po, 1);
        break;
    case 8:
        printf("Enter the element to be searched :- ");
        scanf("%d", &el);
        po = 0;
        insertion(arr, el, po, 2);
        break;
    case 9:
        printf("The reverse array is :- ");
        for (i = 4; i >= 0; i--)
        {
            printf("%d\n", arr[i]);
        }
        break;
    default:
        printf("Entered choice doesn't exist");
    }
}

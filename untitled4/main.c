/*1. Modify the function from Listing 5-11 to make it clear to the caller
which file could not be opened.
 2. Change the find_element function from Listing 5-13 to return the posi
tion of the key in a. Don’t forget to return an error indication if the key
is not found.
 3. Fix the remaining bug in the absolute_value function in Listing 5-14
page 97
*/


/*#include <stdio.h>
#include <stdlib.h>

typedef struct {}
object_t;
int fail(void) {
    FILE *file1, *file2;
    object_t *obj;
    int ret_val = 0;
    file1 = fopen("a_file", "w");
    if (file1 == NULL) {
        printf("Error opening file_1\n");
        ret_val = -1;
        goto FAIL_FILE1;
    }
    file2 = fopen("another_file", "w");
    if (file2 == NULL) {
        printf("Error opening file_2\n");
        ret_val = -1;
        goto FAIL_FILE2;
    }
    obj = (object_t*) malloc(sizeof(object_t));
    if (obj == NULL) {
        printf("Error allocating memory for object_t\n");
        ret_val = -1;
        goto FAIL_OBJ;
    }
    free(obj);
    fclose(file2);
    fclose(file1);
    return ret_val;
    FAIL_OBJ:
        fclose(file2);
    FAIL_FILE2:
        fclose(file1);
    FAIL_FILE1:
        return ret_val;
}*/

/*#include <ctype.h>
#include <stdio.h>

int main(void) {
    char c;
    for(;;) {
        puts("Press any key, Q to quit: ");
        c = toupper(getchar());
        if (c == 'Q') break;
    }

}
size_t find_element(size_t len, int arr[len], int key) {
    size_t pos = (size_t)-1;
    // traverse arr and search for key
    for (size_t i = 0; i < len; ++i) {
        if (arr[i] == key) {
            pos = i;
            break;
            // terminate loop
        }
    }
return pos;
}
int find() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t len = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    size_t pos = find_element(len, arr, key);
    if (pos != (size_t)-1)
        return "key found",key , pos;
    else
        return "key not found";

}*/
#include <stdio.h>
#include <limits.h>

int absolute_value1(int a) {
    if (a == INT_MIN) {
        return INT_MAX;
    }
    return (a < 0) ? -a : a;
}

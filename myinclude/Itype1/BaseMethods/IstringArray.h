typedef char* char_ptr;
typedef char* string;
typedef char** char_ptr_ptr;
typedef char** string_ptr;

typedef struct stringArray {
    /* A string array actually. */
    string_ptr val;
    int numOfElement;
}stringArray;

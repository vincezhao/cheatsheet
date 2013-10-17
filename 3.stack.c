TYPE stack[SIZE + 1];
int ps = 0;

/* push */
stack[ps++] = data;

/* pop */
data = stack[ps--];

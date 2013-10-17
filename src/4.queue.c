TYPE q[SIZE], data;
int bq = 0, eq = 0;

#define cnext(x) ((x+1) % SIZE)
#define csize() ((eq + SIZE - bq) % SIZE)

/* size */
csize()

/* empty */
(0 == csize())
(bq == eq)

/* full */
(SIZE-1 == csize())
(cnext(eq) == bq)

/* enqueue */
q[eq] = data;
eq = cnext(eq);

/* dequeue */
data = q[bq];
bq = cnext(bq);

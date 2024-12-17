#include "matrix.c"


int main() {
    Matrix* a = create_matrix(3, 3);
    Matrix* b = create_matrix(3, 3);
    Matrix* mat = create_matrix(3, 3);
    Matrix* mat1 = createMONO_matrix(3, 3, 0);
    Matrix* z = fill_random_matrix(mat, 1, 1000);


    a->data[0] = 15;
    a->data[1] = 45;
    a->data[2] = 17;
    a->data[3] = 13;
    a->data[4] = 75;
    a->data[5] = 94;
    a->data[6] = 37;
    a->data[7] = 12;
    a->data[8] = 21;

    b->data[0] = 51;
    b->data[1] = 46;
    b->data[2] = 15;
    b->data[3] = 15;
    b->data[4] = 43;
    b->data[5] = 18;
    b->data[6] = 72;
    b->data[7] = 10;
    b->data[8] = 1;

    printf("\n\n");

    printf("Matrix A:\n");
    print_matrix(a);

    printf("\n");

    printf("Matrix B:\n");
    print_matrix(b);

    printf("-----------------------------------------------------------------------------------------------\n");


    Matrix* c = subtract_matrices(a, b);
    printf("A - B:\n");
    print_matrix(c);

    printf("-----------------------------------------------------------------------------------------------\n");

    Matrix* q = sum_matrices(a, b);
    printf("A + B:\n");
    print_matrix(q);

    printf("-----------------------------------------------------------------------------------------------\n");

    Matrix* d = multiply_matrices(a, b);
    printf("A * B:\n");
    print_matrix(d);

    printf("-----------------------------------------------------------------------------------------------\n");

    printf("random matrix:\n");
    print_matrix(z);

    printf("-----------------------------------------------------------------------------------------------\n");

    printf("filling with zeros\n");
    print_matrix(mat1);

    printf("-----------------------------------------------------------------------------------------------\n");

    printf("A before\n");
    print_matrix(a);

    printf("-----------------------------------------------------------------------------------------------\n");

    printf("A after\n");
    print_matrix(transpose_matrix(a));

    printf("-----------------------------------------------------------------------------------------------\n");

    Matrix* copied = copy_matrix(b);
    printf("Copy matrix B\n");
    print_matrix(copied);


    destroy_matrix(mat);
    destroy_matrix(mat1);
    destroy_matrix(z);
    destroy_matrix(a);
    destroy_matrix(b);
    destroy_matrix(c);
    destroy_matrix(d);
    destroy_matrix(q);

    return 0;
}

//********************************************************
// Copyright (c) 2017-2019 ACME, Inc. All Rights Reserved
//
// Proprietary source code
// Author: dan@acme.com
//********************************************************

int index1;
int index2;
int index3;
int sum = 0;

int loop_routine() {

  for (i=0; i<10; i++) {
         printf("%d\n",i);
  }
}

int loop_sum() {

  int i; int j; int k;
  int sum=0;

  for (i=0; i<10; i++) {
    for (j=0; j<10; j++) {
      for (k=0; k<10; k++) {
        sum=sum+i+j+k;
        printf("%d\n",sum);
      }
    }
  }

  int alpha; int bravo; int charlie;
  alpha=0;
  bravo=100;

  while (alpha<100) {
    alpha++;
    bravo += alpha;
    charlie = bravo-alpha;
  }
  printf("%d, %d, %d\n",alpha,bravo,charlie);

}


void add( int num )
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if (head== NULL)
    {
    head=temp;
    head->next=NULL;
    }
    else
    {
    temp->next=head;
    head=temp;
    }
}


int sum() {

  for (index1=0; index1< 10; index1++) {
    for (index2=0; index2<10; index2++) {
      for (index3=0; index3<10; index3++) {

        sum=sum+index1+index2+index3;
        printf("%d\n",sum);

      }
    }
  }

  if (sum < 0) {
    return -1;
  }
}


main() {
  int alpha;
  int bravo;
  int charlie;

  alpha = 0;
  bravo = 100;

  while (alpha<100) {
    alpha++;
    bravo += alpha;
    charlie = bravo - alpha;
  }

  printf("%d, %d, %d\n",alpha,bravo,charlie);

}

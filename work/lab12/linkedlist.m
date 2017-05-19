// Colin Harfst
// cph5wr
// 4 Dec 2016
// Lab Section 103

#import <stdio.h>
#import <Foundation/NSObject.h>
#import <objc/Object.h>

@interface Node : NSObject
{
@private
  int x;
  Node* n;
}
- (id) x: (int) val;
- (int) x;
- (id) n: (Node*) node;
- (Node*) n;
- (id) add: (int) v;
@end

@implementation Node
- (id) x: (int) val
{
  x = val;
  return self;
}
- (int) x
{
  return x;
}
- (id) n: (Node*) node
{
  n = node;
  return self;
}
- (Node*) n
{
  return n;
}
- (id) add: (int) v
{
  if([self n]==nil) {
    Node *now = [Node new];
    [now x: v];
    [self n: now];
    return self;
  }
  else {
    [[self n] add: v];
  }
}
@end

int main (void) {
  printf("Enter how many values to input: ");
  int size;
  scanf("%d", &size);
  Node *first = [Node new];
  int i;
  int val;
  for (i=0;i<size;i++) {
    if (i!=0) {
      printf("Enter value %d: ", i+1);
      scanf("%d", &val);
      [first add: val];
    }
    else {
      printf("Enter value %d: ", i+1);
      scanf("%d", &val);
      [first x: val];
    }
  }
  int j;
  for (j=0;j<size;j++) {
    int v = [first x];
    first=[first n];
    printf("%d\n",v);
  }
  [first release];
}

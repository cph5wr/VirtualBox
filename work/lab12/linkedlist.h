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



#import <Cocoa/Cocoa.h>


@interface AbstractExample : NSObject {
	id internalObject;
}

- (id)methodOne;
- (id)methodTwo;
- (id)methodThree;

- (void)setMethodOne:(id)object;
- (void)setMethodTwo:(id)object;
- (void)setMethodThree:(id)object;

@end

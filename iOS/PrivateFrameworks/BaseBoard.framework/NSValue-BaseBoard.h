//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (BaseBoard)
+ (id)bs_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)bs_valueWithCGPoint:(struct CGPoint)arg1;
+ (id)bs_valueWithCGSize:(struct CGSize)arg1;
+ (id)bs_valueWithCGRect:(struct CGRect)arg1;
- (struct CGAffineTransform)bs_CGAffineTransformValue;
- (struct CGPoint)bs_CGPointValue;
- (struct CGSize)bs_CGSizeValue;
- (struct CGRect)bs_CGRectValue;
- (_Bool)bs_getValue:(out void *)arg1 ofSize:(unsigned long long)arg2;
@end

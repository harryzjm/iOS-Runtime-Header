//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (WFCoreGraphicsSupport)
+ (id)wf_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)wf_valueWithCGSize:(struct CGSize)arg1;
+ (id)wf_valueWithCGPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGAffineTransform wf_CGAffineTransformValue;
@property(readonly, nonatomic) struct CGSize wf_CGSizeValue;
@property(readonly, nonatomic) struct CGPoint wf_CGPointValue;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (AXMGeomerty)
+ (id)axmValueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)axmValueWithCGRect:(struct CGRect)arg1;
+ (id)axmValueWithCGSize:(struct CGSize)arg1;
+ (id)axmValueWithCGVector:(struct CGVector)arg1;
+ (id)axmValueWithCGPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGAffineTransform AXMAffineTransformValue;
@property(readonly, nonatomic) struct CGRect AXMRectValue;
@property(readonly, nonatomic) struct CGSize AXMSizeValue;
@property(readonly, nonatomic) struct CGVector AXMVectorValue;
@property(readonly, nonatomic) struct CGPoint AXMPointValue;
@end


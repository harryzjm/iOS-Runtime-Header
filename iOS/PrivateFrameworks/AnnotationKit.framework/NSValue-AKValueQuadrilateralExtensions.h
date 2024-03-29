//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (AKValueQuadrilateralExtensions)
+ (id)valueWithQuadrilateral:(struct AKQuadrilateral)arg1;
+ (id)akValueWithRect:(struct CGRect)arg1;
+ (id)akValueWithSize:(struct CGSize)arg1;
+ (id)akValueWithPoint:(struct CGPoint)arg1;
+ (id)valueWithCGRect:(struct CGRect)arg1;
@property(readonly) struct AKQuadrilateral quadrilateralValue;
- (struct CGRect)akRectValue;
- (struct CGSize)akSizeValue;
- (struct CGPoint)akPointValue;
- (struct CGRect)CGRectValue;
@end


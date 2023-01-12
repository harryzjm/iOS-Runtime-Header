//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (NSValueUIGeometryExtensions)
+ (id)valueWithUIOffset:(struct UIOffset)arg1;
+ (id)valueWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;
+ (id)valueWithNSDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets)arg1;
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)valueWithCGRect:(struct CGRect)arg1;
+ (id)valueWithCGSize:(struct CGSize)arg1;
+ (id)valueWithCGVector:(struct CGVector)arg1;
+ (id)valueWithCGPoint:(struct CGPoint)arg1;
+ (id)valueWithUIKBHandwritingPoint:(struct)arg1;
+ (id)ui_valueWithPlatformPoint:(struct CGPoint)arg1;
+ (id)ui_valueWithPlatformSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct UIOffset UIOffsetValue;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets directionalEdgeInsetsValue;
@property(readonly, nonatomic) struct UIEdgeInsets UIEdgeInsetsValue;
@property(readonly, nonatomic) struct CGAffineTransform CGAffineTransformValue;
@property(readonly, nonatomic) struct CGRect CGRectValue;
@property(readonly, nonatomic) struct CGSize CGSizeValue;
@property(readonly, nonatomic) struct CGVector CGVectorValue;
@property(readonly, nonatomic) struct CGPoint CGPointValue;
@property(readonly) CDStruct_19cde01f UIKBHandwritingPointValue;
- (struct CGPoint)ui_platformPointValue;
- (struct _UIPressTrigger)_UIPressTriggerValue;
- (struct CGSize)ui_platformSizeValue;
@end


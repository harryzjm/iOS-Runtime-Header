//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSDPathSource.h"

@interface TSDPointPathSource : TSDPathSource
{
    unsigned long long mType;
    struct CGPoint mPoint;
    struct CGSize mNaturalSize;
}

+ (id)pathSourceWithType:(unsigned long long)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;
+ (id)plusWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)starWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)doubleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)leftSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)rightSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
@property(nonatomic) struct CGPoint point; // @synthesize point=mPoint;
@property(nonatomic) unsigned long long type; // @synthesize type=mType;
- (id)inferredAccessibilityDescription;
- (_Bool)p_isFlippedDoubleArrow;
- (_Bool)p_isRightFacingArrow;
- (struct CGPoint)p_getControlKnobPointForPlus;
- (void)p_setControlKnobPointForPlus:(struct CGPoint)arg1;
- (struct CGPoint)p_getControlKnobPointForStarInnerRadius;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint)arg1;
- (struct CGPoint)p_getControlKnobPointForStarPoints;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint)arg1;
- (struct CGPoint)p_getControlKnobPointForArrow;
- (void)p_setControlKnobPointForArrow:(struct CGPoint)arg1;
- (const struct CGPath *)p_newPlusPath;
- (const struct CGPath *)p_newStarPath;
- (const struct CGPath *)p_newArrowPath;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)name;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (id)bezierPathWithoutFlips;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (unsigned long long)numberOfControlKnobs;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double minArrowHead;
@property(readonly, nonatomic) double maxArrowHead;
@property(readonly, nonatomic) double arrowHead;
@property(readonly, nonatomic) double minArrowIndent;
@property(readonly, nonatomic) double maxArrowIndent;
@property(readonly, nonatomic) double arrowIndent;
- (_Bool)p_isArrowType;
@property(readonly, nonatomic) double minStarRadius;
@property(readonly, nonatomic) double maxStarRadius;
@property(readonly, nonatomic) double starRadius;
@property(readonly, nonatomic) unsigned long long minStarPoints;
@property(readonly, nonatomic) unsigned long long maxStarPoints;
@property(readonly, nonatomic) unsigned long long starPoints;
@property(readonly, nonatomic) struct CGPoint maxPointValue;
@property(readonly, nonatomic) struct CGPoint minPointValue;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;
- (void)saveToArchive:(void *)arg1;
- (id)initWithArchive:(const void *)arg1;

@end


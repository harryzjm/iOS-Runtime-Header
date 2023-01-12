//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSDShadow.h"

@interface TSDCurvedShadow : TSDShadow
{
    double mCurve;
}

+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(_Bool)arg7;
+ (id)instanceWithArchive:(const void *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) double curve; // @synthesize curve=mCurve;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (_Bool)showForEditingText;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)newShadowClampedForSwatches;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)paddingForCurveWithSize:(struct CGSize)arg1;
- (struct CGRect)expandedBoundsForRect:(struct CGRect)arg1;
- (double)paddingForBlur;
- (unsigned long long)shadowType;
- (double)clampOffset:(double)arg1;
- (id)description;
- (void)i_setCurve:(double)arg1;
- (id)initWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(_Bool)arg7;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2;

@end


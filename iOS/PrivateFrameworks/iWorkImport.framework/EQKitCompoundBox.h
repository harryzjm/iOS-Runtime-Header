//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface EQKitCompoundBox
{
    NSArray *mChildBoxes;
    double mHeight;
    double mDepth;
    double mWidth;
    _Bool mDimensionsValid;
    struct CGRect mErasableBounds;
    _Bool mErasableBoundsValid;
}

@property(readonly, nonatomic) NSArray *childBoxes; // @synthesize childBoxes=mChildBoxes;
- (struct CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;
- (id)description;
- (struct CGRect)erasableBounds;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
@property(readonly, nonatomic) double height;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithChildBoxes:(id)arg1;

@end

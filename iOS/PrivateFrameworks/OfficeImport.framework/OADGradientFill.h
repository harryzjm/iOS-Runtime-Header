//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, OADRelativeRect, OADShade;

__attribute__((visibility("hidden")))
@interface OADGradientFill
{
    NSArray *mStops;
    OADRelativeRect *mTileRect;
    int mFlipMode;
    _Bool mIsFlipModeOverridden;
    _Bool mRotateWithShape;
    _Bool mIsRotateWithShapeOverridden;
    OADShade *mShade;
}

+ (id)stringForTileFlipMode:(int)arg1;
+ (id)defaultProperties;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)usesPlaceholderColor;
- (void)setStyleColor:(id)arg1;
- (id)lastStop;
- (id)firstStop;
- (_Bool)isShadeOverridden;
- (void)setShade:(id)arg1;
- (id)shade;
- (_Bool)isRotateWithShapeOverridden;
- (void)setRotateWithShape:(_Bool)arg1;
- (_Bool)rotateWithShape;
- (_Bool)isFlipModeOverridden;
- (void)setFlipMode:(int)arg1;
- (int)flipMode;
- (_Bool)isTileRectOverridden;
- (void)setTileRect:(id)arg1;
- (id)tileRect;
- (void)sortStops;
- (_Bool)areStopsOverridden;
- (void)setStops:(id)arg1;
- (id)stops;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


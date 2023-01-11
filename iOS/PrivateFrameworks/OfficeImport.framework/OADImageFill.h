//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADBlipRef, OADImageFillTechnique, OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADImageFill
{
    OADBlipRef *mBlipRef;
    _Bool mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    _Bool mIsDpiOverridden;
    _Bool mRotateWithShape;
    _Bool mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (_Bool)isTechniqueOverridden;
- (void)setTechnique:(id)arg1;
- (id)technique;
- (_Bool)isRotateWithShapeOverridden;
- (void)setRotateWithShape:(_Bool)arg1;
- (_Bool)rotateWithShape;
- (_Bool)isDpiOverridden;
- (void)setDpi:(int)arg1;
- (int)dpi;
- (_Bool)isSourceRectOverridden;
- (void)setSourceRect:(id)arg1;
- (id)sourceRect;
- (_Bool)isBlipRefOverridden;
- (void)setBlipRef:(id)arg1;
- (id)blipRef;
- (id)color;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

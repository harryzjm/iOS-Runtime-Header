//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADDrawable, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDOfficeArt
{
    WDCharacterProperties *mProperties;
    OADDrawable *mDrawable;
    _Bool mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;
- (id)description;
- (void)propagateTextTypeToDrawables;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;
- (id)imageName;
- (id)imageData;
- (void)setImageBlipRef:(id)arg1;
- (id)imageBlipRef;
- (void)setFloating:(_Bool)arg1;
- (_Bool)isFloating;
- (void)clearDrawable;
- (_Bool)isDrawableOverridden;
- (id)overrideDrawable;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (void)clearProperties;
- (void)setProperties:(id)arg1;
- (id)properties;
- (int)runType;
- (void)dealloc;
- (id)initWithParagraph:(id)arg1;
- (void)checkForFloating:(id)arg1;

@end


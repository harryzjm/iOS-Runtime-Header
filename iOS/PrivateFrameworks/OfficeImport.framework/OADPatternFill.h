//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor, OADPattern;

__attribute__((visibility("hidden")))
@interface OADPatternFill
{
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}

+ (id)defaultProperties;
- (void).cxx_destruct;
- (id)namedImageDataWithBlipCollection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (void)setColor:(id)arg1;
- (_Bool)isPatternOverridden;
- (void)setPattern:(id)arg1;
- (id)pattern;
- (_Bool)isBgColorOverridden;
- (void)setBgColor:(id)arg1;
- (id)bgColor;
- (_Bool)isFgColorOverridden;
- (void)setFgColor:(id)arg1;
- (id)fgColor;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


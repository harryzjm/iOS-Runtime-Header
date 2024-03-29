//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade
{
    OADRelativeRect *mFillToRect;
    int mType;
    _Bool mIsTypeOverridden;
}

+ (id)defaultProperties;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;
- (_Bool)isFillToRectOverridden;
- (void)setFillToRect:(id)arg1;
- (id)fillToRect;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


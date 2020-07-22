//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADStretchTechnique
{
    OADRelativeRect *mFillRect;
}

+ (id)defaultProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isFillRectOverridden;
- (void)setFillRect:(id)arg1;
- (id)fillRect;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)dealloc;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

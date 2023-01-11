//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADCustomPattern
{
    OADBlipRef *mBlipRef;
    _Bool mIsBlipRefOverridden;
}

+ (id)defaultProperties;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isBlipRefOverridden;
- (void)setBlipRef:(id)arg1;
- (id)blipRef;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHomeManagerXPCMessageSendPolicy
{
    _Bool _active;
    unsigned long long _options;
    unsigned long long _entitlements;
}

@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canSendWithPolicyParameters:(id)arg1;
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 active:(_Bool)arg3;
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;

@end


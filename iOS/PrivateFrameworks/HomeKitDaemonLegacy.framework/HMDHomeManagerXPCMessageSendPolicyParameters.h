//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHomeManagerXPCMessageSendPolicyParameters
{
    _Bool _active;
    unsigned long long _options;
}

@property(getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)attributeDescriptions;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)signature;
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;

@end


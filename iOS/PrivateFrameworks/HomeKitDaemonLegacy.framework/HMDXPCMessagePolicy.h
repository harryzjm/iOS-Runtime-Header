//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

__attribute__((visibility("hidden")))
@interface HMDXPCMessagePolicy : HMFMessagePolicy
{
    unsigned long long _entitlements;
}

+ (id)defaultPolicy;
+ (id)policyWithEntitlements:(unsigned long long)arg1;
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)__initWithEntitlements:(unsigned long long)arg1;
- (id)init;

@end


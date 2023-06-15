//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HMDNaturalLightingEnabledRetryContext : HMFObject
{
    _Bool _naturalLightingEnabled;
    unsigned long long _retryCount;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNaturalLightingEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 retryCount:(unsigned long long)arg3;

@end


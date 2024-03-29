//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPSecuritySessionEncryption;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerSecureTransportThreadPaired
{
    HAPSecuritySessionEncryption *_eventEncryption;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HAPSecuritySessionEncryption *eventEncryption; // @synthesize eventEncryption=_eventEncryption;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (id)securitySessionDidRequestAdditionalDerivedKeyTuples:(id)arg1;
- (id)decryptData:(id)arg1 type:(unsigned long long)arg2 error:(id *)arg3;

@end


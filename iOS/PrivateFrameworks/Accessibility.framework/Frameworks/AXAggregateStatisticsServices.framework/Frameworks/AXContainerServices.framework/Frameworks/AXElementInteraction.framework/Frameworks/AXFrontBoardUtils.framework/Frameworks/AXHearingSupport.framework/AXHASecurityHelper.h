//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXHearingSupport/AXIDCManagerSecurityDelegate-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AXHASecurityHelper : NSObject <AXIDCManagerSecurityDelegate>
{
    struct __SecIdentity *_appleIDIdentity;
    NSObject<OS_dispatch_queue> *_securityQueue;
    NSArray *_certificateDescription;
}

+ (id)sharedHelper;
@property(retain, nonatomic) NSArray *certificateDescription; // @synthesize certificateDescription=_certificateDescription;
- (void).cxx_destruct;
- (_Bool)shouldTrustStream:(id)arg1;
- (id)certificateChainFromTrust:(struct __SecTrust *)arg1;
- (id)certificateChainForIdentity:(struct __SecIdentity *)arg1;
- (id)trustChain;
- (id)securityTrustChainForStream:(id)arg1;
- (_Bool)trustChainAvailable;
- (void)prepareHelper;
- (void)appleIDDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

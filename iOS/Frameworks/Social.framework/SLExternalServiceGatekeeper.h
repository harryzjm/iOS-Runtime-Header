//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Social/NSURLConnectionDataDelegate-Protocol.h>

@class NSString;

@interface SLExternalServiceGatekeeper : NSObject <NSURLConnectionDataDelegate>
{
    NSString *_redirectHost;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)_completeWithURLToLoad:(id)arg1 error:(id)arg2;
- (_Bool)_gatekeepingIsNotAvailable;
- (id)initForPermissionToAccessURL:(id)arg1 fromURLString:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


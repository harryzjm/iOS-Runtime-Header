//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemServiceServerStateDumpDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBStateDumpService : NSObject <SBSystemServiceServerStateDumpDelegate>
{
    FBServiceClientAuthenticator *_clientAuthenticator;
}

- (void).cxx_destruct;
- (_Bool)_authenticateClient:(id)arg1;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 disableRemoteStateDumpWithCompletion:(CDUnknownBlockType)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 enableRemoteStateDumpWithTimeout:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 requestStateDump:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

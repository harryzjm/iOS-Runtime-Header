//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDManagedAppService : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)defaultService;
- (void).cxx_destruct;
- (void)submitVPPRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)submitManifestRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)showVPPInviteForCurrentUser:(id)arg1 orgName:(id)arg2;
- (void)requestStatusWithResultHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

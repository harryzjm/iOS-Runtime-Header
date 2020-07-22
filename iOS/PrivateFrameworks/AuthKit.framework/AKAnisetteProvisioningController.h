//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKDevice, NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@interface AKAnisetteProvisioningController : NSObject
{
    NSXPCConnection *_anisetteServiceConnection;
    NSLock *_connectionLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    AKDevice *_targetDevice;
}

- (void).cxx_destruct;
- (id)_anisetteServiceConnection;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 error:(id *)arg2;
- (void)anisetteDataForURLRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)anisetteDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)anisetteDataForURLRequest:(id)arg1 error:(id *)arg2;
- (id)anisetteDataWithError:(id *)arg1;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)provisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initForDevice:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (id)initForDevice:(id)arg1;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;

@end


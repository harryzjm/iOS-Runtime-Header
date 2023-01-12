//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUConnection;

__attribute__((visibility("hidden")))
@interface PUConnectionUnlockClient : NSObject
{
    PUConnection *_connection;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PUConnection *connection; // @synthesize connection=_connection;
- (void)didGetRemoteDeviceState:(id)arg1 error:(id)arg2;
- (void)remoteDeviceDidRemoveLockout:(_Bool)arg1 error:(id)arg2;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidCompleteRemoteAction:(_Bool)arg1 remoteDeviceState:(id)arg2 error:(id)arg3;
- (void)didDisableOnlyRemoteUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didPairForUnlock:(_Bool)arg1 error:(id)arg2;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


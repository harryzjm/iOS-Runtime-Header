//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol IMDaemonProtocol;

@interface (null) (IMCore)
- (void)requestSetupIfNeededWithCompletionHandler:(void (^)(void))arg1;
- (void)requestSetup;
- (void)waitForSetup;
- (void)disconnect;
- (void)connectWithCapabilities:(unsigned long long)arg1 context:(id)arg2 contextChanged:(_Bool)arg3;
@property(nonatomic, copy) CDUnknownBlockType onSetupComplete;
@property(nonatomic, readonly) id <IMDaemonProtocol> synchronousRemoteObjectProxy;
@property(nonatomic, readonly) id <IMDaemonProtocol> remoteObjectProxy;
@property(nonatomic, readonly) _Bool isConnected;
@end


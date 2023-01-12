//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@protocol EMDaemonInterfaceXPC <NSObject>
- (void)setAllowsBackgroundResume:(_Bool)arg1;
- (void)launchForEarlyRecovery:(void (^)(void))arg1;
- (void)getDiagnosticInfoGathererInterface:(void (^)(id <EMDiagnosticInfoGathererInterface>))arg1;
- (void)getActivityRegistryInterface:(void (^)(id <EMActivityRegistryInterface>))arg1;
- (void)getVIPManagerInterface:(void (^)(id <EMVIPManagerInterface>))arg1;
- (void)getInteractionLoggerInterface:(void (^)(id <EMInteractionLoggerInterface>))arg1;
- (void)getSearchableIndexInterface:(void (^)(id <EMSearchableIndexInterface>))arg1;
- (void)getClientStateInterface:(void (^)(id <EMClientStateInterface>))arg1;
- (void)getMailboxRepositoryInterface:(void (^)(id <EMMailboxRepositoryInterface>))arg1;
- (void)getFetchControllerInterface:(void (^)(id <EMFetchControllerInterface>))arg1;
- (void)getSenderRepositoryInterface:(void (^)(id <EMSenderRepositoryInterface>))arg1;
- (void)getAccountRepositoryInterface:(void (^)(id <EMAccountRepositoryInterface>))arg1;
- (void)getOutgoingMessageRepositoryInterface:(void (^)(id <EMOutgoingMessageRepositoryInterface>))arg1;
- (void)getMessageRepositoryInterface:(void (^)(id <EMMessageRepositoryInterface>))arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ASDDiagnosticServiceProtocol
- (void)sendCommandWithReplyHandler:(long long)arg1 handler:(void (^)(void))arg2;
- (void)pingWithReplyHandler:(void (^)(void))arg1;
- (void)activeClientsWithReplyHandler:(void (^)(NSArray *))arg1;
@end

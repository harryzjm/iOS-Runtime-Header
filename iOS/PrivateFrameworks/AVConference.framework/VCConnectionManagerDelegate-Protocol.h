//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCConnectionProtocol;

@protocol VCConnectionManagerDelegate <NSObject>
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id <VCConnectionProtocol>)arg2;
- (void)connectionCallback:(id <VCConnectionProtocol>)arg1 isInitialConnection:(_Bool)arg2;
- (void)primaryConnectionChanged:(id <VCConnectionProtocol>)arg1 oldPrimaryConnection:(id <VCConnectionProtocol>)arg2;

@optional
- (void)discardConnection:(id <VCConnectionProtocol>)arg1;
@end

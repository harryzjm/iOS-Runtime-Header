//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, CKAPSMachServiceConnectionKey, NSString;

@interface CKAPSMachServiceConnectionDelegate : NSObject
{
    APSConnection *_connection;
    CKAPSMachServiceConnectionKey *_key;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CKAPSMachServiceConnectionKey *key; // @synthesize key=_key;
@property(nonatomic) __weak APSConnection *connection; // @synthesize connection=_connection;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)initWithConnection:(id)arg1 key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


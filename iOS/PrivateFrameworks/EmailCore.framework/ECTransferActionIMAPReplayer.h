//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailCore/ECIMAPLocalActionReplayer-Protocol.h>
#import <EmailCore/ECTransferActionReplayerSubclassMethods-Protocol.h>

@class NSString;
@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferActionIMAPReplayer <ECTransferActionReplayerSubclassMethods, ECIMAPLocalActionReplayer>
{
    id <ECIMAPServerInterface> serverInterface;
    id <ECIMAPLocalActionReplayerDelegate> delegate;
}

@property(nonatomic) __weak id <ECIMAPLocalActionReplayerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) id <ECIMAPServerInterface> serverInterface; // @synthesize serverInterface;
- (void).cxx_destruct;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (_Bool)isRecoverableError:(id)arg1;
- (_Bool)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (_Bool)deleteSourceMessagesFromTransferItems:(id)arg1;
- (id)_transferItems:(id)arg1 destinationMailboxURL:(id)arg2 isMove:(_Bool)arg3;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

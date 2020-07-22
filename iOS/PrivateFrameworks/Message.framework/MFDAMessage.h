//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DAMailMessage, MFMailboxUid, MFMessage, NSString;

@interface MFDAMessage
{
    DAMailMessage *_DAMailMessage;
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
}

@property(readonly, nonatomic) DAMailMessage *DAMailMessage; // @synthesize DAMailMessage=_DAMailMessage;
- (unsigned long long)messageSize;
- (id)remoteMailboxURL;
- (_Bool)messageDataHolder:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)messageBody;
- (unsigned long long)messageFlags;
- (id)headersIfAvailable;
- (id)headers;
- (id)mailbox;
- (id)externalConversationID;
- (id)remoteID;
- (void)dealloc;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;

@end


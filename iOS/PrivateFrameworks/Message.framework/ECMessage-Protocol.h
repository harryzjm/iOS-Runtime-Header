//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSCopying-Protocol.h>
#import <Message/NSObject-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;
@protocol ECMailAccount, ECMailbox, ECMessageHeaders, ECMimeBody;

@protocol ECMessage <NSCopying, NSObject>
@property(readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, copy, nonatomic) NSUUID *documentID;
@property(readonly, copy, nonatomic) NSArray *references;
@property(readonly, nonatomic) id <ECMessageHeaders> headers;
@property(readonly, nonatomic) id <ECMailAccount> account;
@property(readonly) NSSet *labels;
@property(readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property(readonly, copy, nonatomic) NSString *messageIDHeader;
@property(readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property(readonly, nonatomic) id <ECMimeBody> mimeBody;
@property(readonly, nonatomic, getter=isPartOfExistingThread) _Bool partOfExistingThread;
@property(readonly, nonatomic) ECMessageFlags *flags;
@property(readonly, nonatomic) _Bool isServerSearchResult;
@property(readonly, nonatomic) long long conversationID;
@property(readonly, nonatomic) id <ECMailbox> mailbox;
@property(readonly, copy, nonatomic) NSString *remoteID;
@property(readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property(readonly, nonatomic) NSDate *dateSent;
@property(readonly, nonatomic) NSDate *dateReceived;
@property(readonly, copy, nonatomic) NSArray *senders;
@property(readonly, copy, nonatomic) NSArray *bcc;
@property(readonly, copy, nonatomic) NSArray *cc;
@property(readonly, copy, nonatomic) NSArray *to;
@property(readonly, copy, nonatomic) NSArray *from;
@property(readonly, copy, nonatomic) ECSubject *subject;
@property(readonly, copy, nonatomic) NSString *persistentID;
- (NSString *)bestAlternativePart:(_Bool *)arg1;
@end


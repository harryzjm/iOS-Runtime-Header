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
@property(nonatomic, readonly) ECAngleBracketIDHash *listIDHash;
@property(nonatomic, readonly) long long numberOfAttachments;
@property(nonatomic, readonly) NSUUID *documentID;
@property(nonatomic, readonly) NSArray *references;
@property(nonatomic, readonly) id <ECMessageHeaders> headers;
@property(nonatomic, readonly) id <ECMailAccount> account;
@property(nonatomic, readonly) NSSet *labels;
@property(nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property(nonatomic, readonly) NSString *messageIDHeader;
@property(nonatomic, readonly) NSDictionary *headersDictionary;
@property(nonatomic, readonly) id <ECMimeBody> mimeBody;
- (_Bool)isPartOfExistingThread;
@property(nonatomic, readonly) ECMessageFlags *flags;
@property(nonatomic, readonly) _Bool isServerSearchResult;
@property(nonatomic, readonly) long long conversationID;
@property(nonatomic, readonly) id <ECMailbox> mailbox;
@property(nonatomic, readonly) NSString *remoteID;
@property(nonatomic, readonly) NSArray *listUnsubscribe;
@property(nonatomic, readonly) NSDate *dateSent;
@property(nonatomic, readonly) NSDate *dateReceived;
@property(nonatomic, readonly) NSArray *senders;
@property(nonatomic, readonly) NSArray *bcc;
@property(nonatomic, readonly) NSArray *cc;
@property(nonatomic, readonly) NSArray *to;
@property(nonatomic, readonly) NSArray *from;
@property(nonatomic, readonly) ECSubject *subject;
@property(nonatomic, readonly) NSString *persistentID;
- (NSString *)bestAlternativePart:(_Bool *)arg1;

// Remaining properties
@property(nonatomic, readonly) _Bool partOfExistingThread;
@end


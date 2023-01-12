//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBContact, NSData, NSMutableArray, NSString, NSURL;

@interface BLTPBCommunicationContext : PBCodable <NSCopying>
{
    NSString *_associatedObjectUriData;
    NSString *_bundleIdentifier;
    NSData *_contentURLData;
    NSString *_displayName;
    NSString *_identifier;
    int _recipientCount;
    NSMutableArray *_recipients;
    BLTPBContact *_sender;
    _Bool _mentionsCurrentUser;
    _Bool _notifyRecipientAnyway;
    _Bool _replyToCurrentUser;
    struct {
        unsigned int recipientCount:1;
        unsigned int mentionsCurrentUser:1;
        unsigned int notifyRecipientAnyway:1;
        unsigned int replyToCurrentUser:1;
    } _has;
}

+ (Class)recipientsType;
- (void).cxx_destruct;
@property(nonatomic) int recipientCount; // @synthesize recipientCount=_recipientCount;
@property(nonatomic) _Bool replyToCurrentUser; // @synthesize replyToCurrentUser=_replyToCurrentUser;
@property(nonatomic) _Bool notifyRecipientAnyway; // @synthesize notifyRecipientAnyway=_notifyRecipientAnyway;
@property(nonatomic) _Bool mentionsCurrentUser; // @synthesize mentionsCurrentUser=_mentionsCurrentUser;
@property(retain, nonatomic) NSData *contentURLData; // @synthesize contentURLData=_contentURLData;
@property(retain, nonatomic) NSMutableArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) BLTPBContact *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *associatedObjectUriData; // @synthesize associatedObjectUriData=_associatedObjectUriData;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRecipientCount;
@property(nonatomic) _Bool hasReplyToCurrentUser;
@property(nonatomic) _Bool hasNotifyRecipientAnyway;
@property(nonatomic) _Bool hasMentionsCurrentUser;
@property(readonly, nonatomic) _Bool hasContentURLData;
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
@property(readonly, nonatomic) _Bool hasSender;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasAssociatedObjectUriData;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly) NSURL *contentURLLocalFileLocation;

@end

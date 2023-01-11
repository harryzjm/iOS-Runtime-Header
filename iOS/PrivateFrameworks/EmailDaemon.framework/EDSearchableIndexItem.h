//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDIndexableItem-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class CSSearchableItem, NSData, NSDate, NSString;
@protocol EDIndexableMessage;

@interface EDSearchableIndexItem : NSObject <EFLoggable, EDIndexableItem>
{
    CSSearchableItem *_searchableItem;
    _Bool _isEncrypted;
    _Bool _includeEncryptedBody;
    _Bool _fetchBody;
    _Bool _hasCompleteData;
    NSString *_identifier;
    long long _indexingType;
    unsigned long long _itemInstantiationTime;
    id <EDIndexableMessage> _message;
    NSData *_bodyData;
}

+ (void)mailboxIdentifiersForMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)accountIdentifierForMessage:(id)arg1;
+ (id)domainIdentifierForMessage:(id)arg1;
+ (id)domainIdentifierForAccountID:(id)arg1 mailboxPersistentID:(id)arg2;
+ (long long)indexingPriorityByIndexingType:(long long)arg1;
+ (id)itemWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(_Bool)arg4;
+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(_Bool)arg3;
+ (id)log;
+ (id)csIdentifierForMailbox:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCompleteData; // @synthesize hasCompleteData=_hasCompleteData;
@property(readonly, nonatomic) _Bool fetchBody; // @synthesize fetchBody=_fetchBody;
@property(nonatomic) _Bool includeEncryptedBody; // @synthesize includeEncryptedBody=_includeEncryptedBody;
@property(nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, nonatomic) id <EDIndexableMessage> message; // @synthesize message=_message;
@property(readonly, nonatomic) unsigned long long itemInstantiationTime; // @synthesize itemInstantiationTime=_itemInstantiationTime;
@property(nonatomic) long long indexingType; // @synthesize indexingType=_indexingType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool alwaysMarkAsIndexed;
- (id)searchableItem;
- (void)preprocess;
- (void)_addStaticAttributesToAttributeSet:(id)arg1;
- (void)addStaticAttributesToAttributeSet:(id)arg1;
- (void)addUpdatableAttributesToAttributeSet:(id)arg1;
- (void)addFlagsAttributesToAttributeSet:(id)arg1;
- (void)setNeedsAllAttributesIndexingType;
@property(retain, nonatomic) NSData *underlyingData;
- (id)fetchIndexableAttachments;
- (void)addAttachmentAttributesToAttributeSet:(id)arg1;
@property(readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property(readonly, nonatomic) _Bool requiresPreprocessing;
@property(readonly, nonatomic) _Bool shouldExcludeFromIndex;
@property(readonly, copy, nonatomic) NSString *domainIdentifier;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSDate *dateReceived;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMCommunicationsAccountContentEvent-Protocol.h>
#import <BiomeStreams/BMIdentifiableContentEvent-Protocol.h>
#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/BMStreamValidating-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class BMNamedHandle, BMPBMailContentEvent, NSArray, NSData, NSDictionary, NSString;

@interface BMMailContentEvent : NSObject <BMIdentifiableContentEvent, BMCommunicationsAccountContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>
{
    NSData *_data;
    BMPBMailContentEvent *_proto;
    struct os_unfair_lock_s _protoLock;
    NSString *_uniqueId;
    NSString *_domainId;
    BMNamedHandle *_fromHandle;
    NSArray *_toHandles;
    NSArray *_ccHandles;
    NSArray *_bccHandles;
    NSDictionary *_headers;
    BMNamedHandle *_replyTo;
    BMNamedHandle *_listId;
    NSArray *_attachments;
}

+ (_Bool)supportsSecureCoding;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, nonatomic) BMNamedHandle *listId; // @synthesize listId=_listId;
@property(readonly, nonatomic) BMNamedHandle *replyTo; // @synthesize replyTo=_replyTo;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSArray *bccHandles; // @synthesize bccHandles=_bccHandles;
@property(readonly, nonatomic) NSArray *ccHandles; // @synthesize ccHandles=_ccHandles;
@property(readonly, nonatomic) NSArray *toHandles; // @synthesize toHandles=_toHandles;
@property(readonly, nonatomic) BMNamedHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property(readonly, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)encodeAsProto;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 accountIdentifier:(id)arg4 messageIdentifier:(id)arg5 fromHandle:(id)arg6 toHandles:(id)arg7 ccHandles:(id)arg8 bccHandles:(id)arg9 headers:(id)arg10 subject:(id)arg11 htmlContent:(id)arg12 textContent:(id)arg13 isFullyDownloaded:(_Bool)arg14 securityMethod:(id)arg15 accountHandles:(id)arg16 replyTo:(id)arg17 mailboxIdentifiers:(id)arg18 listId:(id)arg19 accountType:(id)arg20 attachments:(id)arg21;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 accountIdentifier:(id)arg4 messageIdentifier:(id)arg5 fromHandle:(id)arg6 toHandles:(id)arg7 ccHandles:(id)arg8 bccHandles:(id)arg9 headers:(id)arg10 subject:(id)arg11 htmlContent:(id)arg12 textContent:(id)arg13 isFullyDownloaded:(_Bool)arg14 securityMethod:(id)arg15 accountHandles:(id)arg16 replyTo:(id)arg17 mailboxIdentifiers:(id)arg18 listId:(id)arg19 accountType:(id)arg20 attachments:(id)arg21 contentProtection:(id)arg22;
- (id)_initWithUniqueId:(id)arg1 domainId:(id)arg2;
- (void)_loadData;
- (void)_inflateFromProto:(id)arg1;
- (id)proto;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) double absoluteTimestamp; // @dynamic absoluteTimestamp;
@property(readonly, nonatomic) NSArray *accountHandles; // @dynamic accountHandles;
@property(readonly, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(readonly, nonatomic) NSString *accountType; // @dynamic accountType;
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, nonatomic) NSString *contentProtection; // @dynamic contentProtection;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *htmlContent; // @dynamic htmlContent;
@property(readonly, nonatomic) _Bool isFullyDownloaded; // @dynamic isFullyDownloaded;
@property(readonly, nonatomic) NSArray *mailboxIdentifiers; // @dynamic mailboxIdentifiers;
@property(readonly, nonatomic) NSString *messageIdentifier; // @dynamic messageIdentifier;
@property(readonly, nonatomic) NSString *securityMethod; // @dynamic securityMethod;
@property(readonly, nonatomic) NSString *subject; // @dynamic subject;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *textContent; // @dynamic textContent;

@end

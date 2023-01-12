//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class BMPBContentAttachment, BMPBNamedHandle, NSMutableArray, NSString;

@interface BMPBMessagesContentEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;
    NSMutableArray *_accountHandles;
    NSString *_accountIdentifier;
    NSString *_accountType;
    BMPBContentAttachment *_attachment;
    NSString *_attachmentURL;
    NSString *_author;
    NSString *_content;
    NSString *_contentProtection;
    NSString *_conversationId;
    NSString *_domainId;
    BMPBNamedHandle *_fromHandle;
    NSString *_recipients;
    NSString *_suggestedNickname;
    NSString *_suggestedPhotoPath;
    NSMutableArray *_toHandles;
    NSString *_uniqueId;
    NSString *_url;
    CDStruct_d3e759b0 _has;
}

+ (Class)accountHandlesType;
+ (Class)toHandlesType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) BMPBContentAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NSMutableArray *accountHandles; // @synthesize accountHandles=_accountHandles;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSMutableArray *toHandles; // @synthesize toHandles=_toHandles;
@property(retain, nonatomic) BMPBNamedHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(retain, nonatomic) NSString *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSString *suggestedPhotoPath; // @synthesize suggestedPhotoPath=_suggestedPhotoPath;
@property(retain, nonatomic) NSString *suggestedNickname; // @synthesize suggestedNickname=_suggestedNickname;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(retain, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasContentProtection;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasAttachment;
- (id)accountHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountHandlesCount;
- (void)addAccountHandles:(id)arg1;
- (void)clearAccountHandles;
@property(readonly, nonatomic) _Bool hasAccountType;
@property(readonly, nonatomic) _Bool hasAccountIdentifier;
- (id)toHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)toHandlesCount;
- (void)addToHandles:(id)arg1;
- (void)clearToHandles;
@property(readonly, nonatomic) _Bool hasFromHandle;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) _Bool hasAttachmentURL;
@property(readonly, nonatomic) _Bool hasRecipients;
@property(readonly, nonatomic) _Bool hasSuggestedPhotoPath;
@property(readonly, nonatomic) _Bool hasSuggestedNickname;
@property(readonly, nonatomic) _Bool hasAuthor;
@property(readonly, nonatomic) _Bool hasConversationId;
@property(nonatomic) _Bool hasAbsoluteTimestamp;
@property(readonly, nonatomic) _Bool hasDomainId;
@property(readonly, nonatomic) _Bool hasUniqueId;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NNMKProtoMessage, NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageContentSync : PBCodable <NSCopying>
{
    NSMutableArray *_attachments;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_messageId;
    NNMKProtoMessage *_notificationMessage;
    NSData *_preview;
    NSData *_text;
    _Bool _mainAlternativeValid;
    _Bool _partiallyLoaded;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mainAlternativeValid:1;
        unsigned int partiallyLoaded:1;
    } _has;
}

+ (Class)attachmentType;
@property(retain, nonatomic) NNMKProtoMessage *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) _Bool partiallyLoaded; // @synthesize partiallyLoaded=_partiallyLoaded;
@property(retain, nonatomic) NSData *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) NSData *text; // @synthesize text=_text;
@property(nonatomic) _Bool mainAlternativeValid; // @synthesize mainAlternativeValid=_mainAlternativeValid;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNotificationMessage;
- (id)attachmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)attachmentsCount;
- (void)addAttachment:(id)arg1;
- (void)clearAttachments;
@property(nonatomic) _Bool hasPartiallyLoaded;
@property(readonly, nonatomic) _Bool hasPreview;
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) _Bool hasMainAlternativeValid;
@property(readonly, nonatomic) _Bool hasMessageId;
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end


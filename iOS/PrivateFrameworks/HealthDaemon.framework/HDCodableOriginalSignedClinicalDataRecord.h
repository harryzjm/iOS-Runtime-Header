//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMessageVersion, HDCodableMetadataDictionary, NSData, NSMutableArray, NSString;

@interface HDCodableOriginalSignedClinicalDataRecord : PBCodable <NSCopying>
{
    double _firstSeenDate;
    double _lastModifiedDate;
    double _receivedDate;
    long long _signatureStatus;
    NSString *_firstSeenDateTimeZoneName;
    NSString *_gatewayExternalID;
    NSString *_issuerIdentifier;
    HDCodableMessageVersion *_messageVersion;
    HDCodableMetadataDictionary *_metadata;
    NSData *_rawContent;
    NSString *_receivedDateTimeZoneName;
    NSString *_sourceURL;
    NSData *_syncIdentifier;
    NSMutableArray *_types;
    NSData *_uniquenessChecksum;
    _Bool _deleted;
    struct {
        unsigned int firstSeenDate:1;
        unsigned int lastModifiedDate:1;
        unsigned int receivedDate:1;
        unsigned int signatureStatus:1;
        unsigned int deleted:1;
    } _has;
}

+ (Class)typeType;
- (void).cxx_destruct;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) double lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSData *uniquenessChecksum; // @synthesize uniquenessChecksum=_uniquenessChecksum;
@property(nonatomic) long long signatureStatus; // @synthesize signatureStatus=_signatureStatus;
@property(retain, nonatomic) NSString *firstSeenDateTimeZoneName; // @synthesize firstSeenDateTimeZoneName=_firstSeenDateTimeZoneName;
@property(nonatomic) double firstSeenDate; // @synthesize firstSeenDate=_firstSeenDate;
@property(retain, nonatomic) NSString *receivedDateTimeZoneName; // @synthesize receivedDateTimeZoneName=_receivedDateTimeZoneName;
@property(nonatomic) double receivedDate; // @synthesize receivedDate=_receivedDate;
@property(retain, nonatomic) HDCodableMetadataDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
@property(retain, nonatomic) NSData *rawContent; // @synthesize rawContent=_rawContent;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSString *issuerIdentifier; // @synthesize issuerIdentifier=_issuerIdentifier;
@property(retain, nonatomic) NSString *gatewayExternalID; // @synthesize gatewayExternalID=_gatewayExternalID;
@property(retain, nonatomic) NSData *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(retain, nonatomic) HDCodableMessageVersion *messageVersion; // @synthesize messageVersion=_messageVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDeleted;
@property(nonatomic) _Bool hasLastModifiedDate;
@property(readonly, nonatomic) _Bool hasUniquenessChecksum;
@property(nonatomic) _Bool hasSignatureStatus;
@property(readonly, nonatomic) _Bool hasFirstSeenDateTimeZoneName;
@property(nonatomic) _Bool hasFirstSeenDate;
@property(readonly, nonatomic) _Bool hasReceivedDateTimeZoneName;
@property(nonatomic) _Bool hasReceivedDate;
@property(readonly, nonatomic) _Bool hasMetadata;
- (id)typeAtIndex:(unsigned long long)arg1;
- (unsigned long long)typesCount;
- (void)addType:(id)arg1;
- (void)clearTypes;
@property(readonly, nonatomic) _Bool hasRawContent;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(readonly, nonatomic) _Bool hasIssuerIdentifier;
@property(readonly, nonatomic) _Bool hasGatewayExternalID;
@property(readonly, nonatomic) _Bool hasSyncIdentifier;
@property(readonly, nonatomic) _Bool hasMessageVersion;

@end

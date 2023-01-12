//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPStreamingAssetSaveAssetResponse : PBCodable
{
    long long _reservedSize;
    long long _uploadURLExpirationTimeSeconds;
    NSString *_uploadURL;
    struct {
        unsigned int reservedSize:1;
        unsigned int uploadURLExpirationTimeSeconds:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long uploadURLExpirationTimeSeconds; // @synthesize uploadURLExpirationTimeSeconds=_uploadURLExpirationTimeSeconds;
@property(retain, nonatomic) NSString *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(nonatomic) long long reservedSize; // @synthesize reservedSize=_reservedSize;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUploadURLExpirationTimeSeconds;
@property(readonly, nonatomic) _Bool hasUploadURL;
@property(nonatomic) _Bool hasReservedSize;

@end


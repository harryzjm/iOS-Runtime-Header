//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRequestedFields;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying>
{
    long long _requestedTTL;
    CKDPRequestedFields *_assetFields;
    int _type;
    struct {
        unsigned int requestedTTL:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) CKDPRequestedFields *assetFields; // @synthesize assetFields=_assetFields;
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
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasRequestedTTL;
@property(readonly, nonatomic) _Bool hasAssetFields;

@end


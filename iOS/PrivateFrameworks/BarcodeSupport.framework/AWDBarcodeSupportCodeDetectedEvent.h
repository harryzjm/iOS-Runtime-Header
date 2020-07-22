//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BarcodeSupport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDBarcodeSupportCodeDetectedEvent : PBCodable <NSCopying>
{
    unsigned long long _detectionTimeMs;
    unsigned long long _timestamp;
    int _barcodeDataType;
    int _clientType;
    int _invalidBarcodeDataType;
    struct {
        unsigned int detectionTimeMs:1;
        unsigned int timestamp:1;
        unsigned int barcodeDataType:1;
        unsigned int clientType:1;
        unsigned int invalidBarcodeDataType:1;
    } _has;
}

@property(nonatomic) unsigned long long detectionTimeMs; // @synthesize detectionTimeMs=_detectionTimeMs;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsInvalidBarcodeDataType:(id)arg1;
- (id)invalidBarcodeDataTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasInvalidBarcodeDataType;
@property(nonatomic) int invalidBarcodeDataType; // @synthesize invalidBarcodeDataType=_invalidBarcodeDataType;
@property(nonatomic) _Bool hasDetectionTimeMs;
- (int)StringAsBarcodeDataType:(id)arg1;
- (id)barcodeDataTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBarcodeDataType;
@property(nonatomic) int barcodeDataType; // @synthesize barcodeDataType=_barcodeDataType;
- (int)StringAsClientType:(id)arg1;
- (id)clientTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasClientType;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) _Bool hasTimestamp;

@end

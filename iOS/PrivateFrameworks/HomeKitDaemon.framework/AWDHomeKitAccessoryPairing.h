//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _certified;
    unsigned int _duration;
    int _errorCode;
    int _transportType;
    AWDHomeKitVendorInformation *_vendorDetails;
    _Bool _isAdd;
    _Bool _isAddedViaWAC;
    _Bool _isSecureWAC;
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int transportType:1;
        unsigned int isAdd:1;
        unsigned int isAddedViaWAC:1;
        unsigned int isSecureWAC:1;
    } _has;
}

@property(nonatomic) _Bool isSecureWAC; // @synthesize isSecureWAC=_isSecureWAC;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) _Bool isAddedViaWAC; // @synthesize isAddedViaWAC=_isAddedViaWAC;
@property(nonatomic) _Bool isAdd; // @synthesize isAdd=_isAdd;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasIsSecureWAC;
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) _Bool hasVendorDetails;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) _Bool hasIsAddedViaWAC;
@property(nonatomic) _Bool hasIsAdd;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end


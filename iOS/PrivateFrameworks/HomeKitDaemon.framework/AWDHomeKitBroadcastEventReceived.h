//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitBroadcastEventReceived : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    AWDHomeKitVendorInformation *_vendorDetails;
    _Bool _isExpectedGSN;
    struct {
        unsigned int timestamp:1;
        unsigned int isExpectedGSN:1;
    } _has;
}

@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) _Bool isExpectedGSN; // @synthesize isExpectedGSN=_isExpectedGSN;
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
@property(readonly, nonatomic) _Bool hasVendorDetails;
@property(nonatomic) _Bool hasIsExpectedGSN;
@property(nonatomic) _Bool hasTimestamp;

@end

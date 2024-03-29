//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecord, CKDPRecordIdentifier, NSString;

@interface CKDPRecordMoveRequest : PBRequest
{
    NSString *_destinationEtag;
    CKDPRecord *_destinationRecord;
    NSString *_destinationRecordProtectionInfoTag;
    NSString *_destinationZoneProtectionInfoTag;
    NSString *_originEtag;
    CKDPRecordIdentifier *_originId;
    int _semantics;
    _Bool _merge;
    struct {
        unsigned int semantics:1;
        unsigned int merge:1;
    } _has;
}

+ (id)options;
- (void).cxx_destruct;
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(retain, nonatomic) CKDPRecord *destinationRecord; // @synthesize destinationRecord=_destinationRecord;
@property(retain, nonatomic) NSString *destinationRecordProtectionInfoTag; // @synthesize destinationRecordProtectionInfoTag=_destinationRecordProtectionInfoTag;
@property(retain, nonatomic) NSString *destinationZoneProtectionInfoTag; // @synthesize destinationZoneProtectionInfoTag=_destinationZoneProtectionInfoTag;
@property(retain, nonatomic) NSString *destinationEtag; // @synthesize destinationEtag=_destinationEtag;
@property(retain, nonatomic) NSString *originEtag; // @synthesize originEtag=_originEtag;
@property(retain, nonatomic) CKDPRecordIdentifier *originId; // @synthesize originId=_originId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMerge;
@property(readonly, nonatomic) _Bool hasDestinationRecord;
@property(readonly, nonatomic) _Bool hasDestinationRecordProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasDestinationZoneProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasDestinationEtag;
@property(readonly, nonatomic) _Bool hasOriginEtag;
@property(readonly, nonatomic) _Bool hasOriginId;
- (int)StringAsSemantics:(id)arg1;
- (id)semanticsAsString:(int)arg1;
@property(nonatomic) _Bool hasSemantics;
@property(nonatomic) int semantics; // @synthesize semantics=_semantics;

@end


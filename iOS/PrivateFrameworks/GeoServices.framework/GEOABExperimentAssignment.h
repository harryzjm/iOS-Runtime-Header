//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABDebugPanelExperimentBranch, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABExperimentAssignment : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    int _placeRequestType;
    NSString *_querySubstring;
    int _serviceType;
    struct {
        unsigned int placeRequestType:1;
        unsigned int serviceType:1;
    } _has;
}

@property(retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch; // @synthesize debugExperimentBranch=_debugExperimentBranch;
@property(retain, nonatomic) NSString *querySubstring; // @synthesize querySubstring=_querySubstring;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDebugExperimentBranch;
@property(readonly, nonatomic) _Bool hasQuerySubstring;
- (int)StringAsPlaceRequestType:(id)arg1;
- (id)placeRequestTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceRequestType;
@property(nonatomic) int placeRequestType; // @synthesize placeRequestType=_placeRequestType;
- (int)StringAsServiceType:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;

@end


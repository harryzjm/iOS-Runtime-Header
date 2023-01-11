//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_intentResponseFailures;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookedSessionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusIssue;
    _Bool _bookedUsingMaps;
    _Bool _cancelled;
    _Bool _contactedDriver;
    _Bool _invalidVehicleLocation;
    _Bool _missingVehicleLocation;
    _Bool _tappedProactiveTrayItem;
    _Bool _viewedDetails;
    _Bool _viewedInProactiveTray;
    struct {
        unsigned int has_statusIssue:1;
        unsigned int has_bookedUsingMaps:1;
        unsigned int has_cancelled:1;
        unsigned int has_contactedDriver:1;
        unsigned int has_invalidVehicleLocation:1;
        unsigned int has_missingVehicleLocation:1;
        unsigned int has_tappedProactiveTrayItem:1;
        unsigned int has_viewedDetails:1;
        unsigned int has_viewedInProactiveTray:1;
        unsigned int read_intentResponseFailures:1;
        unsigned int read_rideAppId:1;
        unsigned int read_rideAppVersion:1;
        unsigned int read_rideBookedSessionId:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)intentResponseFailureType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentResponseFailuresCount;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearIntentResponseFailures;
@property(retain, nonatomic) NSMutableArray *intentResponseFailures;
- (int)StringAsStatusIssue:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusIssue;
@property(nonatomic) int statusIssue;
@property(nonatomic) _Bool hasMissingVehicleLocation;
@property(nonatomic) _Bool missingVehicleLocation;
@property(nonatomic) _Bool hasInvalidVehicleLocation;
@property(nonatomic) _Bool invalidVehicleLocation;
@property(retain, nonatomic) NSString *rideAppVersion;
@property(readonly, nonatomic) _Bool hasRideAppVersion;
@property(retain, nonatomic) NSString *rideBookedSessionId;
@property(readonly, nonatomic) _Bool hasRideBookedSessionId;
@property(retain, nonatomic) NSString *rideAppId;
@property(readonly, nonatomic) _Bool hasRideAppId;
@property(nonatomic) _Bool hasViewedDetails;
@property(nonatomic) _Bool viewedDetails;
@property(nonatomic) _Bool hasTappedProactiveTrayItem;
@property(nonatomic) _Bool tappedProactiveTrayItem;
@property(nonatomic) _Bool hasViewedInProactiveTray;
@property(nonatomic) _Bool viewedInProactiveTray;
@property(nonatomic) _Bool hasContactedDriver;
@property(nonatomic) _Bool contactedDriver;
@property(nonatomic) _Bool hasCancelled;
@property(nonatomic) _Bool cancelled;
@property(nonatomic) _Bool hasBookedUsingMaps;
@property(nonatomic) _Bool bookedUsingMaps;
- (id)initWithData:(id)arg1;
- (id)init;

@end

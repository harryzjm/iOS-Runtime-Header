//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAttributionApp : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _restaurantReservationExtensionSupport;
    _Bool _supportsRestaurantQueueing;
    _Bool _supportsRestaurantReservations;
    struct {
        unsigned int has_restaurantReservationExtensionSupport:1;
        unsigned int has_supportsRestaurantQueueing:1;
        unsigned int has_supportsRestaurantReservations:1;
        unsigned int read_appBundleIdentifier:1;
        unsigned int read_handledSchemes:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)handledSchemesType;
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
- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;
@property(nonatomic) _Bool hasRestaurantReservationExtensionSupport;
@property(nonatomic) int restaurantReservationExtensionSupport;
@property(nonatomic) _Bool hasSupportsRestaurantQueueing;
@property(nonatomic) _Bool supportsRestaurantQueueing;
@property(nonatomic) _Bool hasSupportsRestaurantReservations;
@property(nonatomic) _Bool supportsRestaurantReservations;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (unsigned long long)handledSchemesCount;
- (void)addHandledSchemes:(id)arg1;
- (void)clearHandledSchemes;
@property(retain, nonatomic) NSMutableArray *handledSchemes;
@property(retain, nonatomic) NSString *appBundleIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end

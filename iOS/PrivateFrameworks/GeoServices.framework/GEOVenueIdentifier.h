//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueIdentifier-Protocol.h>

@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier>
{
    _Bool _hasVenueID;
    unsigned long long _venueID;
    _Bool _hasFeatureID;
    unsigned long long _featureID;
    _Bool _hasBusinessID;
    unsigned long long _businessID;
    NSArray *_componentIdentifiers;
    NSArray *_originalIdentifiers;
}

+ (id)componentIdentifiersFromVenueIdentifiers:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *componentIdentifiers; // @synthesize componentIdentifiers=_componentIdentifiers;
@property(readonly, nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
@property(readonly, nonatomic, getter=_hasBusinessID) _Bool hasBusinessID; // @synthesize hasBusinessID=_hasBusinessID;
@property(readonly, nonatomic) unsigned long long featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic, getter=_hasFeatureID) _Bool hasFeatureID; // @synthesize hasFeatureID=_hasFeatureID;
@property(readonly, nonatomic) unsigned long long venueID; // @synthesize venueID=_venueID;
@property(readonly, nonatomic, getter=_hasVenueID) _Bool hasVenueID; // @synthesize hasVenueID=_hasVenueID;
- (id)placeDataVenueIdentifierForVenue;
- (id)placeDataVenueIdentifier;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;
- (id)initWithVenueID:(unsigned long long)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifiers:(id)arg4;
- (id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2;
- (id)initWithVenueIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

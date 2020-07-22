//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitLine-Protocol.h>

@class GEOMapItemIdentifier, GEOPBTransitLine, GEOStyleAttributes, NSArray, NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitSystem;

__attribute__((visibility("hidden")))
@interface _GEOTransitLine : NSObject <GEOTransitLine>
{
    GEOPBTransitLine *_line;
    id <GEOTransitSystem> _system;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool showVehicleNumber;
@property(readonly, nonatomic) NSString *lineColorString;
@property(readonly, nonatomic) _Bool hasLineColorString;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> alternateArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> modeArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork;
@property(readonly, nonatomic) _Bool departuresAreVehicleSpecific;
@property(readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property(readonly, nonatomic) id <GEOTransitSystem> system;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) unsigned long long muid;
- (id)initWithLine:(id)arg1 system:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


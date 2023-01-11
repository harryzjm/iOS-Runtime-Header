//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitDepartureSequence-Protocol.h>

@class GEOPDDepartureSequence, NSArray, NSSet, NSString;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence>
{
    GEOPDDepartureSequence *_sequence;
    id <GEOTransitLine> _line;
    NSSet *_nextStopIDs;
    long long _displayStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *nextStopIDs;
- (id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
- (_Bool)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;
- (id)frequencyToDescribeAtDate:(id)arg1;
- (double)frequencyForSortingAtDate:(id)arg1;
- (_Bool)hasFrequencyAtDate:(id)arg1;
- (id)departuresValidForDate:(id)arg1;
- (id)firstDepartureValidForDate:(id)arg1;
- (id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
- (id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
- (unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
- (id)firstDepartureOnOrAfterDate:(id)arg1;
- (id)firstDepartureAfterDate:(id)arg1;
- (void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
- (_Bool)areOperatingHours:(id)arg1 activeForDate:(id)arg2;
@property(readonly, nonatomic) long long displayStyle;
@property(readonly, nonatomic) _Bool isLowFrequency;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) NSString *headsign;
@property(readonly, nonatomic) NSString *direction;
@property(readonly, nonatomic) id <GEOTransitLine> line;
@property(readonly, nonatomic) NSArray *frequencies;
- (unsigned long long)stopId;
@property(readonly, nonatomic) NSArray *departures;
- (id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

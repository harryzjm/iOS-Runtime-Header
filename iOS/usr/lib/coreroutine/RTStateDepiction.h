//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSDate, NSString, RTMapItem, RTStateDepictionOneState, RTStateModelLocation;
@protocol GEOMapItem;

@interface RTStateDepiction : NSObject <NSSecureCoding>
{
    long long _numOfDataPts;
    RTStateDepictionOneState *_clusterState;
}

+ (double)quantizeTimeIntervalSinceReferenceDate:(double)arg1;
+ (long long)maximumNumberOfDataPoints;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) RTStateDepictionOneState *clusterState; // @synthesize clusterState=_clusterState;
@property(nonatomic) long long numOfDataPts; // @synthesize numOfDataPts=_numOfDataPts;
- (void).cxx_destruct;
- (id)description;
- (_Bool)exemptFromPurge;
- (void)removeAllVisitsExceptMostRecent;
- (id)getPredState:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4;
- (id)getGetWeeklyStats:(double)arg1 numOfWeeks:(int)arg2 uniqueID:(id)arg3;
- (id)getEarliestLatestEntry;
- (void)showState;
- (id)getAggStateStat;
- (unsigned long long)getNumOfVisitsOverall;
- (void)addOneVisitsFromStateDepiction:(id)arg1;
- (id)getAllOneVisits;
- (id)getRecentVisits:(double)arg1;
- (_Bool)cleanState:(double)arg1;
- (id)lastEntyExit;
- (double)getLastVisit;
- (double)getAggTimeScaleFactor:(double)arg1 predictionWindow:(double)arg2;
@property(copy, nonatomic) NSString *customLabel;
@property(retain, nonatomic) NSDate *geocodeDate;
@property(nonatomic) long long typeSource;
@property(nonatomic) long long type;
@property(nonatomic) long long mapItemSource;
@property(retain, nonatomic) RTMapItem *mapItem;
@property(retain, nonatomic) id <GEOMapItem> geoMapItem;
- (void)incrementNumOfDataPtsByInteger:(long long)arg1;
@property(retain, nonatomic) RTStateModelLocation *location;
- (void)removeEntry:(double)arg1 exit:(double)arg2;
- (void)submitEntry:(double)arg1 exit:(double)arg2;
- (void)_performErrorCorrection;
- (void)_performIntegrityCheck;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 type:(long long)arg2 typeSource:(long long)arg3 customLabel:(id)arg4 mapItem:(id)arg5;
- (id)init;
- (id)_excludeEntryExitOutlierDates:(id)arg1 options:(id)arg2;
- (id)_filterEntryExitData:(id)arg1 options:(id)arg2;
- (double)_calculateStandardDeviationForDates:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_referenceAdjustEntryExitDates:(id)arg1 options:(id)arg2;
- (double)calculateStandardDeviationWithOptions:(id)arg1 error:(id *)arg2;

@end


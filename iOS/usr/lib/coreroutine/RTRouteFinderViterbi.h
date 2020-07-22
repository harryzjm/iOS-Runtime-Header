//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/RTRouteFinderProtocol-Protocol.h>

@class NSArray, NSString, RTMapAccess;
@protocol OS_dispatch_queue;

@interface RTRouteFinderViterbi : NSObject <RTRouteFinderProtocol>
{
    _Bool _busy;
    int _metricNumberOfFilteredLocations;
    unsigned long long _shortestPathRequestBudget;
    unsigned long long _totalShortestPathRequests;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    NSArray *_evaluationBoard;
    RTMapAccess *_mapAccess;
}

@property(nonatomic) _Bool busy; // @synthesize busy=_busy;
@property(retain, nonatomic) RTMapAccess *mapAccess; // @synthesize mapAccess=_mapAccess;
@property(retain, nonatomic) NSArray *evaluationBoard; // @synthesize evaluationBoard=_evaluationBoard;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property int metricNumberOfFilteredLocations; // @synthesize metricNumberOfFilteredLocations=_metricNumberOfFilteredLocations;
@property(nonatomic) unsigned long long totalShortestPathRequests; // @synthesize totalShortestPathRequests=_totalShortestPathRequests;
@property(nonatomic) unsigned long long shortestPathRequestBudget; // @synthesize shortestPathRequestBudget=_shortestPathRequestBudget;
- (void).cxx_destruct;
- (void)_callHandlerWithRoute:(id)arg1 error:(id)arg2;
- (id)_extractBestRoute;
- (double)_emissionCostForWaypointIndex:(long long)arg1 roadItemIndex:(long long)arg2;
- (void)_fetchTransitionForWaypointIndex:(long long)arg1 roadItemIndex:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_evaluateScoreForWaypointIndex:(long long)arg1 roadItemIndex:(long long)arg2;
- (void)_evaluateScoreForWaypointIndex:(long long)arg1;
- (void)_fetchRoadsForWaypointIndex:(long long)arg1;
- (void)_processWaypointIndex:(long long)arg1;
- (id)_buildEvaluationBoardForWaypoints:(id)arg1 originRoad:(id)arg2 destinationRoad:(id)arg3;
- (_Bool)_sanityCheckOnWaypoints:(id)arg1 originRoad:(id)arg2 destinationRoad:(id)arg3 error:(id *)arg4;
- (void)_findRouteForWayPoints:(id)arg1 originRoad:(id)arg2 destinationRoad:(id)arg3 routeHandler:(CDUnknownBlockType)arg4;
- (void)findRouteForWayPoints:(id)arg1 originRoad:(id)arg2 destinationRoad:(id)arg3 routeHandler:(CDUnknownBlockType)arg4;
- (void)findRouteForWaypoints:(id)arg1 routeHandler:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1 mapAccess:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


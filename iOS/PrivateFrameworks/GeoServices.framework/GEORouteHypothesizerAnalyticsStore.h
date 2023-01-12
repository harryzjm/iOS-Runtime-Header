//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerAnalyticsStore : NSObject
{
    double _observedEarlyDeltaFromRequiredTimeToLeave;
    double _observedLateDeltaFromRequiredTimeToLeave;
    unsigned long long _hypothesizerRerouteCount;
    unsigned long long _etaUpdatesAfterEventStart;
    _Bool _etaUpdatesWereReported;
    unsigned long long _hypothesisCount;
    _Bool _stopped;
    unsigned long long _uiNotificationType;
    NSDate *_lastGenerationDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool etaUpdatesWereReported; // @synthesize etaUpdatesWereReported=_etaUpdatesWereReported;
@property(nonatomic) unsigned long long etaUpdatesAfterEventStart; // @synthesize etaUpdatesAfterEventStart=_etaUpdatesAfterEventStart;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)didShowUI:(unsigned long long)arg1;
- (void)didStopHypothesizing;
- (void)didGenerateHypothesis;
- (void)didArriveWithExpectedArrivalTime:(id)arg1;
- (void)didStopMoving;
- (void)didStartMovingWithExpectedDepartureTime:(id)arg1;
- (void)didReroute;
- (void)dealloc;
- (id)init;

@end


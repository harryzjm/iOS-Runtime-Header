//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RTVisit;

@interface RTVisitMonitorState : NSObject
{
    RTVisit *_lastVisitIncident;
    RTVisit *_lastLowConfidenceVisitIncident;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTVisit *lastLowConfidenceVisitIncident; // @synthesize lastLowConfidenceVisitIncident=_lastLowConfidenceVisitIncident;
@property(retain, nonatomic) RTVisit *lastVisitIncident; // @synthesize lastVisitIncident=_lastVisitIncident;
- (void)dump;
- (id)initWithLastVisit:(id)arg1 lastLowConfidenceVisit:(id)arg2;
- (id)init;

@end

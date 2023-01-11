//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNRouteHypothesizerProvider-Protocol.h>

@class CADSyntheticRouteHypothesizerCache, NSString;

@interface CALNSyntheticRouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>
{
    CADSyntheticRouteHypothesizerCache *_syntheticRouteHypothesizerCache;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) CADSyntheticRouteHypothesizerCache *syntheticRouteHypothesizerCache; // @synthesize syntheticRouteHypothesizerCache=_syntheticRouteHypothesizerCache;
- (void).cxx_destruct;
- (void)removedRouteHypothesizerForEventExternalURL:(id)arg1;
- (void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;
- (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
- (id)hypothesizerForPlannedDestination:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

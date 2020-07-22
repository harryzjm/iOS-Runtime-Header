//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, MKDirectionsRequest;
@protocol MKLocationManagerOperation, OS_dispatch_group;

@interface MKDirections : NSObject
{
    MKDirectionsRequest *_request;
    GEODirectionsRequest *_geoRequest;
    GEOQuickETARequest *_etaRequest;
    GEOQuickETARequester *_etaRequester;
    id <MKLocationManagerOperation> _locationOperation;
    NSObject<OS_dispatch_group> *_waypointsDispatchGroup;
}

- (void).cxx_destruct;
- (void)calculateETAWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_calculateETAWithTraits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)calculateDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(_Bool)arg1 traits:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_establishCurrentLocationAndThen:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCalculating) _Bool calculating;
- (void)cancel;
- (void)dealloc;
- (void)_cleanupLocationOperation;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end


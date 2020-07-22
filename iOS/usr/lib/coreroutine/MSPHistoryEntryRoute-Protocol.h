//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/MSPHistoryEntry-Protocol.h>

@class GEOComposedWaypoint, GEOURLRouteHandle;

@protocol MSPHistoryEntryRoute <MSPHistoryEntry>
- (_Bool)navigationWasInterrupted;
- (GEOURLRouteHandle *)routeHandle;
- (GEOComposedWaypoint *)endWaypoint;
- (GEOComposedWaypoint *)startWaypoint;
- (long long)transportType;
@end

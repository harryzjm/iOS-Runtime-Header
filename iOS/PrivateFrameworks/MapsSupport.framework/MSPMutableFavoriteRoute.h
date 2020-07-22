//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPFavoriteRoute-Protocol.h>

@class GEOStorageRouteRequestStorage, NSString, NSUUID;

@interface MSPMutableFavoriteRoute <MSPFavoriteRoute>
{
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (int)transportType;
- (id)endWaypoint;
- (id)startWaypoint;
@property(copy, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
- (id)initWithBookmarkStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *storageIdentifier;
@property(readonly) Class superclass;

@end


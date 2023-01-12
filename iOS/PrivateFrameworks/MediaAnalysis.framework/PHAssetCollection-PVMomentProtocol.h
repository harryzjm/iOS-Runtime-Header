//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetCollection.h>

@class NSDate, NSString;

@interface PHAssetCollection (PVMomentProtocol)
@property(readonly, nonatomic) _Bool isCoarse;
@property(readonly, nonatomic) struct CLLocationCoordinate2D approximateCoordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) unsigned long long estimatedAssetCount;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

#import <PhotoAnalysis/PVAssetProtocol-Protocol.h>

@class NSData, NSDate, NSString;

@interface PHAsset (PVAssetProtocol) <PVAssetProtocol>
@property(readonly, nonatomic) NSDate *clsDistanceIdentity;

// Remaining properties
@property(readonly, nonatomic) NSString *cloudIdentifier;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate;
@property(readonly) Class superclass;
@end

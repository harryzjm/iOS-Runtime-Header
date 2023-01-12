//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BCCloudData-Protocol.h>

@class NSDate, NSString;

@protocol BCReadingNowDetail <BCCloudData>
@property(readonly, copy, nonatomic) NSString *cloudAssetType;
@property(readonly, copy, nonatomic) NSDate *lastEngagedDate;
@property(readonly, nonatomic) _Bool isTrackedAsRecent;
@property(readonly, copy, nonatomic) NSString *assetID;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol PGGraphIngestMoment <NSObject>
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) unsigned long long totalNumberOfPersons;
@property(readonly, nonatomic) unsigned long long numberOfItemsWithPeople;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) double contentScore;
@property(readonly, nonatomic) _Bool isInteresting;
@property(readonly, nonatomic) _Bool isSmartInteresting;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@end


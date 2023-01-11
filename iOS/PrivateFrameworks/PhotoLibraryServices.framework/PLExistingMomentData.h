//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateInterval;
@protocol NSCopying;

@interface PLExistingMomentData : NSObject
{
    NSObject<NSCopying> *_objectID;
    unsigned long long _numberOfAssets;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateInterval *_dateInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=_objectID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)registerAsset:(id)arg1;
- (id)initWithMoment:(id)arg1;

@end

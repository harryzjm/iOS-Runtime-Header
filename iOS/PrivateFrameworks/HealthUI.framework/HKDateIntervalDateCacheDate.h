//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HKDateIntervalDateCacheDate : NSObject
{
    NSDate *_date;
    long long _dateType;
}

@property(readonly, nonatomic) long long dateType; // @synthesize dateType=_dateType;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface EKAvailabilitySpan : NSObject
{
    long long _type;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;
- (id)init;

@end


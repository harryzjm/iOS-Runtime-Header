//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface CLKDate : NSDate
{
}

+ (id)unmodifiedDate;
+ (id)complicationDate;
+ (id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1;
+ (id)complicationDateWithTimeIntervalSinceNow:(double)arg1;
+ (double)timeIntervalSinceReferenceDate;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)date;
- (double)timeIntervalSinceNow;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)init;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriTasks/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface STGenericIntentDateRange : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

@end


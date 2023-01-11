//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject
{
    NSDateComponents *_startDateComponents;
    NSDateComponents *_endDateComponents;
}

@property(readonly, nonatomic) NSDateComponents *endDateComponents; // @synthesize endDateComponents=_endDateComponents;
@property(readonly, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
- (void).cxx_destruct;
- (unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)arg1;
- (_Bool)containsDateComponents:(id)arg1 inCalendar:(id)arg2;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;

@end


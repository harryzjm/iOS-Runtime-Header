//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ICSharedListeningConnectionReportEvent : NSObject
{
    NSString *_name;
    NSError *_error;
    NSDate *_startDate;
    NSDate *_endDate;
    NSMutableArray *_subEvents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *subEvents; // @synthesize subEvents=_subEvents;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) double duration;
- (void)addSubEvent:(id)arg1;
- (id)initWithName:(id)arg1;

@end

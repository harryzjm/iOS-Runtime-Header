//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError;

@interface HMMLogEvent : NSObject
{
    _Bool _submitted;
    NSError *_error;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)alloc;
- (void).cxx_destruct;
@property(copy) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isSubmitted) _Bool submitted; // @synthesize submitted=_submitted;
@property(readonly) double durationInMilliseconds;
- (void)submitAtDate:(id)arg1;
- (_Bool)shouldSubmit;
- (id)init;

@end

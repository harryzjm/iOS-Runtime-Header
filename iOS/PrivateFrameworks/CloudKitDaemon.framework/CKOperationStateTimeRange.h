//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CKOperationStateTimeRange : NSObject
{
    unsigned long long _operationState;
    NSDate *_startDate;
    double _duration;
}

- (void).cxx_destruct;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) unsigned long long operationState; // @synthesize operationState=_operationState;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
@property(readonly) double relativeStart;
@property(readonly) double absoluteStop;
- (long long)compareStopTime:(id)arg1;
- (long long)compareStartTime:(id)arg1;
@property(readonly) double executing;
@property(readonly) double queueing;
@property(readonly) double absoluteStart;
- (id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


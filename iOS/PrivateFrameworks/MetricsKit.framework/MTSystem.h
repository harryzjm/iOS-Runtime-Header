//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTEnvironment, MTEventRecorder;
@protocol MTEventFilter;

@interface MTSystem
{
    MTEnvironment *_environment;
    MTEventRecorder *_eventRecorder;
    id <MTEventFilter> _eventFilter;
    id <MTEventFilter> _treatmentFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MTEventFilter> treatmentFilter; // @synthesize treatmentFilter=_treatmentFilter;
@property(retain, nonatomic) id <MTEventFilter> eventFilter; // @synthesize eventFilter=_eventFilter;
@property(retain, nonatomic) MTEventRecorder *eventRecorder; // @synthesize eventRecorder=_eventRecorder;
@property(retain, nonatomic) MTEnvironment *environment; // @synthesize environment=_environment;
- (void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (id)initWithMetricsKit:(id)arg1;

@end

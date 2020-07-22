//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PETScalarEventTracker
{
    NSString *_event;
}

@property(readonly, nonatomic) NSString *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (void)trackEventWithPropertyValues:(id)arg1 setValue:(unsigned long long)arg2;
- (void)trackEventWithPropertyValues:(id)arg1 value:(unsigned long long)arg2;
- (void)trackEventWithPropertyValues:(id)arg1;
- (id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4;
- (id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3;

@end

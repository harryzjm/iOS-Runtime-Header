//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RTPredictionExpertApplicationLocation
{
    double _maxLocationEventAge;
}

@property(nonatomic) double maxLocationEventAge; // @synthesize maxLocationEventAge=_maxLocationEventAge;
- (id)dateIntervalForAppLaunchEvent:(id)arg1;
- (void)_processEventsWithAppLaunchEvents:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)supportedEventClasses;
- (id)initWithQueue:(id)arg1 category:(long long)arg2 dataSource:(id)arg3 defaultsManager:(id)arg4 mediaRemote:(id)arg5 featureAddons:(id)arg6;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDCameraConfigurationsLogEvent : HMMLogEvent
{
    NSArray *_homeSettingsConfigurations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *homeSettingsConfigurations; // @synthesize homeSettingsConfigurations=_homeSettingsConfigurations;
- (id)initWithHomes:(id)arg1;

@end


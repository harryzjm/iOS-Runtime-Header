//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UIFocusDeferralSettings : PTSettings
{
    double _userEngagementTimeoutInSeconds;
}

+ (id)settingsControllerModule;
@property(nonatomic) double userEngagementTimeoutInSeconds; // @synthesize userEngagementTimeoutInSeconds=_userEngagementTimeoutInSeconds;
- (void)setDefaultValues;

@end

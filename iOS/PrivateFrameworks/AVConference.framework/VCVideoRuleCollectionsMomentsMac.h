//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsMomentsMac
{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;
- (int)getMomentsCapabilities;
- (id)initWithHardwareSettings:(id)arg1;

@end

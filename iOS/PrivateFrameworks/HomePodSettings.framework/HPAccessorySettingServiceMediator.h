//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HPSAccessorySettingService, NSString;

__attribute__((visibility("hidden")))
@interface HPAccessorySettingServiceMediator : NSObject
{
    HPSAccessorySettingService *_settingsInterface;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak HPSAccessorySettingService *settingsInterface; // @synthesize settingsInterface=_settingsInterface;
- (void)didUpdateHH2State:(_Bool)arg1;
- (void)notifyDidUpdateSetting:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithInterface:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFUserNotificationServiceTopic, HMHome, HUUserNotificationTopicServiceListModuleController;

@interface HUUserNotificationTopicServiceListViewController
{
    HMHome *_home;
    HFUserNotificationServiceTopic *_topic;
    HUUserNotificationTopicServiceListModuleController *_moduleController;
}

@property(retain, nonatomic) HUUserNotificationTopicServiceListModuleController *moduleController; // @synthesize moduleController=_moduleController;
@property(readonly, nonatomic) HFUserNotificationServiceTopic *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(_Bool)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithHome:(id)arg1 topic:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

@end


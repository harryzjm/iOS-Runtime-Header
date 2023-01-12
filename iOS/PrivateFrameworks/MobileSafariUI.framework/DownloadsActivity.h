//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ActionPanel, UINavigationController;

__attribute__((visibility("hidden")))
@interface DownloadsActivity
{
    UINavigationController *_navigationController;
    ActionPanel *_parentViewController;
}

- (void).cxx_destruct;
@property __weak ActionPanel *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)_downloadsDidChange;
- (void)performActivityWithTabDocument:(id)arg1;
- (id)_embeddedActivityViewController;
- (id)_navigationController;
- (_Bool)canPerformWithTabDocument:(id)arg1;
- (_Bool)canPerformOnNewTabPage;
- (long long)actionType;
- (id)_activityBadgeColor;
- (id)_activityBadgeTextColor;
- (id)_activityBadgeText;
- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (id)init;

@end


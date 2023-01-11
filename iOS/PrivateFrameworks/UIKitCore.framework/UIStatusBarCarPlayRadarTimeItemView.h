//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayRadarTimeItemView
{
    _Bool _isInternalInstall;
    _Bool _radarItemEnabled;
    _Bool _currentlyGatheringLogs;
}

- (_Bool)_showRadarButtonForInternalInstalls;
- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;
- (id)_timeImageSet;
- (id)contentsImage;
- (_Bool)usesAdvancedActions;
- (_Bool)allowsUserInteraction;
- (_Bool)canBecomeFocused;
- (_Bool)showsTouchWhenHighlighted;
- (long long)buttonType;
- (id)highlightImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


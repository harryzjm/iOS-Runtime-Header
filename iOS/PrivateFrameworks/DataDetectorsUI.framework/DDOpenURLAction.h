//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDAction.h"

@class LSAppLink;

__attribute__((visibility("hidden")))
@interface DDOpenURLAction : DDAction
{
    LSAppLink *_appLink;
    _Bool _appLinkInitDone;
}

- (void).cxx_destruct;
- (_Bool)shouldOpenInApp;
- (_Bool)shouldOpenInSafari;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (_Bool)canBePerformedByOpeningURL;
- (_Bool)canBePerformedWhenDeviceIsLocked;
- (void)performFromView:(id)arg1;
- (id)quickActionTitle;
- (id)compactTitle;
- (id)localizedName;
- (id)companionAction;
- (id)appLink;
- (id)iconName;

@end


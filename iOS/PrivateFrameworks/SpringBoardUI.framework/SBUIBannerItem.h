//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SBUIBannerItem : NSObject
{
}

- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)defaultActionWithContext:(id)arg1;
- (_Bool)hasSubActions;
- (id)subActions;
- (id)subActionLabels;
- (_Bool)shouldShowModalSubActions;
- (id)message;
- (id)title;
- (_Bool)canShowWhileLocked;
- (_Bool)shouldPlayLightsAndSirens;
- (_Bool)canShowInAssistant;
- (id)sortDate;
- (id)sound;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (unsigned long long)priority;

@end


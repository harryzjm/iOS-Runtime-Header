//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBUIAppIconForceTouchController.h>

#import <SearchUI/SBUIAppIconForceTouchControllerDataSource-Protocol.h>
#import <SearchUI/SBUIAppIconForceTouchControllerDelegate-Protocol.h>

@class NSString;

@interface SearchUIAppIconPeekController : SBUIAppIconForceTouchController <SBUIAppIconForceTouchControllerDataSource, SBUIAppIconForceTouchControllerDelegate>
{
}

+ (id)sharedAppIconPeekController;
- (_Bool)appIconForceTouchController:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forGestureRecognizer:(id)arg4;
- (_Bool)appIconForceTouchController:(id)arg1 shouldHandleGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 willPresentForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutItemsForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationBundleURLForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationBundleIdentifierForGestureRecognizer:(id)arg2;
- (struct CGRect)appIconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2;
- (double)appIconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


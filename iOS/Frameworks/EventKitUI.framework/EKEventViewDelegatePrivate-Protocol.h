//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKEventViewDelegate-Protocol.h>
#import <EventKitUI/EKUIAppReviewPrompter-Protocol.h>

@class EKEventEditViewController, EKEventViewController;

@protocol EKEventViewDelegatePrivate <EKEventViewDelegate, EKUIAppReviewPrompter>

@optional
- (void)eventViewControllerDidRequestAddToCalendar:(EKEventViewController *)arg1;
- (long long)editorPresentationStyle;
- (_Bool)eventViewControllerEditButtonTemporarilyDisabled:(EKEventViewController *)arg1;
- (void)eventViewControllerWillDisappear:(EKEventViewController *)arg1;
- (_Bool)eventViewControllerShouldDismissSelf:(EKEventViewController *)arg1;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDismissalOfEditViewController:(EKEventEditViewController *)arg2;
- (void)eventViewControllerWillFinishEditingEvent:(EKEventViewController *)arg1 deleted:(_Bool)arg2;
- (void)eventViewControllerDidBeginEditingEventWithEditViewController:(EKEventEditViewController *)arg1;
- (void)eventViewController:(EKEventViewController *)arg1 didDismissEditViewController:(EKEventEditViewController *)arg2 deleted:(_Bool)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 willDismissEditViewController:(EKEventEditViewController *)arg2 deleted:(_Bool)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDisplayOfEditViewController:(EKEventEditViewController *)arg2 animated:(_Bool)arg3;
- (_Bool)eventViewDelegateShouldHandlePresentationOfEditViewController:(EKEventViewController *)arg1;
- (_Bool)eventViewDelegateShouldCreateOwnEditViewController:(EKEventViewController *)arg1;
- (void)eventViewControllerWillBeginEditingEvent:(EKEventViewController *)arg1;
@end


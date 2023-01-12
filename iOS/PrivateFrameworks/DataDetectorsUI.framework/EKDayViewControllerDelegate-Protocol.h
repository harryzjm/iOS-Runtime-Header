//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDetectorsUI/NSObject-Protocol.h>

@class EKCalendarDate, EKDayOccurrenceView, EKDayViewController, EKEvent, NSArray, NSDate, NSDateComponents, NSString, UIView, UIViewController;

@protocol EKDayViewControllerDelegate <NSObject>
- (void)dayOccurrenceViewSelected:(EKDayOccurrenceView *)arg1 source:(unsigned long long)arg2;
- (NSArray *)selectedEventsForEditMenu;
- (void)dayViewController:(EKDayViewController *)arg1 didChangeDisplayDate:(NSDateComponents *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 didSelectEvent:(EKEvent *)arg2 animated:(_Bool)arg3 userInitiated:(_Bool)arg4;

@optional
- (void)dayViewController:(EKDayViewController *)arg1 modifySelection:(EKEvent *)arg2;
- (UIView *)dayViewController:(EKDayViewController *)arg1 selectedCopyViewForView:(EKDayOccurrenceView *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 requestsSaveFirstVisibleSecondPreference:(int)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 requestsSaveHourScalePreference:(double)arg2;
- (double)dayViewControllerPersistedHourScalePreference:(EKDayViewController *)arg1;
- (void)dayViewControllerDidChangeDisplayedOccurrences:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 didChangeDisplayedOccurrencesDueToTrigger:(int)arg2;
- (void)dayViewControllerDidReloadData:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 didReloadDataDueToTrigger:(int)arg2;
- (void)dayViewControllerDidEndDecelerating:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 didStartDeceleratingTargettingDate:(NSDateComponents *)arg2;
- (void)dayViewControllerDidEndScrolling:(EKDayViewController *)arg1;
- (void)dayViewControllerDidUpdateScrollPosition:(EKDayViewController *)arg1;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(EKDayViewController *)arg1;
- (NSArray *)selectedOccurrencesForDayViewController:(EKDayViewController *)arg1;
- (_Bool)dayViewControllerShouldDrawSynchronously:(EKDayViewController *)arg1;
- (void)dayViewControllerCurrentDayDidCompleteAsyncLoadAndLayout:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 requestsShowEvent:(EKEvent *)arg2 showDetails:(_Bool)arg3;
- (void)dayViewController:(EKDayViewController *)arg1 requestsPresentationOfViewControllerForGestures:(UIViewController *)arg2;
- (void)updateSelectedOccurrenceView;
- (void)dayViewControllerDidFinishPinchingDayView:(EKDayViewController *)arg1;
- (void)dayViewControllerIsPinchingDayView:(EKDayViewController *)arg1;
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(EKDayViewController *)arg1;
- (_Bool)dayViewControllerShouldEndGestureEditingOnTap:(EKDayViewController *)arg1;
- (_Bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(EKDayViewController *)arg1;
- (_Bool)dayviewControllerShouldAllowSwipeToChangeDays:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 handleGestureCommittingOccurrence:(EKEvent *)arg2;
- (_Bool)delegateWantsToHandleDayViewController:(EKDayViewController *)arg1 gestureCommittingOccurrence:(EKEvent *)arg2;
- (_Bool)dayViewController:(EKDayViewController *)arg1 willDuplicateOccurrence:(EKEvent *)arg2;
- (void)dayViewControllerDidTapEmptySpace:(EKDayViewController *)arg1 onDate:(EKCalendarDate *)arg2;
- (_Bool)dayViewControllerShouldAllowLongPress:(EKDayViewController *)arg1;
- (void)dayViewController:(EKDayViewController *)arg1 awaitsDeletingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 awaitsRefreshingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 beginEditingOccurrence:(EKEvent *)arg2 creationMethod:(NSString *)arg3;
- (EKEvent *)dayViewController:(EKDayViewController *)arg1 createEventAtDate:(NSDate *)arg2 allDay:(_Bool)arg3;
@end


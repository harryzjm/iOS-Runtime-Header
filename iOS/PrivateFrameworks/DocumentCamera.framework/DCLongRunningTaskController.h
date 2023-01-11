//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DocumentCamera/DCProgressViewControllerDelegate-Protocol.h>

@class DCProgressViewController, NSDate, NSProgress, NSString, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface DCLongRunningTaskController : NSObject <DCProgressViewControllerDelegate>
{
    _Bool _isCancelled;
    _Bool _shouldShowCancelButton;
    _Bool _shouldShowCircularProgress;
    _Bool _progressViewControllerDidFinishPresenting;
    _Bool _shouldDismissProgressViewController;
    NSString *_progressFormatString;
    struct UIViewController *_viewControllerToPresentFrom;
    struct UIWindow *_window;
    double _intervalBeforeOpeningProgressDialog;
    id _keepAlive;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _updateProgressUIBlock;
    NSProgress *_progress;
    NSDate *_lastAccessibilityAnnouncementDate;
    NSDate *_openProgressDate;
    DCProgressViewController *_progressViewController;
}

+ (void)setMainWindow:(struct UIWindow *)arg1;
@property(nonatomic) _Bool shouldDismissProgressViewController; // @synthesize shouldDismissProgressViewController=_shouldDismissProgressViewController;
@property(nonatomic) _Bool progressViewControllerDidFinishPresenting; // @synthesize progressViewControllerDidFinishPresenting=_progressViewControllerDidFinishPresenting;
@property(retain, nonatomic) DCProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
@property(retain, nonatomic) NSDate *openProgressDate; // @synthesize openProgressDate=_openProgressDate;
@property(retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate; // @synthesize lastAccessibilityAnnouncementDate=_lastAccessibilityAnnouncementDate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType updateProgressUIBlock; // @synthesize updateProgressUIBlock=_updateProgressUIBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) double intervalBeforeOpeningProgressDialog; // @synthesize intervalBeforeOpeningProgressDialog=_intervalBeforeOpeningProgressDialog;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) _Bool shouldShowCircularProgress; // @synthesize shouldShowCircularProgress=_shouldShowCircularProgress;
@property(retain, nonatomic) UIViewController *viewControllerToPresentFrom; // @synthesize viewControllerToPresentFrom=_viewControllerToPresentFrom;
@property(copy, nonatomic) NSString *progressFormatString; // @synthesize progressFormatString=_progressFormatString;
@property(nonatomic) _Bool shouldShowCancelButton; // @synthesize shouldShowCancelButton=_shouldShowCancelButton;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void).cxx_destruct;
- (void)willDismissProgressViewController:(id)arg1;
- (void)closeProgressDialog;
- (void)openProgressDialog;
- (void)updateProgress;
- (void)completeTaskIfNecessary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startTask:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithWindow:(struct UIWindow *)arg1 intervalBeforeOpeningProgressDialog:(double)arg2;
- (id)init;

@end

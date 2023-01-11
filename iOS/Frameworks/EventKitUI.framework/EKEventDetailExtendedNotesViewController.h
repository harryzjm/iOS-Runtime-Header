//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class NSString, UITextView;
@protocol EKEditItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol>
{
    UITextView *_textView;
    NSString *_notes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
- (void)updateTextView;
- (void)loadTextView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_updateConstraints;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(nonatomic) _Bool presentModally;
@property(nonatomic) _Bool useCustomBackButton;

@end

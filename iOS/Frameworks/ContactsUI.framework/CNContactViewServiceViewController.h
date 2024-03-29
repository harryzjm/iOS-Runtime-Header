//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNContactContentViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewServiceViewController : UIViewController
{
    CNContactContentViewController *_contactContentVC;
}

+ (Class)classForContentViewControllerImpl;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactContentViewController *contactContentVC; // @synthesize contactContentVC=_contactContentVC;
- (void)viewDidAppearForContactViewController:(id)arg1;
- (void)presentCancelConfirmationAlert;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)didExecuteClearRecentsDataAction;
- (void)viewDidAppear;
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)isPresentingEditingController:(_Bool)arg1;
- (void)isPresentingFullscreen:(_Bool)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


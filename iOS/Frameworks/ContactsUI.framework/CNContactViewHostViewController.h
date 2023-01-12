//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSExtension, NSString;
@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol, NSCopying;

__attribute__((visibility("hidden")))
@interface CNContactViewHostViewController : _UIRemoteViewController
{
    id <CNContactViewHostProtocol> _delegate;
    id <CNContactViewControllerPPTDelegate> _pptDelegate;
    id <NSCopying> _currentRequestIdentifier;
    NSExtension *_extension;
}

+ (_Bool)getViewController:(CDUnknownBlockType)arg1;
+ (id)contextForIdentifier:(id)arg1;
+ (id)contactViewExtension;
- (void).cxx_destruct;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property(nonatomic) __weak id <CNContactViewControllerPPTDelegate> pptDelegate; // @synthesize pptDelegate=_pptDelegate;
@property(nonatomic) __weak id <CNContactViewHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminate;
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
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)performConfirmedCancel;
- (void)toggleEditing;
- (void)editCancel;
- (void)didChangeToShowTitle:(_Bool)arg1;
- (void)didChangeToEditMode:(_Bool)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)protocolContext;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNContactContainerPickerViewControllerDelegate-Protocol.h>

@class CNContactContainerPickerViewController, CNUIContainerContext, NSString;

__attribute__((visibility("hidden")))
@interface CNContactSelectContainersAction <CNContactContainerPickerViewControllerDelegate>
{
    CNContactContainerPickerViewController *_containerPicker;
    CNUIContainerContext *_containerContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNUIContainerContext *containerContext; // @synthesize containerContext=_containerContext;
@property(retain, nonatomic) CNContactContainerPickerViewController *containerPicker; // @synthesize containerPicker=_containerPicker;
- (_Bool)containerPicker:(id)arg1 shouldAllowDeselectionOfContainerWithIdentifier:(id)arg2;
- (void)containerPicker:(id)arg1 didFinishWithPickedContainers:(id)arg2;
- (void)cleanupForDismissal;
- (void)performActionWithContainerContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

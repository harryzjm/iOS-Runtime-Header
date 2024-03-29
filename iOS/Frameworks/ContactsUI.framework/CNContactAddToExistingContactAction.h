//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContact, CNContactPickerViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddToExistingContactAction : CNContactAction
{
    CNContact *_chosenContact;
    CNContactPickerViewController *_contactPicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContactPickerViewController *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) CNContact *chosenContact; // @synthesize chosenContact=_chosenContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)performActionWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


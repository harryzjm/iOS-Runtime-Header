//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>

@class CNPropertyGroupAlertItem, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyAlertCell <CNPickerControllerDelegate>
{
}

+ (_Bool)wantsChevron;
- (void)pickerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
@property(readonly, nonatomic) CNPropertyGroupAlertItem *alertItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


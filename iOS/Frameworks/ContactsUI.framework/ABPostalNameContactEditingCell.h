//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface ABPostalNameContactEditingCell <UITextFieldDelegate>
{
    UITextField *_editingTextField;
}

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (void)textFieldDidChange:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (id)firstResponderItem;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


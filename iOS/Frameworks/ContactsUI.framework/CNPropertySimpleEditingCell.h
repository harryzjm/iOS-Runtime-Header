//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleEditingCell <UITextFieldDelegate>
{
    UITextField *_textField;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)textFieldChanged:(id)arg1;
- (id)firstResponderItem;
- (void)prepareForReuse;
- (void)updateValueWithPropertyItem:(id)arg1;
- (id)variableConstraints;
- (id)constantConstraints;
- (id)valueView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextInputAssistantItem;

@interface PKTextInputWindowFirstResponder : NSObject
{
    _Bool _isVisible;
    _Bool _editableTextInput;
    _Bool _disableInputAssistant;
    _Bool _notesHandwritingResponder;
    long long _textInputSource;
    UITextInputAssistantItem *_inputAssistantItem;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isNotesHandwritingResponder) _Bool notesHandwritingResponder; // @synthesize notesHandwritingResponder=_notesHandwritingResponder;
@property(nonatomic) _Bool disableInputAssistant; // @synthesize disableInputAssistant=_disableInputAssistant;
@property(readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem; // @synthesize inputAssistantItem=_inputAssistantItem;
@property(readonly, nonatomic, getter=isEditableTextInput) _Bool editableTextInput; // @synthesize editableTextInput=_editableTextInput;
@property(readonly, nonatomic) long long textInputSource; // @synthesize textInputSource=_textInputSource;
@property(readonly, nonatomic, getter=isVisible) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic, getter=isEditableTextInputWithPencilTextInputSource) _Bool editableTextInputWithPencilTextInputSource;
@property(readonly, nonatomic, getter=isPencilTextInputSource) _Bool pencilTextInputSource;
- (id)initWithIsVisible:(_Bool)arg1 isEditableTextInput:(_Bool)arg2 textInputSource:(long long)arg3 inputAssistantItem:(id)arg4;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, VSCredentialEntryPicker, VSExpressionEvaluator;
@protocol VSCredentialEntryViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryViewModel
{
    NSArray *_credentialEntryFields;
    VSCredentialEntryPicker *_picker;
    NSURL *_linkURL;
    NSString *_linkTitle;
    NSArray *_buttons;
    NSString *_recentsTitle;
    NSString *_recentsMessage;
    NSString *_additionalMessage;
    id <VSCredentialEntryViewModelDelegate> _delegate;
    VSExpressionEvaluator *_buttonExpressionEvaluator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator; // @synthesize buttonExpressionEvaluator=_buttonExpressionEvaluator;
@property(nonatomic) __weak id <VSCredentialEntryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *additionalMessage; // @synthesize additionalMessage=_additionalMessage;
@property(copy, nonatomic) NSString *recentsMessage; // @synthesize recentsMessage=_recentsMessage;
@property(copy, nonatomic) NSString *recentsTitle; // @synthesize recentsTitle=_recentsTitle;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(copy, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) VSCredentialEntryPicker *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSArray *credentialEntryFields; // @synthesize credentialEntryFields=_credentialEntryFields;
- (void)clearFieldsAfterUsername;
- (void)pickerDidSelectRow:(unsigned long long)arg1;
- (void)buttonTappedAtIndex:(unsigned long long)arg1;
- (void)validateCredentialEntryFields;
- (void)configureWithRequest:(id)arg1;
- (void)_bindField:(id)arg1;
- (void)_unbindField:(id)arg1;

@end


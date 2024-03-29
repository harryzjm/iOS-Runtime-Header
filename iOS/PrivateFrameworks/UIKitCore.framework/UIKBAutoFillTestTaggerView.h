//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, UIBarButtonItem, UIKBAutoFillTestTagRequest, UILabel, UIPickerView, UIToolbar, UIVisualEffectView;
@protocol UIKBAutoFillTestTaggerViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTaggerView : UIView
{
    UIKBAutoFillTestTagRequest *_currentRequest;
    UIPickerView *_pickerView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_nextBarButtoItem;
    UIBarButtonItem *_previousBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIVisualEffectView *_visualEffectView;
    UILabel *_titleLabel;
    id <UIKBAutoFillTestTaggerViewDelegate> _delegate;
    NSArray *_tagRequests;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tagRequests; // @synthesize tagRequests=_tagRequests;
@property(nonatomic) __weak id <UIKBAutoFillTestTaggerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_doneBarButtonAction:(id)arg1;
- (void)_previousBarButtonAction:(id)arg1;
- (void)_nextBarButtonAction:(id)arg1;
- (void)_updateTitle;
- (void)_updateToolbarButtons;
- (void)_performTagRequest:(id)arg1;
- (id)_textFieldTypes;
- (id)_formTypes;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


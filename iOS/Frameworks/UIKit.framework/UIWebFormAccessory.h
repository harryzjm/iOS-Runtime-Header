//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIBarButtonItem, UIBarButtonItemGroup, UISegmentedControl, UIToolbar;
@protocol UIWebFormAccessoryDelegate;

@interface UIWebFormAccessory
{
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_previousItem;
    UIBarButtonItem *_nextItem;
    UIBarButtonItemGroup *_buttonGroupAutoFill;
    UIBarButtonItemGroup *_buttonGroupNavigation;
    _Bool _usesUCB;
    UISegmentedControl *_tab;
    UIBarButtonItem *_autofill;
    UIBarButtonItem *_clearButton;
    id <UIWebFormAccessoryDelegate> delegate;
}

+ (id)toolbarWithItems:(id)arg1;
@property(nonatomic) id <UIWebFormAccessoryDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIBarButtonItem *_clearButton; // @synthesize _clearButton;
@property(retain, nonatomic) UIBarButtonItem *_autofill; // @synthesize _autofill;
@property(retain, nonatomic) UISegmentedControl *_tab; // @synthesize _tab;
@property(nonatomic, getter=isPreviousEnabled) _Bool previousEnabled;
@property(nonatomic, getter=isNextEnabled) _Bool nextEnabled;
- (void)setClearVisible:(_Bool)arg1;
- (void)showAutoFillButton;
- (void)showAutoFillButtonWithTitle:(id)arg1;
- (void)hideAutoFillButton;
- (void)_applyTreatmentToAutoFillLabel;
- (void)_refreshAutofillPresentation;
- (id)_autoFillButton;
- (void)clear:(id)arg1;
- (void)autoFill:(id)arg1;
- (void)_nextTapped:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_tabSegmentedControlDidChange:(id)arg1;
- (void)done:(id)arg1;
- (void)layoutSubviews;
- (void)_updateFrame;
- (void)_orientationDidChange:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithInputAssistantItem:(id)arg1;
- (void)initForUCB:(id)arg1;

@end

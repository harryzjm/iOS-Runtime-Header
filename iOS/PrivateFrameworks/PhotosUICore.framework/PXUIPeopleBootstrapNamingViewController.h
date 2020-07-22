//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXPeopleFlowViewController-Protocol.h>
#import <PhotosUICore/PXPeopleNamePickerViewControllerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PHPerson, PXPeopleBootstrapContext, PXPeopleNamePickerViewController, PXPeopleNameSelection, UIView;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXUIPeopleBootstrapNamingViewController : UIViewController <PXPeopleNamePickerViewControllerDelegate, PXPeopleFlowViewController>
{
    _Bool _textDidChange;
    id _context;
    id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;
    PXPeopleNamePickerViewController *_namePicker;
    PXPeopleNameSelection *_selection;
    UIView *_pickerBackgroundView;
    NSLayoutConstraint *_pickerBackgroundViewHeightConstraint;
}

@property(nonatomic) _Bool textDidChange; // @synthesize textDidChange=_textDidChange;
@property(retain, nonatomic) NSLayoutConstraint *pickerBackgroundViewHeightConstraint; // @synthesize pickerBackgroundViewHeightConstraint=_pickerBackgroundViewHeightConstraint;
@property(retain, nonatomic) UIView *pickerBackgroundView; // @synthesize pickerBackgroundView=_pickerBackgroundView;
@property(retain, nonatomic) PXPeopleNameSelection *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) PXPeopleNamePickerViewController *namePicker; // @synthesize namePicker=_namePicker;
@property(nonatomic) __weak id <PXPeopleFlowViewControllerActionDelegate> actionDelegate; // @synthesize actionDelegate;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)namePickerControllerWillChangeText:(id)arg1;
- (void)namePickerController:(id)arg1 didPickString:(id)arg2;
- (void)namePickerController:(id)arg1 didPickContact:(id)arg2;
- (void)namePickerController:(id)arg1 didPickPerson:(id)arg2;
- (void)willTransitionToNextInFlow;
- (void)_captureStringSelectionIfNeeded;
- (id)_localizedTitleString;
- (void)_updateNavigationBarForCurrentTraitCollection;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property(readonly, nonatomic) PHPerson *person;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize preferredSize;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKClockHardwareInput-Protocol.h>

@class NSString, UIViewController;
@protocol NTKFaceEditViewDelegate, NTKFaceViewCustomEditing;

@interface NTKFaceEditView : UIView <NTKClockHardwareInput>
{
    UIViewController<NTKFaceViewCustomEditing> *_editingContentViewController;
    id <NTKFaceEditViewDelegate> _delegate;
    long long _editMode;
}

@property(nonatomic) long long editMode; // @synthesize editMode=_editMode;
@property(nonatomic) __weak id <NTKFaceEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController<NTKFaceViewCustomEditing> *editingContentViewController; // @synthesize editingContentViewController=_editingContentViewController;
- (void).cxx_destruct;
- (_Bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (_Bool)isTransitioningBetweenEditPages;
- (void)setForEditMode:(long long)arg1 gestureDiscreteScrollHandler:(CDUnknownBlockType)arg2;
- (void)setForEditMode:(long long)arg1 gestureDidScrollHandler:(CDUnknownBlockType)arg2;
- (void)setForEditMode:(long long)arg1 gestureDidStopHandler:(CDUnknownBlockType)arg2;
- (void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4 animated:(_Bool)arg5 detentType:(unsigned long long)arg6;
- (void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4;
- (void)removeAllKeylinesForEditMode:(long long)arg1;
- (void)selectKeylineForKey:(id)arg1 editMode:(long long)arg2;
- (void)setLabelActiveAreaInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setLabelAlignment:(unsigned long long)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setLabelText:(id)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setDeselectedKeylineFrame:(struct CGRect)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setSelectedKeylineFrame:(struct CGRect)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)addKeyline:(id)arg1 forKey:(id)arg2 tappable:(_Bool)arg3 editMode:(long long)arg4;
- (void)setInfoText:(id)arg1 forEditMode:(long long)arg2;
- (void)setBackgroundFillAlpha:(double)arg1;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (void)willDeactivate;
- (void)activate;
- (void)willActivate;
- (struct CGPoint)pageOffsetFromCenter:(long long)arg1;
- (void)setEditingContentViewController:(id)arg1 forEditMode:(long long)arg2;
- (id)initWithEditModes:(id)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


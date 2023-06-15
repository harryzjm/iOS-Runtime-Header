//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAShapeLayer, CNPhotoPickerHeaderViewTextField, CNPhotoPickerProviderItem, CNVisualIdentity, CNVisualIdentityAvatarViewController, NSArray, NSString, UIButton, UIGestureRecognizer;
@protocol CNPhotoPickerHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerHeaderView : UIView
{
    id <CNPhotoPickerHeaderViewDelegate> _delegate;
    CNPhotoPickerProviderItem *_placeholderProviderItem;
    CNVisualIdentity *_visualIdentity;
    NSArray *_subviewsConstraints;
    CNVisualIdentityAvatarViewController *_avatarViewController;
    UIButton *_clearAvatarImageButton;
    UIView *_clearAvatarImageButtonBackground;
    CAShapeLayer *_clearAvatarImageButtonClippingLayer;
    CNPhotoPickerHeaderViewTextField *_identityNameTextField;
    UIButton *_clearIdentityNameButton;
    UIGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIButton *clearIdentityNameButton; // @synthesize clearIdentityNameButton=_clearIdentityNameButton;
@property(retain, nonatomic) CNPhotoPickerHeaderViewTextField *identityNameTextField; // @synthesize identityNameTextField=_identityNameTextField;
@property(retain, nonatomic) CAShapeLayer *clearAvatarImageButtonClippingLayer; // @synthesize clearAvatarImageButtonClippingLayer=_clearAvatarImageButtonClippingLayer;
@property(retain, nonatomic) UIView *clearAvatarImageButtonBackground; // @synthesize clearAvatarImageButtonBackground=_clearAvatarImageButtonBackground;
@property(retain, nonatomic) UIButton *clearAvatarImageButton; // @synthesize clearAvatarImageButton=_clearAvatarImageButton;
@property(retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain, nonatomic) NSArray *subviewsConstraints; // @synthesize subviewsConstraints=_subviewsConstraints;
@property(retain, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) CNPhotoPickerProviderItem *placeholderProviderItem; // @synthesize placeholderProviderItem=_placeholderProviderItem;
@property(nonatomic) __weak id <CNPhotoPickerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)updateIdentityNameTextFieldPlaceholderWithText:(id)arg1;
- (void)didTapClearIdentityNameButton;
- (void)didTapHeaderView;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didTapClearAvatarImageButton;
- (void)setupClearAvatarImageButton;
- (void)setClearAvatarImageButtonHidden:(_Bool)arg1;
- (void)updateIdentityNameTextFieldWithIdentity:(id)arg1;
- (void)updateImageViewWithIdentity:(id)arg1;
- (struct CGSize)sizeOfPrimaryAvatar;
- (void)updatePhotoViewWithUpdatedIdentity:(id)arg1;
- (void)didMoveToWindow;
- (void)updateConstraints;
- (void)setupIdentityNameClearButtonIfNecessary;
- (void)updateIdentityNameTextFieldMaxWidth;
- (void)setupIdentityNameTextFieldAndClearButton;
- (void)setupHeaderViewWithPhotoView:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)setupDragAndDrop;
- (void)layoutSubviews;
- (id)initWithVisualIdentity:(id)arg1 avatarViewController:(id)arg2;
- (id)initWithVisualIdentity:(id)arg1;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


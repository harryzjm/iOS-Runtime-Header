//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, NSRegularExpression, NSString, SUUISettingValueStore, UIImage;

__attribute__((visibility("hidden")))
@interface SUUIEditProfileSettingDescription
{
    CDUnknownBlockType _commitBlock;
    _Bool _editing;
    NSOperationQueue *_operationQueue;
    NSRegularExpression *_handleValidation;
    _Bool _suggestedHandlesDisplayed;
    SUUISettingValueStore *_valueStore;
    _Bool _handleValid;
}

+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (_Bool)allowsEdit;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHandleValid) _Bool handleValid; // @synthesize handleValid=_handleValid;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (id)_valueStore;
- (_Bool)_validateName:(id)arg1;
- (_Bool)_validateHandle:(id)arg1;
- (void)_updateValidity;
- (void)_uploadProfileImage:(id)arg1;
- (void)_updateAccountInfo;
- (void)_reloadData;
- (void)_leaveEditMode;
- (void)_hideFooter;
- (void)_hideSuggestedHandles;
- (void)_finalizeCommitWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_fetchSuggestedHandles;
- (void)_fetchProfilePhoto;
- (void)_fetchAccountInfo;
- (void)_enterEditMode;
- (void)_displaySuggestedHandles:(id)arg1;
- (void)_displayRules:(_Bool)arg1;
- (void)_displayFooter:(id)arg1;
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;
- (void)suggestedHandlesSettingsHeaderFooterDescription:(id)arg1 didSelectSuggestedHandle:(id)arg2;
- (void)discardEdits;
- (_Bool)commitEdits:(CDUnknownBlockType)arg1;
- (void)cancelEdits;
- (void)beginEditing;
- (_Bool)allowsSelection;
- (void)profileImagePicker:(id)arg1 didPickProfileImage:(id)arg2 withCropRect:(id)arg3;
- (void)profileImagePickerDidCancel:(id)arg1;
- (void)setPhoto:(id)arg1 withCropRect:(struct CGRect)arg2;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *handle;
@property(readonly, copy, nonatomic) UIImage *photo;
- (void)chooseNewProfilePhoto;
- (void)dealloc;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


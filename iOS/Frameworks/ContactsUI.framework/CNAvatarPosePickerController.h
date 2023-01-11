//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerVariantListControllerDelegate-Protocol.h>

@class CNPhotoPickerAnimojiProviderItem, CNPhotoPickerVariantListController, CNPhotoPickerVariantsManager;
@protocol CNAvatarPosePickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarPosePickerController : NSObject <CNPhotoPickerVariantListControllerDelegate>
{
    id <CNAvatarPosePickerControllerDelegate> _delegate;
    long long _numberOfItemsPerRow;
    CNPhotoPickerVariantsManager *_variantsManager;
    CNPhotoPickerAnimojiProviderItem *_originalProviderItem;
    CNPhotoPickerVariantListController *_posePickerController;
    struct CGSize _desiredContentSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNPhotoPickerVariantListController *posePickerController; // @synthesize posePickerController=_posePickerController;
@property(retain, nonatomic) CNPhotoPickerAnimojiProviderItem *originalProviderItem; // @synthesize originalProviderItem=_originalProviderItem;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(nonatomic) struct CGSize desiredContentSize; // @synthesize desiredContentSize=_desiredContentSize;
@property(nonatomic) long long numberOfItemsPerRow; // @synthesize numberOfItemsPerRow=_numberOfItemsPerRow;
@property(nonatomic) __weak id <CNAvatarPosePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (id)posePickerViewController;
- (id)initWithAnimojiProviderItem:(id)arg1 variantsManager:(id)arg2;
- (id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2;

@end

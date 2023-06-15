//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNContact, NSString;
@protocol CNSNaPSuggestionsGalleryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNSNaPSuggestionsGalleryViewController : UIViewController
{
    _Bool _isEditingSNaP;
    _Bool _isOnboarding;
    long long _mode;
    id <CNSNaPSuggestionsGalleryViewControllerDelegate> _delegate;
    CNContact *_contact;
    NSString *_photoLibraryAssetID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *photoLibraryAssetID; // @synthesize photoLibraryAssetID=_photoLibraryAssetID;
@property(nonatomic) _Bool isOnboarding; // @synthesize isOnboarding=_isOnboarding;
@property(nonatomic) _Bool isEditingSNaP; // @synthesize isEditingSNaP=_isEditingSNaP;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <CNSNaPSuggestionsGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)suggestionsGalleryDidCancel;
- (void)suggestionsGalleryDidFinishWithPosterConfiguration:(id)arg1 posterType:(id)arg2 withGivenName:(id)arg3 familyName:(id)arg4;
- (void)suggestionsGalleryDidSelectAvatarSourceType:(id)arg1 withGivenName:(id)arg2 familyName:(id)arg3;
- (long long)sourceTypeFromString:(id)arg1;
- (void)skipStep;
- (void)viewDidLoad;
- (id)initWithMode:(long long)arg1 contact:(id)arg2 isEditingSNaP:(_Bool)arg3 isOnboarding:(_Bool)arg4 photoLibraryAssetID:(id)arg5;
- (id)initWithMode:(long long)arg1 contact:(id)arg2 isEditingSNaP:(_Bool)arg3 isOnboarding:(_Bool)arg4;

@end


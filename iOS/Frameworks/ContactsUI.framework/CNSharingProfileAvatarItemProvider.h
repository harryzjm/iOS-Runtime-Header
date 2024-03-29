//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer, CNContact, CNPhotoPickerColorVariant, CNPhotoPickerVariantsManager, CNSharingProfileAvatarItem, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, NSArray, NSData, PRMonogramColor;
@protocol AVTAvatarRecord;

__attribute__((visibility("hidden")))
@interface CNSharingProfileAvatarItemProvider : NSObject
{
    _Bool _shouldIncludeSilhouette;
    _Bool _shouldIncludeAnimoji;
    _Bool _shouldIncludePhoto;
    _Bool _shouldIncludeMonogram;
    _Bool _contactIsFromFullPhotoPicker;
    _Bool _useRTL;
    CNSharingProfileAvatarItem *_silhouetteItem;
    CNSharingProfileAvatarItem *_animojiItem;
    CNSharingProfileAvatarItem *_photoItem;
    CNSharingProfileAvatarItem *_monogramItem;
    CNSharingProfileAvatarItemProviderConfiguration *_configuration;
    CNSharingProfileLogger *_logger;
    CNContact *_contact;
    id <AVTAvatarRecord> _avatarRecord;
    CNAvatarImageRenderer *_renderer;
    CNPhotoPickerVariantsManager *_variantsManager;
    NSArray *_items;
    CNSharingProfileAvatarItem *_previousAnimojiItem;
    CNSharingProfileAvatarItem *_previousPhotoItem;
    CNPhotoPickerColorVariant *_animojiColor;
}

+ (id)compositeImageForImage:(id)arg1 backgroundImage:(id)arg2;
+ (id)monogramImageItemWithContact:(id)arg1 monogramColor:(id)arg2 renderer:(id)arg3 RTL:(_Bool)arg4;
+ (id)contactImageItemWithContact:(id)arg1 renderer:(id)arg2 logger:(id)arg3 type:(long long)arg4;
+ (id)silhouetteImageItemWithRenderer:(id)arg1;
+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) CNPhotoPickerColorVariant *animojiColor; // @synthesize animojiColor=_animojiColor;
@property(nonatomic) _Bool useRTL; // @synthesize useRTL=_useRTL;
@property(retain, nonatomic) CNSharingProfileAvatarItem *previousPhotoItem; // @synthesize previousPhotoItem=_previousPhotoItem;
@property(retain, nonatomic) CNSharingProfileAvatarItem *previousAnimojiItem; // @synthesize previousAnimojiItem=_previousAnimojiItem;
@property(nonatomic) _Bool contactIsFromFullPhotoPicker; // @synthesize contactIsFromFullPhotoPicker=_contactIsFromFullPhotoPicker;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) CNAvatarImageRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CNSharingProfileAvatarItem *monogramItem; // @synthesize monogramItem=_monogramItem;
@property(retain, nonatomic) CNSharingProfileAvatarItem *photoItem; // @synthesize photoItem=_photoItem;
@property(retain, nonatomic) CNSharingProfileAvatarItem *animojiItem; // @synthesize animojiItem=_animojiItem;
@property(retain, nonatomic) CNSharingProfileAvatarItem *silhouetteItem; // @synthesize silhouetteItem=_silhouetteItem;
@property(nonatomic) _Bool shouldIncludeMonogram; // @synthesize shouldIncludeMonogram=_shouldIncludeMonogram;
@property(nonatomic) _Bool shouldIncludePhoto; // @synthesize shouldIncludePhoto=_shouldIncludePhoto;
@property(nonatomic) _Bool shouldIncludeAnimoji; // @synthesize shouldIncludeAnimoji=_shouldIncludeAnimoji;
@property(nonatomic) _Bool shouldIncludeSilhouette; // @synthesize shouldIncludeSilhouette=_shouldIncludeSilhouette;
- (void)clearCachedItems;
@property(retain, nonatomic) NSData *memojiMetadata;
- (id)animojColor;
@property(retain, nonatomic) PRMonogramColor *monogramColor;
- (void)updateWithContact:(id)arg1 fromFullPhotoPicker:(_Bool)arg2;
- (void)buildItems;
- (_Bool)contactHasImageOfPhotoType:(id)arg1;
@property(readonly, nonatomic) NSArray *avatarItems;
- (void)pickRandomColors;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;

@end


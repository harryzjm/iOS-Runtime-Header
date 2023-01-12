//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKPlayer.h>

@class CNContact;

@interface GKPlayer (UIPrivate)
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;
+ (id)monogramQueue;
+ (long long)sizeForPhotoSize:(long long)arg1;
- (void)loadPlayerContactForAvatarControllerWithImageSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)mutableContact;
- (void)clearInMemoryCachedAvatars;
- (void)_playerAvatarWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)monogramImageWithPhotoSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)shouldRandomizeDefaultMonogramColor;
- (void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)avatarImageRenderer;
- (id)renderingScopeForPhotoSize:(long long)arg1;
- (id)renderingScopeForPhotoSize:(long long)arg1 colorIndex:(long long)arg2;
- (id)placeholderImageWithPhotoSize:(long long)arg1;
- (id)stringForMonogram;
- (id)displayNameForMonogram;
- (id)monogramPersonNameComponents;
- (id)photoURLForSize:(long long)arg1;
- (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2;
- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) CNContact *contact;
- (id)initWithContact:(id)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AAUIProfilePictureStore;

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsButton
{
    AAUIProfilePictureStore *_profilePictureStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AAUIProfilePictureStore *profilePictureStore; // @synthesize profilePictureStore=_profilePictureStore;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateAccountButtonVisibility:(_Bool)arg1;
- (void)_updateAccountImage;
- (void)_setupAccountImageView;
- (void)_setup;
- (id)initWithButtonLayout:(id)arg1 interfaceStyle:(long long)arg2;

@end

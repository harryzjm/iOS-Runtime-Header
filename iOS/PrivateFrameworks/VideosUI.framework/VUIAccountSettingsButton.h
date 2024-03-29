//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsButton
{
    _Bool _hideAndDisable;
    struct CGSize _preferedContentSize;
    struct CGSize _contentSize;
}

@property(nonatomic) _Bool hideAndDisable; // @synthesize hideAndDisable=_hideAndDisable;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGSize preferedContentSize; // @synthesize preferedContentSize=_preferedContentSize;
- (double)accountSettingsButtonDimension;
- (void)_profileImageDidChange:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateImageViewFrame;
- (void)_updateAccessibilityFrame;
- (void)_updateAccountButtonVisibility;
- (void)_updateAccountImage;
- (void)_setupAccountImageView;
- (void)_setup;
- (void)setiPhoneSize:(_Bool)arg1;
- (void)hideAndDisable:(_Bool)arg1;
- (id)largeContentImage;
- (void)vui_traitCollectionDidChange:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)calculateContentSize;
- (void)configureWithLayoutProperties;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;

@end


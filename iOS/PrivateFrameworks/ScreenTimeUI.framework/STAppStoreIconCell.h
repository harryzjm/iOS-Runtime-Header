//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UIImageView, UILabel;

@interface STAppStoreIconCell
{
    NSString *_bundleIdentifier;
    UIImageView *_appIconView;
    UILabel *_appNameLabel;
    UIButton *_viewButton;
}

@property(readonly, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;
@property(readonly, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(readonly, nonatomic) UIImageView *appIconView; // @synthesize appIconView=_appIconView;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_registerForAppInfoCacheNotifications;
- (void)_didFetchIcon:(id)arg1;
- (void)_registerForIconCacheNotifications;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)viewAppInStore:(id)arg1;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end


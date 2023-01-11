//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFUserHandle, HULayoutContainerView, HUTitleDescriptionContentView, NSString, UIImageView;
@protocol CNAvatarViewController;

@interface HUPresenceUserCell : UITableViewCell <HUDisableableCellProtocol>
{
    _Bool _disabled;
    _Bool _checked;
    _Bool _locationUnavailable;
    NSString *_userName;
    NSString *_deviceName;
    HFUserHandle *_userHandle;
    UIImageView *_checkmarkImageView;
    HUTitleDescriptionContentView *_titleDescriptionView;
    id <CNAvatarViewController> _avatarViewController;
    HULayoutContainerView *_avatarContainerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HULayoutContainerView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(readonly, nonatomic) id <CNAvatarViewController> avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(readonly, nonatomic) HUTitleDescriptionContentView *titleDescriptionView; // @synthesize titleDescriptionView=_titleDescriptionView;
@property(readonly, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(nonatomic, getter=isLocationUnavailable) _Bool locationUnavailable; // @synthesize locationUnavailable=_locationUnavailable;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) HFUserHandle *userHandle; // @synthesize userHandle=_userHandle;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (void)_updateCustomSeparatorInset;
- (void)_setupConstraints;
- (void)_updateDescriptionText;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNAvatarViewController, CNContact, NSString, PXRoundImageView, UIButton, UIColor, UIImage, UILabel, UIView;

@interface PXCMMComposeRecipientTableViewCell : UITableViewCell
{
    UIView *_avatarView;
    UIView *_contactAvatarView;
    CNAvatarViewController *_contactAvatarViewController;
    PXRoundImageView *_customAvatarImageView;
    UILabel *_displayNameLabel;
    UILabel *_transportLabel;
    UIButton *_accessoryButtonView;
    _Bool _emphasizeDisplayName;
    _Bool _checked;
    int _currentRequestID;
    NSString *_displayName;
    NSString *_transport;
    UIImage *_faceImage;
    UIColor *_textColor;
    CNContact *_contact;
    double _inset;
    UIView *_popoverSourceView;
    struct CGSize _faceImageViewSize;
}

@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) int currentRequestID; // @synthesize currentRequestID=_currentRequestID;
@property(retain, nonatomic) UIView *popoverSourceView; // @synthesize popoverSourceView=_popoverSourceView;
@property(nonatomic) struct CGSize faceImageViewSize; // @synthesize faceImageViewSize=_faceImageViewSize;
@property(nonatomic) double inset; // @synthesize inset=_inset;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(copy, nonatomic) NSString *transport; // @synthesize transport=_transport;
@property(nonatomic) _Bool emphasizeDisplayName; // @synthesize emphasizeDisplayName=_emphasizeDisplayName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)_updateAccessoryImageView;
- (void)_updateTransportLabel;
- (void)_updateDisplayNameLabel;
- (void)_updateAvatarView;
- (void)_updateLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


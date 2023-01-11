//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAvatarView, CKLabel, CNContact, NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol CKDetailsContactsTableViewCellDelegate;

@interface CKDetailsContactsTableViewCell
{
    _Bool _showsLocation;
    _Bool _showMessageButton;
    _Bool _showPhoneButton;
    _Bool _showFaceTimeVideoButton;
    _Bool _showInfoButton;
    _Bool _showScreenSharingButton;
    CKAvatarView *_contactAvatarView;
    id <CKDetailsContactsTableViewCellDelegate> _delegate;
    CKLabel *_nameLabel;
    UILabel *_locationLabel;
    NSString *_entityName;
    NSString *_locationString;
    UIButton *_messageButton;
    UIButton *_phoneButton;
    UIButton *_facetimeVideoButton;
    UIButton *_screenSharingButton;
    CNContact *_contact;
    UIActivityIndicatorView *_updatingParticipantSpinner;
}

+ (double)marginWidth;
+ (double)preferredHeight;
+ (double)estimatedHeight;
+ (id)reuseIdentifier;
+ (Class)cellClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *updatingParticipantSpinner; // @synthesize updatingParticipantSpinner=_updatingParticipantSpinner;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIButton *screenSharingButton; // @synthesize screenSharingButton=_screenSharingButton;
@property(retain, nonatomic) UIButton *facetimeVideoButton; // @synthesize facetimeVideoButton=_facetimeVideoButton;
@property(retain, nonatomic) UIButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain, nonatomic) UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(nonatomic) _Bool showScreenSharingButton; // @synthesize showScreenSharingButton=_showScreenSharingButton;
@property(nonatomic) _Bool showInfoButton; // @synthesize showInfoButton=_showInfoButton;
@property(nonatomic) _Bool showFaceTimeVideoButton; // @synthesize showFaceTimeVideoButton=_showFaceTimeVideoButton;
@property(nonatomic) _Bool showPhoneButton; // @synthesize showPhoneButton=_showPhoneButton;
@property(nonatomic) _Bool showMessageButton; // @synthesize showMessageButton=_showMessageButton;
@property(nonatomic) _Bool showsLocation; // @synthesize showsLocation=_showsLocation;
@property(copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) CKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <CKDetailsContactsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKAvatarView *contactAvatarView; // @synthesize contactAvatarView=_contactAvatarView;
- (void)didHoverOverCell:(id)arg1;
- (void)_configureButtonLayer:(id)arg1;
- (void)_hideAllButtons;
- (void)_updateVisibleButtons;
- (void)_handleCommunicationAction:(id)arg1;
- (void)_dismissUpdatingParticipantSpinner;
- (void)_showUpdatingParticipantSpinner;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)_imageNamed:(id)arg1;
- (id)_ckSymbolImageNamed:(id)arg1 preferredContentSizeCategory:(id)arg2 preferredFontTextStyle:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

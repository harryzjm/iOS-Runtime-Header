//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID, UIButton, UIImageView, UILabel;

@interface CKTUConversationBalloonView
{
    _Bool _animating;
    NSUUID *_tuConversationUUID;
    unsigned long long _state;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UILabel *_durationLabel;
    UIButton *_joinButton;
}

+ (id)facetimeImageForSize:(struct CGSize)arg1;
+ (struct CGSize)facetimeIconSize;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSUUID *tuConversationUUID; // @synthesize tuConversationUUID=_tuConversationUUID;
- (void).cxx_destruct;
- (void)_joinButtonTapped:(id)arg1;
- (id)_currentCall;
- (void)_updateStatusLabelForDuration;
- (id)_joinStateStatusString;
- (void)configureForCurrentState;
- (id)tuConversation;
- (_Bool)wantsGradient;
- (BOOL)color;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForTUConversationChatItem:(id)arg1;

@end

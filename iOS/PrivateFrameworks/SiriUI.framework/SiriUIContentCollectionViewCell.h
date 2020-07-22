//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSMutableArray, SiriUIKeyline, UIColor, UIImageView, UILabel, UIView;

@interface SiriUIContentCollectionViewCell
{
    SiriUIKeyline *_keyline;
    UIImageView *_chevronView;
    _Bool _hasSetUpSubviewConstraints;
    _Bool _hasSetupStaticSubviewConstraints;
    NSLayoutConstraint *leftChevronWidthConstraint;
    NSLayoutConstraint *rightChevronWidthConstraint;
    NSMutableArray *_subviewConstraints;
    _Bool _hasChevron;
    long long _verticalAlignment;
    UIView *_accessoryView;
    UILabel *_textLabel;
    UIView *_customView;
    long long _keylineType;
    struct UIOffset _textOffset;
    struct UIOffset _accessoryOffset;
    struct UIOffset _chevronOffset;
    struct UIEdgeInsets _textAndAccessoryInsets;
    struct UIEdgeInsets _customViewEdgeInsets;
}

+ (id)reuseIdentifier;
+ (_Bool)chevronBlendEffectEnabled;
+ (double)chevronTrailingMargin;
+ (struct UIEdgeInsets)defaultInsets;
@property(nonatomic) _Bool hasChevron; // @synthesize hasChevron=_hasChevron;
@property(nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
@property(readonly, nonatomic) SiriUIKeyline *keyline; // @synthesize keyline=_keyline;
@property(nonatomic) struct UIOffset chevronOffset; // @synthesize chevronOffset=_chevronOffset;
@property(nonatomic) struct UIOffset accessoryOffset; // @synthesize accessoryOffset=_accessoryOffset;
@property(nonatomic) struct UIOffset textOffset; // @synthesize textOffset=_textOffset;
@property(nonatomic) struct UIEdgeInsets customViewEdgeInsets; // @synthesize customViewEdgeInsets=_customViewEdgeInsets;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) struct UIEdgeInsets textAndAccessoryInsets; // @synthesize textAndAccessoryInsets=_textAndAccessoryInsets;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setNeedsUpdateSubviewConstraints;
@property(readonly, nonatomic) double chevronTrailingMargin;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)_updateSubviewConstraints;
@property(retain, nonatomic) UIColor *keylineCustomBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

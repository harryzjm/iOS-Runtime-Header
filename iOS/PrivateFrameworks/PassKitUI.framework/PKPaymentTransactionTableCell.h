//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNAvatarView, NSString, UIColor, UIFont, UILabel;

@interface PKPaymentTransactionTableCell
{
    _Bool _sizeLabels;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UILabel *_transactionValueLabel;
    _Bool _showsAvatarView;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tertiaryColor;
    UIColor *_transactionValueColor;
    UIFont *_primaryFont;
    UIFont *_transactionValueFont;
    NSString *_primaryString;
    NSString *_secondaryString;
    NSString *_tertiaryString;
    NSString *_transactionValueString;
    NSString *_transactionIdentifier;
    CNAvatarView *_avatarView;
}

+ (id)defaultTransactionValueFont;
+ (id)tertiaryLabelFont;
+ (id)secondaryLabelFont;
+ (id)defaultPrimaryLabelFont;
+ (double)rowHeightWithTransactionValueFont:(id)arg1;
@property(readonly, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool showsAvatarView; // @synthesize showsAvatarView=_showsAvatarView;
@property(retain, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain, nonatomic) NSString *transactionValueString; // @synthesize transactionValueString=_transactionValueString;
@property(retain, nonatomic) NSString *tertiaryString; // @synthesize tertiaryString=_tertiaryString;
@property(retain, nonatomic) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(retain, nonatomic) NSString *primaryString; // @synthesize primaryString=_primaryString;
@property(retain, nonatomic) UIFont *transactionValueFont; // @synthesize transactionValueFont=_transactionValueFont;
@property(retain, nonatomic) UIFont *primaryFont; // @synthesize primaryFont=_primaryFont;
@property(retain, nonatomic) UIColor *transactionValueColor; // @synthesize transactionValueColor=_transactionValueColor;
@property(retain, nonatomic) UIColor *tertiaryColor; // @synthesize tertiaryColor=_tertiaryColor;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateAvatarView;
- (id)defaultTransactionValueColor;
- (id)defaultTertiaryColor;
- (id)defaultSecondaryColor;
- (id)defaultPrimaryColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

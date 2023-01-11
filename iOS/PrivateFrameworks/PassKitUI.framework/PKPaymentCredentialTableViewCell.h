//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel;

@interface PKPaymentCredentialTableViewCell
{
    _Bool _showingPlaceholder;
    _Bool _snapshotImageHasBorder;
    UIImageView *_snapshotImageView;
    UILabel *_credentialDetailLabel;
}

+ (struct CGSize)defaultImageViewSize;
- (void).cxx_destruct;
@property(nonatomic) _Bool snapshotImageHasBorder; // @synthesize snapshotImageHasBorder=_snapshotImageHasBorder;
@property(nonatomic) _Bool showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
@property(readonly, nonatomic) UILabel *credentialDetailLabel; // @synthesize credentialDetailLabel=_credentialDetailLabel;
@property(readonly, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
- (void)prepareForReuse;
- (id)detailTextLabelColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

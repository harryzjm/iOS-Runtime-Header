//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKContinuousImageView, UIImage, UILabel;

@interface PKPaymentTransactionLocationTableViewCell
{
    NSString *_postalAddressTitle;
    NSString *_postalAddressString;
    UIImage *_mapSnapshotImage;
    UIImage *_mapPlaceholderImage;
    UILabel *_titleLabel;
    UILabel *_postalAddressLabel;
    PKContinuousImageView *_mapSnapshotImageView;
    struct CGSize _snapshotSize;
}

@property(retain, nonatomic) PKContinuousImageView *mapSnapshotImageView; // @synthesize mapSnapshotImageView=_mapSnapshotImageView;
@property(retain, nonatomic) UILabel *postalAddressLabel; // @synthesize postalAddressLabel=_postalAddressLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize snapshotSize; // @synthesize snapshotSize=_snapshotSize;
@property(retain, nonatomic) UIImage *mapPlaceholderImage; // @synthesize mapPlaceholderImage=_mapPlaceholderImage;
@property(retain, nonatomic) UIImage *mapSnapshotImage; // @synthesize mapSnapshotImage=_mapSnapshotImage;
@property(retain, nonatomic) NSString *postalAddressString; // @synthesize postalAddressString=_postalAddressString;
@property(retain, nonatomic) NSString *postalAddressTitle; // @synthesize postalAddressTitle=_postalAddressTitle;
- (void).cxx_destruct;
- (void)_updateImageViewBoundsOrigin;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class PHAsset, UIImageView;

__attribute__((visibility("hidden")))
@interface _PUPhotoImportHistoryCell : UICollectionViewCell
{
    int _currentImageRequestToken;
    UIImageView *_imageView;
    PHAsset *_asset;
}

- (void).cxx_destruct;
@property(nonatomic) int currentImageRequestToken; // @synthesize currentImageRequestToken=_currentImageRequestToken;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)_updateBorderColor;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


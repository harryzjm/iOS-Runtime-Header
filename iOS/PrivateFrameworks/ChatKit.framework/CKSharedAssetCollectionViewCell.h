//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

@interface CKSharedAssetCollectionViewCell : UICollectionViewCell
{
    UIView *_previewView;
    UILabel *_previewTitleLabel;
    NSString *_name;
    NSString *_url;
    UIView *_previewTitleContainerView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *previewTitleContainerView; // @synthesize previewTitleContainerView=_previewTitleContainerView;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UILabel *previewTitleLabel; // @synthesize previewTitleLabel=_previewTitleLabel;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)formattedTitleFromPreviewTitle:(id)arg1;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <PDFKit/PDFKitPlatformThumbnailItem-Protocol.h>

@class CALayer, PDFPage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PDFThumbnailItem_ios : UICollectionReusableView <PDFKitPlatformThumbnailItem>
{
    UIImageView *_imageView;
    UILabel *_textField;
    _Bool _horizontalModeStyle;
    PDFPage *_page;
    CALayer *_borderEffect;
}

@property(retain) UILabel *textField; // @synthesize textField=_textField;
@property(retain) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(nonatomic) __weak CALayer *borderEffect; // @synthesize borderEffect=_borderEffect;
@property(nonatomic) __weak PDFPage *page; // @synthesize page=_page;
@property(nonatomic) _Bool horizontalModeStyle;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


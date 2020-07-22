//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSBundle, NSString, NSURL, UIImageView;

@interface SiriUIDownloadableImageView : UIView
{
    UIImageView *_imageView;
    NSURL *_imageURL;
    _Bool _showingPlaceHolderImage;
    NSString *_placeHolderImageName;
    NSBundle *_placeHolderImageBundle;
    double _placeHolderVerticalOffset;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setImage:(id)arg1 isPlaceHolder:(_Bool)arg2;
- (void)setImageURL:(id)arg1;
- (void)showPlaceHolderImage;
- (void)setPlaceHolderVerticalOffset:(double)arg1;
- (void)setPlaceHolderImageName:(id)arg1;
- (id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DCIMServices/CAMBadgeView.h>

@class NSString, UIImage;

@interface CAMFlashBadge : CAMBadgeView
{
    UIImage *__contentImage;
    NSString *__contentSizeCategory;
}

@property(copy, nonatomic) NSString *_contentSizeCategory; // @synthesize _contentSizeCategory=__contentSizeCategory;
@property(retain, nonatomic) UIImage *_contentImage; // @synthesize _contentImage=__contentImage;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)_maskImage;
- (struct UIEdgeInsets)_imageInsets;
- (struct CGSize)_imageSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


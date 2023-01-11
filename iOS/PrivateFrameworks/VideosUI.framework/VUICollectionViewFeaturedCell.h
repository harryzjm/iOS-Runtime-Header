//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class IKViewElement, TVImageLayout, VUICollectionViewFeaturedView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewFeaturedCell : UICollectionViewCell
{
    VUICollectionViewFeaturedView *_featuredView;
    TVImageLayout *_imageLayout;
    IKViewElement *_viewElement;
}

+ (id)featuredCellWithElement:(id)arg1 existingCell:(id)arg2;
+ (struct CGSize)lockupSizeForElement:(id)arg1;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(retain, nonatomic) VUICollectionViewFeaturedView *featuredView; // @synthesize featuredView=_featuredView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

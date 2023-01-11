//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateView : UIView
{
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    NSArray *_viewsAbove;
    UICollectionView *_collectionView;
    NSArray *_viewsBelow;
    struct UIEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *viewsBelow; // @synthesize viewsBelow=_viewsBelow;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *viewsAbove; // @synthesize viewsAbove=_viewsAbove;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)layoutSubviews;
- (void)setBgImage:(id)arg1;

@end

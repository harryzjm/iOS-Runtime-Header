//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface SKUISimpleCollectionViewCell : UICollectionViewCell
{
    UIView *_contentChildView;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIView *contentChildView; // @synthesize contentChildView=_contentChildView;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;

@end

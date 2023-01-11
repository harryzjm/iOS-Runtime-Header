//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSNumber, NSString, VUIButton, VUISeparatorView;
@protocol VUILibraryEpisodeFooterCellDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeFooterCell : UICollectionViewCell
{
    NSString *_title;
    NSNumber *_storeID;
    id <VUILibraryEpisodeFooterCellDelegate> _delegate;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
    VUIButton *_titleButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) VUISeparatorView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic) __weak id <VUILibraryEpisodeFooterCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *storeID; // @synthesize storeID=_storeID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

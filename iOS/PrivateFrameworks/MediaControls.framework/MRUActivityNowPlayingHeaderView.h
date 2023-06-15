//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUNowPlayingLabelView, MRUVisualStylingProvider;

__attribute__((visibility("hidden")))
@interface MRUActivityNowPlayingHeaderView : UIView
{
    MRUNowPlayingLabelView *_labelView;
    MRUVisualStylingProvider *_stylingProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) MRUNowPlayingLabelView *labelView; // @synthesize labelView=_labelView;
- (void)updateVisibilty;
@property(readonly, nonatomic) double labelInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end


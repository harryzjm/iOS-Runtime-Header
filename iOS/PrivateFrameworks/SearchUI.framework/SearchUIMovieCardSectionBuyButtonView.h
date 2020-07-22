//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFPunchout, SKUIItemOfferButton, SearchUIMovieCardSectionView, SearchUIVibrantLabel;

@interface SearchUIMovieCardSectionBuyButtonView
{
    SearchUIVibrantLabel *_subtitleLabel;
    SKUIItemOfferButton *_button;
    SFPunchout *_punchout;
    SearchUIMovieCardSectionView *_cardSectionView;
}

@property __weak SearchUIMovieCardSectionView *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
@property(retain) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(retain) SKUIItemOfferButton *button; // @synthesize button=_button;
@property(retain) SearchUIVibrantLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)buttonPressed;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 punchout:(id)arg3 cardSectionView:(id)arg4;

@end

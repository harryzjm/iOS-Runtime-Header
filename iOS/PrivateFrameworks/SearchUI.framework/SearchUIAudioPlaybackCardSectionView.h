//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>
#import <SearchUI/SearchUICardSectionViewUpdatable-Protocol.h>
#import <SearchUI/SearchUISelectableTextViewDelegate-Protocol.h>

@class NSString, SKUIPlayButton, TLKStackView;

@interface SearchUIAudioPlaybackCardSectionView <NUIContainerStackViewDelegate, SearchUISelectableTextViewDelegate, SearchUICardSectionViewUpdatable>
{
    SKUIPlayButton *_playButton;
}

@property(retain, nonatomic) SKUIPlayButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)selectableTextView:(id)arg1 presentViewController:(id)arg2;
- (void)_updateStateFromCardSection:(id)arg1 animated:(_Bool)arg2;
- (void)_playButtonPressed:(id)arg1;
- (void)updateStateFromCardSection:(id)arg1;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

// Remaining properties
@property(retain) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


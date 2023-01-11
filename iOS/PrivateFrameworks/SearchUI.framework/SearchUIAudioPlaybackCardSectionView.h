//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>
#import <SearchUI/SearchUICardSectionViewUpdatable-Protocol.h>
#import <SearchUI/SearchUISelectableTextViewDelegate-Protocol.h>

@class NSString, SearchUIButton, SearchUILabel, SearchUISelectableTextView, TLKStackView;

@interface SearchUIAudioPlaybackCardSectionView <NUIContainerViewDelegate, SearchUISelectableTextViewDelegate, SearchUICardSectionViewUpdatable>
{
    SearchUILabel *_detailTextLabel;
    SearchUISelectableTextView *_titleTextView;
    SearchUISelectableTextView *_subtitleView;
    SearchUIButton *_playButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SearchUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SearchUISelectableTextView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) SearchUISelectableTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) SearchUILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
- (void)selectableTextView:(id)arg1 presentViewController:(id)arg2;
- (void)_updateStateFromCardSection:(id)arg1 animated:(_Bool)arg2;
- (void)_playButtonPressed:(id)arg1;
- (void)updateStateFromCardSection:(id)arg1;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

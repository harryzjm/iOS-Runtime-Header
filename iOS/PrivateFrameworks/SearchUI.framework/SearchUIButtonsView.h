//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIContainerBoxView.h>

@class SearchUIMovieCardSectionView;

@interface SearchUIButtonsView : NUIContainerBoxView
{
    SearchUIMovieCardSectionView *_cardSectionView;
}

@property __weak SearchUIMovieCardSectionView *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
- (void).cxx_destruct;
- (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3;
- (id)buttonForOffer:(id)arg1 playable:(id)arg2;
- (id)buttonForChannelDetails:(id)arg1 punchoutURLs:(id)arg2 isEntitled:(_Bool)arg3 isContinuing:(_Bool)arg4 isContainerItem:(_Bool)arg5 seasonNumber:(id)arg6 episodeNumber:(id)arg7;
- (id)buttonForPlayable:(id)arg1;
- (_Bool)channelHasBeenSeen:(id)arg1 seenChannels:(id)arg2;
- (id)buttonsForPlayables:(id)arg1 channels:(id)arg2 currentEpisode:(id)arg3 isUpNextable:(_Bool)arg4 isUpNexted:(_Bool)arg5;
- (void)sendErrorFeedbackIfNecessary:(id)arg1;
- (void)fetchButtonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCardSectionView:(id)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SFWatchListItem;

@interface SearchUIWatchNowSectionModel
{
    SFWatchListItem *_watchListItem;
    NSString *_cardSectionId;
}

- (void).cxx_destruct;
@property(retain) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(retain) SFWatchListItem *watchListItem; // @synthesize watchListItem=_watchListItem;
- (id)horizontalRowModelsForCardSections:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3;
- (void)loadIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithWatchNowCardSection:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3 section:(id)arg4;

@end

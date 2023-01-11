//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFDataAnalyticsLogItemProvider;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsModule
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFDataAnalyticsLogItemProvider *_logItemProvider;
}

@property(readonly, nonatomic) HFDataAnalyticsLogItemProvider *logItemProvider; // @synthesize logItemProvider=_logItemProvider;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;

@end


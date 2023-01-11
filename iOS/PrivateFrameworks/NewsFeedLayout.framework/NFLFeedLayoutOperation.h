//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class NFLBatchContext, NFLFeedSettings, NSArray;
@protocol NFLFeedLayoutSearchConfiguration, NFLFontManager;

@interface NFLFeedLayoutOperation : FCOperation
{
    CDUnknownBlockType _layoutCompletion;
    NSArray *_tileInfos;
    NFLFeedSettings *_feedSettings;
    id <NFLFeedLayoutSearchConfiguration> _feedLayoutSearchConfiguration;
    id <NFLFontManager> _fontManager;
    double _tileProminenceScoreBalanceValue;
    NFLBatchContext *_previousBatchContext;
    NFLBatchContext *_nextBatchContext;
    NSArray *_result;
}

@property(copy, nonatomic) NSArray *result; // @synthesize result=_result;
@property(copy, nonatomic) NFLBatchContext *nextBatchContext; // @synthesize nextBatchContext=_nextBatchContext;
@property(copy, nonatomic) NFLBatchContext *previousBatchContext; // @synthesize previousBatchContext=_previousBatchContext;
@property(nonatomic) double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property(retain, nonatomic) id <NFLFontManager> fontManager; // @synthesize fontManager=_fontManager;
@property(copy, nonatomic) id <NFLFeedLayoutSearchConfiguration> feedLayoutSearchConfiguration; // @synthesize feedLayoutSearchConfiguration=_feedLayoutSearchConfiguration;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(copy, nonatomic) NSArray *tileInfos; // @synthesize tileInfos=_tileInfos;
@property(copy) CDUnknownBlockType layoutCompletion; // @synthesize layoutCompletion=_layoutCompletion;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithTileInfos:(id)arg1 feedLayoutSearchConfiguration:(id)arg2 feedSettings:(id)arg3 fontManager:(id)arg4 tileProminenceScoreBalanceValue:(double)arg5 previousBatchContext:(id)arg6 nextBatchContext:(id)arg7;
- (id)init;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LNConnectionOperation.h"

@class LNActionMetadata, LNFocusConfigurationSuggestionContext, NSArray;

__attribute__((visibility("hidden")))
@interface LNFetchSuggestedFocusActionsConnectionOperation : LNConnectionOperation
{
    LNActionMetadata *_actionMetadata;
    LNFocusConfigurationSuggestionContext *_suggestionContext;
    NSArray *_results;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext; // @synthesize suggestionContext=_suggestionContext;
@property(retain, nonatomic) LNActionMetadata *actionMetadata; // @synthesize actionMetadata=_actionMetadata;
- (void)finishWithError:(id)arg1;
- (void)start;
- (id)initWithConnectionInterface:(id)arg1 actionMetadata:(id)arg2 suggestionContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPSocialHighlightServerProtocol-Protocol.h>

@class NSArray, NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPSocialHighlightClientProtocol;

@interface PPSocialHighlightServerRequestHandler : NSObject <PPSocialHighlightServerProtocol>
{
    id <PPSocialHighlightClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
    NSArray *_applicationIdentifiers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *applicationIdentifiers; // @synthesize applicationIdentifiers=_applicationIdentifiers;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void)decayIntervalWithCompletion:(CDUnknownBlockType)arg1;
- (void)feedbackForAttribution:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)feedbackForHighlight:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)attributionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rankedHighlightsForSyncedItems:(id)arg1 client:(id)arg2 variant:(id)arg3 queryId:(unsigned long long)arg4;
- (void)rankedHighlightsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 queryId:(unsigned long long)arg4;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)init;

@end

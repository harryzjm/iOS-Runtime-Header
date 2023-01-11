//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityFetchResponseChangesOperation : VUIAsynchronousOperation
{
    NSArray *_fetchResponseChanges;
    NSError *_error;
    NSArray *_latestFetchResponses;
    NSArray *_currentFetchResponses;
}

+ (id)_changeSetFromCurrentMediaEntities:(id)arg1 toLatestMediaEntities:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *currentFetchResponses; // @synthesize currentFetchResponses=_currentFetchResponses;
@property(copy, nonatomic) NSArray *latestFetchResponses; // @synthesize latestFetchResponses=_latestFetchResponses;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *fetchResponseChanges; // @synthesize fetchResponseChanges=_fetchResponseChanges;
- (id)_groupingChangeSetWithCurrentGrouping:(id)arg1 latestGrouping:(id)arg2;
- (id)_groupingChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2;
- (id)_mediaEntitiesChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2;
- (void)_preloadMetadataForFetchResponse:(id)arg1;
- (void)_preloadMediaEntityMetadata;
- (void)executionDidBegin;
- (id)initWithLatestFetchResponses:(id)arg1 currentFetchResponses:(id)arg2;
- (id)init;

@end

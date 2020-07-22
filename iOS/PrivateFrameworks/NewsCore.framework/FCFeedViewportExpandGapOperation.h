//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCloudContext, FCFeedDescriptor, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportDiff;
@protocol FCFeedElement;

@interface FCFeedViewportExpandGapOperation
{
    _Bool _cachedOnly;
    _Bool _offlineMode;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    id <FCFeedElement> _gapElement;
    unsigned long long _desiredHeadlineCount;
    FCFeedViewportBookmark *_bookmark;
    unsigned long long _gapExpansionDirection;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _expandGapCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_resultDiff;
}

@property(retain, nonatomic) FCFeedViewportDiff *resultDiff; // @synthesize resultDiff=_resultDiff;
@property(retain, nonatomic) FCFeedViewport *resultViewport; // @synthesize resultViewport=_resultViewport;
@property(copy, nonatomic) CDUnknownBlockType expandGapCompletionHandler; // @synthesize expandGapCompletionHandler=_expandGapCompletionHandler;
@property _Bool offlineMode; // @synthesize offlineMode=_offlineMode;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) long long gapExpansionPolicy; // @synthesize gapExpansionPolicy=_gapExpansionPolicy;
@property(nonatomic) unsigned long long gapExpansionDirection; // @synthesize gapExpansionDirection=_gapExpansionDirection;
@property(copy, nonatomic) FCFeedViewportBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(nonatomic) unsigned long long desiredHeadlineCount; // @synthesize desiredHeadlineCount=_desiredHeadlineCount;
@property(copy, nonatomic) id <FCFeedElement> gapElement; // @synthesize gapElement=_gapElement;
@property(retain, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(retain, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_groupEmitterWithIdentifier:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

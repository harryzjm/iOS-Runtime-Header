//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCFeedDescriptor, FCFeedViewport, FCFeedViewportDiff;

@interface FCFeedViewportRefreshOperation
{
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    CDUnknownBlockType _refreshCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_resultDiff;
}

@property(retain, nonatomic) FCFeedViewportDiff *resultDiff; // @synthesize resultDiff=_resultDiff;
@property(retain, nonatomic) FCFeedViewport *resultViewport; // @synthesize resultViewport=_resultViewport;
@property(copy, nonatomic) CDUnknownBlockType refreshCompletionHandler; // @synthesize refreshCompletionHandler=_refreshCompletionHandler;
@property(retain, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(retain, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end


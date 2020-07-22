//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class QLFileThumbnailRequest, QLThumbnailReply;

__attribute__((visibility("hidden")))
@interface QLServiceThumbnailRenderer : NSObject
{
    QLFileThumbnailRequest *_request;
    QLThumbnailReply *_reply;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) QLThumbnailReply *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) QLFileThumbnailRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)_thumbnailDataDestructionConcurrenQueue;
- (_Bool)_canCreateContextOfSize:(struct CGSize)arg1 forRequest:(id)arg2;
- (void)_executeCompletionHandlerWithThumbnailData:(id)arg1 thumbnailURL:(id)arg2 drawingContextSize:(struct CGSize)arg3 didGenerateThumbnail:(_Bool)arg4 error:(id)arg5;
- (void)_didReceiveThumbnailURL:(id)arg1;
- (void)_didGenerateThumbnailWithData:(id)arg1 drawingContextSize:(struct CGSize)arg2;
- (void)_thumbnailGenerationDidFailWithError:(id)arg1;
- (void)_drawInCurrentContextOfSize:(struct CGSize)arg1 drawingBlock:(CDUnknownBlockType)arg2;
- (void)_drawInContextOfSize:(struct CGSize)arg1 drawingBlock:(CDUnknownBlockType)arg2;
- (void)generateThumbnailAndPerformCompletionHandler;
- (id)initWithRequest:(id)arg1 reply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


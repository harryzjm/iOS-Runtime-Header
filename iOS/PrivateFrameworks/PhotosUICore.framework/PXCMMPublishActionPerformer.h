//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface PXCMMPublishActionPerformer
{
    NSURL *_publishedURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *publishedURL; // @synthesize publishedURL=_publishedURL;
- (void)cancelActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isCancellable;
- (void)_completePublishActionWithSuccess:(_Bool)arg1 error:(id)arg2 shareOrigin:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)performPublishActionWithSession:(id)arg1 shareOrigin:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createActionProgress;

@end

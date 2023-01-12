//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFGiphyActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)giphyViewController:(id)arg1 didSelectObjects:(id)arg2;
- (void)giphyViewControllerDidCancel:(id)arg1;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWithContent:(id)arg1 error:(id)arg2;
- (void)showWithQuery:(id)arg1 selectMultiple:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end


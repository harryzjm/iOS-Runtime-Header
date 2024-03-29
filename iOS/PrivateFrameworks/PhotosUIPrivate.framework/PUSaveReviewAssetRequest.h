//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PHContentEditingOutput, PICompositionController, PUEditableMediaProvider, PUReviewCreateAssetNode, PUVideoExportNode;
@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUSaveReviewAssetRequest : NSObject
{
    CDUnknownBlockType _completionHandler;
    double _beginTimestamp;
    PUReviewCreateAssetNode *_outputNode;
    PUVideoExportNode *_videoExportNode;
    int _identifier;
    long long _currentState;
    PUEditableMediaProvider *_editableMediaProvider;
    id <PUEditableAsset> _editableAsset;
    NSURL *_directory;
    PICompositionController *_compositionController;
    PHContentEditingOutput *_contentEditingOutput;
    long long _workImageVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;
@property(readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property(readonly, copy, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(readonly, nonatomic) NSURL *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) id <PUEditableAsset> editableAsset; // @synthesize editableAsset=_editableAsset;
@property(readonly, nonatomic) PUEditableMediaProvider *editableMediaProvider; // @synthesize editableMediaProvider=_editableMediaProvider;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void)_transitionToState:(long long)arg1;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) _Bool supportsProgress;
- (void)_finishWithAsset:(id)arg1 error:(id)arg2;
- (void)cancelSaveOperation;
- (void)_handleOutputNodeFinishedWithError:(id)arg1;
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_performSaveOperation;
- (void)_performInternalSaveOperation;
- (long long)_videoRequestVersion;
- (long long)_imageRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 workImageVersion:(long long)arg5;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(long long)arg5;
- (id)initWithAssetForRevertToOriginal:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


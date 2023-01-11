//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosEditUI/PXRunNodeDelegate-Protocol.h>

@class NSArray, NSString, PHAsset, PHContentEditingOutput, PLPhotoEditModel, PUPhotoEditIrisModel, PUPhotoKitAdjustmentSaveNode, PUVideoExportNode;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSaveRequest : NSObject <PXRunNodeDelegate>
{
    CDUnknownBlockType _completionHandler;
    double _beginTimestamp;
    PUPhotoKitAdjustmentSaveNode *_outputNode;
    PUVideoExportNode *_videoExportNode;
    _Bool _useRawIfAvailable;
    int _identifier;
    PHAsset *_photo;
    PLPhotoEditModel *_editModel;
    PUPhotoEditIrisModel *_irisModel;
    PHContentEditingOutput *_contentEditingOutput;
    long long _workImageVersion;
    long long _currentState;
    NSArray *__runGraph;
}

@property(copy, nonatomic, setter=_setRunGraph:) NSArray *_runGraph; // @synthesize _runGraph=__runGraph;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;
@property(readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property(readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel; // @synthesize irisModel=_irisModel;
@property(readonly, copy, nonatomic) PLPhotoEditModel *editModel; // @synthesize editModel=_editModel;
@property(readonly, nonatomic) PHAsset *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_transitionToState:(long long)arg1;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) _Bool supportsProgress;
- (_Bool)_requiresVideoRender;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)cancelSaveOperation;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_handleOutputNodeFinishedWithError:(id)arg1;
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_performSaveEditsOperation;
- (long long)_videoRequestVersion;
- (long long)_imageRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4 irisEditModel:(id)arg5 useRawIfAvailable:(_Bool)arg6;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(_Bool)arg5;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(_Bool)arg5;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


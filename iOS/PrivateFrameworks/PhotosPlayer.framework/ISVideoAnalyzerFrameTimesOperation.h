//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AVAsset, AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject;
@protocol OS_dispatch_queue;

@interface ISVideoAnalyzerFrameTimesOperation : NSOperation
{
    AVAssetReader *_assetReader;
    AVAssetReaderSampleReferenceOutput *_assetReaderOutput;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _trackID;
    AVAsset *_asset;
    CDUnknownBlockType _resultHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_handleAssetDidLoadValues;
- (void)main;
- (id)initWithAsset:(id)arg1 trackID:(int)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end


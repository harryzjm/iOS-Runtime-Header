//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, PHImageManager, PLEditSource, PLPhotoEditModel, PXPhotoKitEditSourceLoader;
@protocol OS_dispatch_queue, PXPhotoKitAdjustedDisplayAsset;

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject
{
    PXPhotoKitEditSourceLoader *_editSourceLoader;
    _Bool _delayRenders;
    _Bool _useCachedRenders;
    id <PXPhotoKitAdjustedDisplayAsset> _asset;
    NSObject<OS_dispatch_queue> *_renderQueue;
    PHImageManager *_imageManager;
    PLEditSource *_editSource;
    NSError *_loadError;
    PLPhotoEditModel *_baseEditModel;
    double _progress;
}

@property(nonatomic) _Bool useCachedRenders; // @synthesize useCachedRenders=_useCachedRenders;
@property(nonatomic) _Bool delayRenders; // @synthesize delayRenders=_delayRenders;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) PLPhotoEditModel *baseEditModel; // @synthesize baseEditModel=_baseEditModel;
@property(retain, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(readonly, nonatomic) id <PXPhotoKitAdjustedDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_handleEditSourceLoadingFinished;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)cancel;
- (void)beginLoadingEditSource;
- (void)start;
- (id)initWithAsset:(id)arg1 renderQueue:(id)arg2 imageManager:(id)arg3;

@end


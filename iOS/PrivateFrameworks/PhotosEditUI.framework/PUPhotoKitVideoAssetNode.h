//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosEditUI/PUVideoAssetNode-Protocol.h>

@class AVAsset, NSArray, NSString, PHAsset;
@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoKitVideoAssetNode : PXRunNode <PUVideoAssetNode>
{
    int _requestID;
    AVAsset *_videoAsset;
    long long _version;
    PHAsset *_asset;
}

@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void).cxx_destruct;
- (void)_handleDidLoadVideo:(id)arg1 info:(id)arg2;
- (void)run;
- (id)initWithAsset:(id)arg1 version:(long long)arg2;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosEditUI/PUImageDataNode-Protocol.h>
#import <PhotosEditUI/PUImageInfoNode-Protocol.h>

@class NSArray, NSData, NSString, NSURL, PHAsset;
@protocol PXRunNodeDelegate;

@interface PUPhotoKitImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode>
{
    int _requestID;
    NSData *_imageData;
    NSURL *_imageDataURL;
    NSString *_imageDataUTI;
    long long _imageExifOrientation;
    long long _version;
    PHAsset *_asset;
}

@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) long long imageExifOrientation; // @synthesize imageExifOrientation=_imageExifOrientation;
@property(readonly, nonatomic) NSString *imageDataUTI; // @synthesize imageDataUTI=_imageDataUTI;
@property(readonly, nonatomic) NSURL *imageDataURL; // @synthesize imageDataURL=_imageDataURL;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)arg1 imageUTI:(id)arg2 imageOrientation:(long long)arg3 info:(id)arg4;
- (void)run;
- (void)didCancel;
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

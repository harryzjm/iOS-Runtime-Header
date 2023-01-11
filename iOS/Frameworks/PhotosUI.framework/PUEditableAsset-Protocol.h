//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUDisplayAsset-Protocol.h>

@class NSDictionary, NSString, PFVideoAVObjectBuilder, PHContentEditingInputRequestOptions;

@protocol PUEditableAsset <PUDisplayAsset>
@property(readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalImageFile;
@property(readonly, nonatomic, getter=isResourceDownloadPossible) _Bool resourceDownloadPossible;
@property(readonly, nonatomic) int originalEXIFOrientation;
@property(readonly, nonatomic) NSDictionary *imageProperties;
@property(readonly, nonatomic) PFVideoAVObjectBuilder *videoObjectBuilder;
@property(readonly, nonatomic) unsigned long long livePhotoVisibilityState;
@property(readonly, nonatomic) unsigned long long originalResourceChoice;
@property(readonly, nonatomic, getter=isInPlaceVideoTrimAllowed) _Bool inPlaceVideoTrimAllowed;
@property(readonly, nonatomic, getter=isLivePhotoVisibilityAdjustmentAllowed) _Bool livePhotoVisibilityAdjustmentAllowed;
@property(readonly, nonatomic, getter=isContentAdjustmentAllowed) _Bool contentAdjustmentAllowed;
@property(readonly, nonatomic, getter=isAdjusted) _Bool adjusted;
@property(readonly, nonatomic, getter=isHighFramerateVideo) _Bool highFramerateVideo;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (unsigned long long)requestContentEditingInputWithOptions:(PHContentEditingInputRequestOptions *)arg1 completionHandler:(void (^)(PHContentEditingInput *, NSDictionary *))arg2;
- (_Bool)isOriginalRaw;
@end


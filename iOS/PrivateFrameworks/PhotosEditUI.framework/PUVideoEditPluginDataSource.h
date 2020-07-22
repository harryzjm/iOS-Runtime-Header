//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosEditUI/PUVideoEditPluginSessionDataSource-Protocol.h>

@class NSString, PHAsset;

@interface PUVideoEditPluginDataSource : NSObject <PUVideoEditPluginSessionDataSource>
{
    _Bool _allowsRevertInSession;
    PHAsset *_videoAsset;
}

@property(nonatomic) _Bool allowsRevertInSession; // @synthesize allowsRevertInSession=_allowsRevertInSession;
@property(retain, nonatomic) PHAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void).cxx_destruct;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)editPluginSessionCanRevertToOriginal:(id)arg1;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;
- (id)initWithVideoAsset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


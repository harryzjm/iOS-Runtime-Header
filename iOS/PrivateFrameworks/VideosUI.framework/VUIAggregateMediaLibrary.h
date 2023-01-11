//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUIDeviceMediaLibrary, VUISidebandMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIAggregateMediaLibrary
{
    VUIDeviceMediaLibrary *_deviceMediaLibrary;
    VUISidebandMediaLibrary *_sidebandMediaLibrary;
}

+ (id)keyPathsForValuesAffectingConnectionState;
@property(readonly, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary; // @synthesize sidebandMediaLibrary=_sidebandMediaLibrary;
@property(readonly, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary; // @synthesize deviceMediaLibrary=_deviceMediaLibrary;
- (void).cxx_destruct;
- (void)_sidebandMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_deviceMediaLibraryContentsDidChange:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)connectionState;
- (id)title;
- (void)updateFromCloudWithReason:(long long)arg1;
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isInitialUpdateInProgress;
- (_Bool)isUpdating;
- (void)dealloc;
- (id)initWithManager:(id)arg1 deviceMediaLibrary:(id)arg2 sidebandMediaLibrary:(id)arg3;

@end

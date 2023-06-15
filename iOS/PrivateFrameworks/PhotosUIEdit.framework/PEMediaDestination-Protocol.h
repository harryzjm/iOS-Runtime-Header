//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIEdit/NSObject-Protocol.h>

@class PHContentEditingOutput, PICompositionController;
@protocol PEAsset;

@protocol PEMediaDestination <NSObject>
- (double)progressForRequestWithIdentifier:(int)arg1;
- (_Bool)supportsProgressForRequestWithIdentifier:(int)arg1;
- (void)cancelRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id <PEAsset>)arg1 completionHandler:(void (^)(id <PEAsset>, NSError *))arg2;
- (int)saveInternalEditsForAsset:(id <PEAsset>)arg1 usingCompositionController:(PICompositionController *)arg2 contentEditingOutput:(PHContentEditingOutput *)arg3 version:(long long)arg4 livePhotoState:(unsigned short)arg5 completionHandler:(void (^)(id <PEAsset>, NSError *))arg6;
- (int)saveEditsForAsset:(id <PEAsset>)arg1 usingContentEditingOutput:(PHContentEditingOutput *)arg2 livePhotoState:(unsigned short)arg3 completionHandler:(void (^)(id <PEAsset>, NSError *))arg4;
@end


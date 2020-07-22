//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSString, PHAsset, PUPhotosSharingViewController;

@protocol PUPhotosSharingViewControllerDelegate <NSObject>
- (void)photosSharingViewController:(PUPhotosSharingViewController *)arg1 didCompleteWithActivityType:(NSString *)arg2 success:(_Bool)arg3 withAsset:(PHAsset *)arg4;
- (void)photosSharingViewControllerDidCancel:(PUPhotosSharingViewController *)arg1 needsDismiss:(_Bool)arg2;
- (void)photosSharingViewControllerWillCancel:(PUPhotosSharingViewController *)arg1 withAsset:(PHAsset *)arg2;
@end


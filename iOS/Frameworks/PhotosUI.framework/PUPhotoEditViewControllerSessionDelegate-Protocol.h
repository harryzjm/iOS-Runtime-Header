//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPhotoEditViewController;
@protocol PUEditableAsset;

@protocol PUPhotoEditViewControllerSessionDelegate <NSObject>
- (void)photoEditController:(PUPhotoEditViewController *)arg1 didFinishEditingSessionForAsset:(id <PUEditableAsset>)arg2 completed:(_Bool)arg3;
@end


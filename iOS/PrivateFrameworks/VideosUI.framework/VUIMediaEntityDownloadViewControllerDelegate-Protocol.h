//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSObject, VUIMediaEntityDownloadViewController;
@protocol VUIMediaEntityAssetController;

@protocol VUIMediaEntityDownloadViewControllerDelegate <NSObject>

@optional
- (void)downloadViewController:(VUIMediaEntityDownloadViewController *)arg1 didRemoveDownloadForAssetController:(NSObject<VUIMediaEntityAssetController> *)arg2;
@end


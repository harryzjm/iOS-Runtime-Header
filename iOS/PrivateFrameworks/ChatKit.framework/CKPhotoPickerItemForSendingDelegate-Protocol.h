//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKPhotoPickerItemForSending, NSError, PHAsset;

@protocol CKPhotoPickerItemForSendingDelegate <NSObject>
- (void)item:(CKPhotoPickerItemForSending *)arg1 requiresCloudDownloadForAsset:(PHAsset *)arg2;
- (void)item:(CKPhotoPickerItemForSending *)arg1 encounteredError:(NSError *)arg2 forAsset:(PHAsset *)arg3;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/ICDeviceDelegate-Protocol.h>

@class ICCameraDevice, ICCameraItem, NSArray, NSDictionary, NSError;

@protocol ICCameraDeviceDelegate <ICDeviceDelegate>

@optional
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveMetadata:(NSDictionary *)arg2 forItem:(ICCameraItem *)arg3 error:(NSError *)arg4;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveThumbnail:(struct CGImage *)arg2 forItem:(ICCameraItem *)arg3 error:(NSError *)arg4;
- (void)cameraDevice:(ICCameraDevice *)arg1 didRemoveItems:(NSArray *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didAddItems:(NSArray *)arg2;
@end

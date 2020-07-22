//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ImageCapture/NSObject-Protocol.h>

@class ICCameraDevice, ICCameraFile, ICDevice, NSArray, NSDictionary;

@protocol ICDeviceManagerProtocol <NSObject>
- (void)enumerateContent;
- (int)aptpRetrieveDataForFiles:(ICCameraDevice *)arg1 contextInfo:(void *)arg2;
- (int)aptpRequestDataForFiles:(NSArray *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (int)eject:(ICCameraDevice *)arg1;
- (int)downloadFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 options:(NSDictionary *)arg3 contextInfo:(void *)arg4;
- (int)deleteFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (int)syncClock:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (int)getMetadataOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (int)getThumbnailOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void *)arg3;
- (int)closeSession:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (int)openSession:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (int)closeDevice:(ICDevice *)arg1 contextInfo:(void *)arg2;
- (int)openDevice:(NSDictionary *)arg1 contextInfo:(void *)arg2;
@end

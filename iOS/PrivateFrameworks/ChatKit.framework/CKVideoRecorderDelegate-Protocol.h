//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKVideoRecorder, NSData, NSError, NSURL;

@protocol CKVideoRecorderDelegate <NSObject>
- (void)ckVideoRecorder:(CKVideoRecorder *)arg1 imageDataCaptured:(NSData *)arg2 error:(NSError *)arg3;
- (void)ckVideoRecorder:(CKVideoRecorder *)arg1 videoCaptured:(NSURL *)arg2 error:(NSError *)arg3;
- (void)ckVideoRecorderRecordingCanceled:(CKVideoRecorder *)arg1;
@end


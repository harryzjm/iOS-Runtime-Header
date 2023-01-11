//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CKStreamingAssetAppendContext, HMDCameraRecordingUploadOperationEvent, HMFTimer, NSData, NSURL;

@protocol HMDCameraRecordingUploaderDataSource <NSObject>
@property(readonly, copy) NSURL *storeDirectoryURL;
- (void)submitOperationEvent:(HMDCameraRecordingUploadOperationEvent *)arg1;
- (HMFTimer *)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (void)appendData:(NSData *)arg1 toStreamingAssetAppendContext:(CKStreamingAssetAppendContext *)arg2 completion:(void (^)(CKStreamingAsset *, NSError *))arg3;
- (_Bool)removeItemAtURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)writeData:(NSData *)arg1 toFileAtURL:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(_Bool)arg2 error:(id *)arg3;
@end

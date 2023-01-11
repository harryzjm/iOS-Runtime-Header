//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol HMIVideoDecoderDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMIVideoDecoder <HMFLogging>
{
    CDStruct_1b6d18a9 _lastSampleBufferPTS;
    CDStruct_1b6d18a9 _lastSampleBufferDTS;
    struct OpaqueVTDecompressionSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    struct opaqueCMBufferQueue *_buffer;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id <HMIVideoDecoderDelegate> _delegate;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property __weak id <HMIVideoDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_failWithDescription:(id)arg1;
- (_Bool)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 outputFrame:(_Bool)arg2;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)flush;
- (void)dealloc;
- (void)_invalidateSession:(_Bool)arg1;
- (_Bool)_createSessionWithFormatDescription:(const struct opaqueCMFormatDescription *)arg1;
- (void)_drainBuffer:(_Bool)arg1;
- (void)_reorderBufferDidBecomeFull;
- (void)_didDecodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

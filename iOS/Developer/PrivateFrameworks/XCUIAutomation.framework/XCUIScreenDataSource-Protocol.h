//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCUIAutomation/NSObject-Protocol.h>

@class NSUUID, XCTScreenRecordingRequest, XCTScreenshotRequest;

@protocol XCUIScreenDataSource <NSObject>
@property(readonly, nonatomic) _Bool supportsScreenRecording;
@property(readonly, nonatomic) _Bool preferScreenshotsOverScreenRecordings;
@property(readonly, nonatomic) _Bool supportsHEICImageEncoding;
- (void)stopScreenRecordingWithUUID:(NSUUID *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)startScreenRecordingWithRequest:(XCTScreenRecordingRequest *)arg1 withReply:(void (^)(XCTAttachmentFuture *, NSError *))arg2;
- (void)requestScreenshotAttachmentWithRequest:(XCTScreenshotRequest *)arg1 withReply:(void (^)(XCTAttachmentFuture *, NSError *))arg2;
- (void)requestScreenshotWithRequest:(XCTScreenshotRequest *)arg1 withReply:(void (^)(XCTImage *, NSError *))arg2;
- (void)requestBoundsForScreenWithIdentifier:(long long)arg1 completion:(void (^)(struct CGRect, NSError *))arg2;
- (void)requestScaleForScreenWithIdentifier:(long long)arg1 completion:(void (^)(double, NSError *))arg2;
- (void)requestTraitsForScreenWithIdentifier:(long long)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)requestScreenIdentifiersWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end


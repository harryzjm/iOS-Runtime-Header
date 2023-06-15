//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSURL;

@protocol VCPBlockBasedVideoProcessorProtocol
@property(copy, nonatomic) CDUnknownBlockType progressHandler;
@property(retain, nonatomic) NSDictionary *decoderSettings;
- (void)cancel;
- (_Bool)analyzeWithError:(id *)arg1;
- (_Bool)addFrameProcessingRequest:(void (^)(struct opaqueCMSampleBuffer *, _Bool *))arg1 withConfiguration:(NSDictionary *)arg2 error:(id *)arg3;
- (id)initWithURL:(NSURL *)arg1;
@end


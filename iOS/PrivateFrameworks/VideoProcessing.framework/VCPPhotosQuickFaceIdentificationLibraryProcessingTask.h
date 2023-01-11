//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoProcessing/VCPMADTaskProtocol-Protocol.h>

@class NSArray;

@interface VCPPhotosQuickFaceIdentificationLibraryProcessingTask : NSObject <VCPMADTaskProtocol>
{
    CDUnknownBlockType _completionHandler;
    NSArray *_photoLibraries;
    struct atomic<bool> _started;
    struct atomic<bool> _cancel;
}

+ (_Bool)_concurrentFaceProcessing;
+ (id)taskWithPhotoLibraries:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (int)run;
- (_Bool)run:(id *)arg1;
- (void)_analyzeAsset:(id)arg1 withManager:(id)arg2;
- (void)cancel;
- (float)resourceRequirement;
- (void)dealloc;
- (id)initWithPhotoLibraries:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

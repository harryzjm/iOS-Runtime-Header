//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface RCExtAudioFilePipe : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _accessQueueID;
    struct OpaqueExtAudioFile *_audioFileRef;
    struct AudioStreamBasicDescription _outputFormatDescriptionStruct;
    struct AudioStreamBasicDescription _sourceFormatDescriptionStruct;
    NSURL *_sourceURL;
    unsigned long long _sourceFileSize;
}

@property(readonly, nonatomic) unsigned long long sourceFileSize; // @synthesize sourceFileSize=_sourceFileSize;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (void)_accessExtAudioFileWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct AudioStreamBasicDescription *outputFormatDescription;
@property(readonly, nonatomic) struct AudioStreamBasicDescription *sourceFormatDescription;
- (int)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(int)arg2;
- (long long)sourceCurrentFrameIndex;
- (_Bool)seekToSourceFrameIndex:(long long)arg1;
- (long long)sourceFrameIndexForTime:(double)arg1;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned int)arg3;

@end


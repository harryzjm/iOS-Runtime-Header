//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoProcessing/VCPMADTaskProtocol-Protocol.h>

@class NSDictionary;

@interface VCPHomeResidentMaintenanceTask : NSObject <VCPMADTaskProtocol>
{
    CDUnknownBlockType _completionHandler;
    NSDictionary *_options;
    struct atomic<bool> _started;
    struct atomic<bool> _cancel;
    int _taskID;
    CDUnknownBlockType _cancelBlock;
}

+ (id)taskWithOptions:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (int)run;
- (_Bool)isCanceled;
- (void)cancel;
- (float)resourceRequirement;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;

@end

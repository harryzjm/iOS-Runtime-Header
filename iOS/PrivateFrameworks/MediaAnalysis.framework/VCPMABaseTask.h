//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/VCPMADTaskProtocol-Protocol.h>

@interface VCPMABaseTask : NSObject <VCPMADTaskProtocol>
{
    struct atomic<bool> _started;
    struct atomic<bool> _canceled;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (int)run;
- (_Bool)run:(id *)arg1;
- (_Bool)isCanceled;
- (void)cancel;
- (_Bool)autoCancellable;
- (float)resourceRequirement;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface GKLoadResourceOperation : NSOperation
{
    CDUnknownBlockType _outputBlock;
    long long __loadReason;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setLoadReason:) long long _loadReason; // @synthesize _loadReason=__loadReason;
@property(copy) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
- (void)main;
- (void)didCompleteWithResource:(id)arg1 error:(id)arg2;

@end

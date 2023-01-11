//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSOperation;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFinishWritingHelper
{
    NSArray *_finishWritingOperations;
    NSOperation *_transitionToTerminalStatusOperation;
}

@property(readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation; // @synthesize transitionToTerminalStatusOperation=_transitionToTerminalStatusOperation;
- (long long)status;
- (void)cancelWriting;
- (void)_finishWritingOperationsDidFinish;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2;

@end

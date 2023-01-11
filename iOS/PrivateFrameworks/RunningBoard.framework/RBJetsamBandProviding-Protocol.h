//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBProcess, RBProcessState;

@protocol RBJetsamBandProviding <NSObject>
- (int)defaultPriorityForProcess:(RBProcess *)arg1 inBand:(unsigned char)arg2;
- (int)jetsamPriorityForProcess:(RBProcess *)arg1 withState:(RBProcessState *)arg2;
@end

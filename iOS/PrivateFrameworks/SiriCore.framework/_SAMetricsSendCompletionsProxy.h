//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _SAMetricsSendCompletionsProxy : NSObject
{
    NSMutableArray *_blocks;
}

- (void).cxx_destruct;
- (void)dispatchBlocksWithResult:(long long)arg1 error:(id)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

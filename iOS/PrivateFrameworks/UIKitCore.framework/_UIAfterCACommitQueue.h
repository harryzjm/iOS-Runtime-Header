//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIAfterCACommitBlock;

__attribute__((visibility("hidden")))
@interface _UIAfterCACommitQueue : NSObject
{
    _UIAfterCACommitBlock *_first;
    _UIAfterCACommitBlock *_last;
}

- (void).cxx_destruct;
- (_Bool)flush;
- (void)enqueuePostSynchronizeBlock:(CDUnknownBlockType)arg1;
- (void)enqueuePostCommitBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SYStoreResetSessionOwner
{
    NSMutableArray *_buffer;
    unsigned int _bufferedState;
    CDUnknownBlockType _fetchNextBatch;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fetchNextBatch; // @synthesize fetchNextBatch=_fetchNextBatch;
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (unsigned int)_sendBufferedChanges:(CDUnknownBlockType)arg1;
- (_Bool)isResetSync;
- (id)init;

@end

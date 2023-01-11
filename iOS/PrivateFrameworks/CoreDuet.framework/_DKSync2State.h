//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _DKSyncCompositeOperation, _DKSyncType;

@interface _DKSync2State : NSObject
{
    _Bool _isPending;
    _DKSyncType *_type;
    _DKSyncCompositeOperation *_parent;
    NSMutableArray *_completions;
}

@property(retain) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain) _DKSyncCompositeOperation *parent; // @synthesize parent=_parent;
@property(retain) _DKSyncType *type; // @synthesize type=_type;
@property _Bool isPending; // @synthesize isPending=_isPending;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)mergeType:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithType:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

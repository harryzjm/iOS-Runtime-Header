//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCContext, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMCContextProvider : HMFObject
{
    HMCContext *_context;
    NSMutableArray *_redirections;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *redirections; // @synthesize redirections=_redirections;
- (void)removeAllRegistrations;
- (void)registerForChangesOfDatabaseModels:(id)arg1 orWithModelIDs:(id)arg2 changeMask:(unsigned long long)arg3 selector:(SEL)arg4;
- (id)futureInContext:(CDUnknownBlockType)arg1;
- (void)unsafeSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property(readonly) HMCContext *context; // @synthesize context=_context;
- (id)initWithContext:(id)arg1;

@end


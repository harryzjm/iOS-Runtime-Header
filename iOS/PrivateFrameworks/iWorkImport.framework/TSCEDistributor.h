//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, Protocol;

__attribute__((visibility("hidden")))
@interface TSCEDistributor : NSObject
{
    NSMutableArray *_receivers;
}

@property(readonly, nonatomic) NSArray *receivers; // @synthesize receivers=_receivers;
- (void).cxx_destruct;
- (void)suspendDuringBlock:(CDUnknownBlockType)arg1;
- (void)distributeBlock:(CDUnknownBlockType)arg1;
- (void)disconnect;
- (void)dropAllTargets;
- (_Bool)hasReceiver:(id)arg1;
- (void)removeReceiver:(id)arg1;
- (void)addReceiverIfMissing:(id)arg1;
- (void)addReceiver:(id)arg1;
@property(readonly, nonatomic) Protocol *protocol;
- (id)init;

@end


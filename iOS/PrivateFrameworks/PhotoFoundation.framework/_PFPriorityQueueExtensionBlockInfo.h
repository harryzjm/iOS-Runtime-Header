//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PFPriorityQueueExtensionBlockInfo : NSObject
{
    unsigned int _qos;
    CDUnknownBlockType _block;
    unsigned long long _priority;
}

@property(readonly) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly) unsigned int qos; // @synthesize qos=_qos;
@property(readonly) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)initWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;

@end


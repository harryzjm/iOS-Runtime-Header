//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSMachPortSendRight, CAFenceHandle, NSString;

@interface BKSSystemAnimationFenceHandle
{
    unsigned long long _fenceName;
    CAFenceHandle *_caFence;
    BSMachPortSendRight *_preFence;
    BSMachPortSendRight *_preFenceTrigger;
    unsigned long long _handleName;
    int _valid;
    _Bool _shouldTrace;
    _Bool _skipSync;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *_trace;
- (_Bool)shouldIgnoreTrigger;
- (id)trigger;
- (id)CAFenceHandle;
- (unsigned int)CAPort;
- (void)invalidate;
- (_Bool)isUsable;
- (unsigned long long)fenceName;
- (void)dealloc;
- (id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 skipSync:(_Bool)arg5 shouldTrace:(_Bool)arg6;

@end

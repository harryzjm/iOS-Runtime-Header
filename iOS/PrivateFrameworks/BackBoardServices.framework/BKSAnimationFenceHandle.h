//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSInvalidatable-Protocol.h>
#import <BackBoardServices/BSXPCCoding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable>
{
    unsigned long long _fenceName;
    BSMachPortSendRight *_caFence;
    BSMachPortSendRight *_preFence;
    BSMachPortSendRight *_preFenceTrigger;
    unsigned long long _handleName;
    int _valid;
    _Bool _shouldTrace;
}

+ (_Bool)supportsSecureCoding;
+ (id)newSystemFenceHandle;
@property(readonly, retain, nonatomic) BSMachPortSendRight *trigger; // @synthesize trigger=_preFenceTrigger;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned int)CAPort;
- (void)invalidate;
@property(readonly, nonatomic, getter=isUsable) _Bool usable;
@property(readonly, nonatomic) unsigned long long fenceName;
- (void)dealloc;
- (id)init;
- (id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 shouldTrace:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


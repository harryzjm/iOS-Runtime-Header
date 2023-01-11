//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSInvalidatable-Protocol.h>
#import <BackBoardServices/BSXPCCoding-Protocol.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceAssertion : NSObject <BSXPCCoding, BSInvalidatable>
{
    unsigned long long _fenceName;
    unsigned long long _assertionName;
    BSMachPortSendRight *_preFence;
    int _invalid;
    _Bool _shouldTrace;
}

+ (id)newSystemFenceAssertionForTriggerPort:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)dealloc;
- (id)init;
- (id)_initWithFenceName:(unsigned long long)arg1 assertionName:(unsigned long long)arg2 preFence:(id)arg3 shouldTrace:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

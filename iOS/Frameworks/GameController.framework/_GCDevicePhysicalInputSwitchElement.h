//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;
@protocol GCSwitchPositionInput;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputSwitchElement
{
    _Bool _canWrap;
    _Bool _sequential;
    struct _NSRange _positionRange;
    long long _gamepadEventPositionField;
    unsigned long long _positionChangedHandlerSlot;
    unsigned long long _positionSlot;
    unsigned long long _timestampSlot;
}

- (void)onCommitInvokeCallbacks:(unsigned long long)arg1;
- (unsigned long long)handleGamepadEvent:(id)arg1 withTimestamp:(double)arg2;
@property(readonly) double lastPositionLatency;
@property(readonly) double lastPositionTimestamp;
@property(readonly) _Bool canWrap;
@property(readonly, getter=isSequential) _Bool sequential;
@property(readonly) struct _NSRange positionRange;
@property(readonly) long long position;
@property(copy) CDUnknownBlockType positionDidChangeHandler;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToElement:(id)arg1;
@property(readonly) id <GCSwitchPositionInput> positionInput;
- (id)initWith:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly) NSSet *aliases;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *localizedName;
@property(readonly) NSString *sfSymbolsName;
@property(readonly) Class superclass;

@end


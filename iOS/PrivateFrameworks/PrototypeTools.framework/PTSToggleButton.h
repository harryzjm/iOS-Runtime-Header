//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSHUDControl-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSString, _UISettings;

@interface PTSToggleButton <PTSHUDControl, _UISettingsKeyPathObserver>
{
    NSString *_titleForOnState;
    NSString *_titleForOffState;
    id _valueForOnState;
    id _valueForOffState;
}

+ (id)toggleButtonForSettings:(id)arg1 valueKeyPath:(id)arg2 titleForOnState:(id)arg3 titleForOffState:(id)arg4;
@property(copy, nonatomic) id valueForOffState; // @synthesize valueForOffState=_valueForOffState;
@property(copy, nonatomic) id valueForOnState; // @synthesize valueForOnState=_valueForOnState;
@property(copy, nonatomic) NSString *titleForOffState; // @synthesize titleForOffState=_titleForOffState;
@property(copy, nonatomic) NSString *titleForOnState; // @synthesize titleForOnState=_titleForOnState;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)pressed:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(nonatomic) int alignment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak _UISettings *settings;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *valueKeyPath;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCControllerButtonInput, GCControllerDirectionPad, GCDualSenseAdaptiveTrigger;

@interface GCDualSenseGamepad
{
    GCControllerButtonInput *_touchpadButton;
    GCControllerDirectionPad *_touchpadPrimary;
    GCControllerDirectionPad *_touchpadSecondary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary; // @synthesize touchpadSecondary=_touchpadSecondary;
@property(readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary; // @synthesize touchpadPrimary=_touchpadPrimary;
@property(readonly, nonatomic) GCControllerButtonInput *touchpadButton; // @synthesize touchpadButton=_touchpadButton;
- (void)initializeExtraControllerElements;
- (void)populateEncodedInitInfo:(CDStruct_fc41fe5e *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)_activateExtendedSupport;

// Remaining properties
@property(readonly, nonatomic) GCDualSenseAdaptiveTrigger *leftTrigger; // @dynamic leftTrigger;
@property(readonly, nonatomic) GCDualSenseAdaptiveTrigger *rightTrigger; // @dynamic rightTrigger;

@end

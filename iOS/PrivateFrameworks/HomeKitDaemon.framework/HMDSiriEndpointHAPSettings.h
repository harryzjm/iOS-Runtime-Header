//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointHAPSettings : HMFObject
{
    _Bool _assistantsUpdated;
    NSNumber *_siriEnable;
    NSNumber *_siriListening;
    NSNumber *_siriTouchToUse;
    NSNumber *_siriLightOnUse;
    NSString *_siriEndpointVersion;
    NSString *_siriEngineVersion;
    NSNumber *_activeIdentifier;
    NSNumber *_manuallyDisabled;
    NSNumber *_multifunctionButton;
}

- (void).cxx_destruct;
@property _Bool assistantsUpdated; // @synthesize assistantsUpdated=_assistantsUpdated;
@property(retain) NSNumber *multifunctionButton; // @synthesize multifunctionButton=_multifunctionButton;
@property(retain) NSNumber *manuallyDisabled; // @synthesize manuallyDisabled=_manuallyDisabled;
@property(retain) NSNumber *activeIdentifier; // @synthesize activeIdentifier=_activeIdentifier;
@property(retain) NSString *siriEngineVersion; // @synthesize siriEngineVersion=_siriEngineVersion;
@property(retain) NSString *siriEndpointVersion; // @synthesize siriEndpointVersion=_siriEndpointVersion;
@property(retain) NSNumber *siriLightOnUse; // @synthesize siriLightOnUse=_siriLightOnUse;
@property(retain) NSNumber *siriTouchToUse; // @synthesize siriTouchToUse=_siriTouchToUse;
@property(retain) NSNumber *siriListening; // @synthesize siriListening=_siriListening;
@property(retain) NSNumber *siriEnable; // @synthesize siriEnable=_siriEnable;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15FocusSettingsUIP33_505BD96902FEE6013A0D99281DBB05A426FocusStatusSettingsManager : NSObject
{
    MISSING_TYPE *clientIdentifier;
    MISSING_TYPE *isListeningToModeConfigurationService;
    MISSING_TYPE *isListeningToGlobalConfigurationService;
    MISSING_TYPE *modeConfigurationService;
    MISSING_TYPE *globalConfigurationService;
    MISSING_TYPE *cachedModes;
    MISSING_TYPE *cachedConfigurations;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/DNDModeConfigurationServiceListener-Protocol.h>

@class ATXDNDModeConfigurationClient, NSString;

@interface ATXDNDModeConfigurationClientListener : NSObject <DNDModeConfigurationServiceListener>
{
    ATXDNDModeConfigurationClient *_configClient;
}

- (void).cxx_destruct;
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;
- (id)initWithConfigClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

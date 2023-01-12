//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionClient/NSObject-Protocol.h>

@class DNDModeConfigurationService, NSArray, NSString;

@protocol DNDModeConfigurationServiceListener <NSObject>

@optional
- (void)modeConfigurationService:(DNDModeConfigurationService *)arg1 didReceiveAppConfigurationContextUpdateForModeIdentifier:(NSString *)arg2;
- (void)modeConfigurationService:(DNDModeConfigurationService *)arg1 didReceiveAvailableModesUpdate:(NSArray *)arg2;
@end


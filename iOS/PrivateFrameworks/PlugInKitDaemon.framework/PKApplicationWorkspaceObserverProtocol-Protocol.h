//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKitDaemon/NSObject-Protocol.h>

@class NSArray;

@protocol PKApplicationWorkspaceObserverProtocol <NSObject>

@optional
- (void)pluginsDidUninstall:(NSArray *)arg1;
- (void)pluginsWillUninstall:(NSArray *)arg1;
- (void)pluginsDidInstall:(NSArray *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSDataServerInterface-Protocol.h>
#import <ClassKit/CLSUtilityServerInterface-Protocol.h>

@class NSString;

@protocol CLSEndpointServerInterface <CLSDataServerInterface, CLSUtilityServerInterface>
- (oneway void)remote_accountChanged;
- (oneway void)remote_deleteAppWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)remote_setOverrideBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)remote_listAppsWithCompletion:(void (^)(id, id, NSError *))arg1;
@end


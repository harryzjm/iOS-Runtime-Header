//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthAppHealthDaemon/NSObject-Protocol.h>

@class HDPostInstallUpdateManager;

@protocol HDPostInstallUpdateTaskHandler <NSObject>
- (void)performPostInstallUpdateTaskForManager:(HDPostInstallUpdateManager *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBOrientationServiceServer;

@interface FBOrientationService : NSObject
{
    FBOrientationServiceServer *_server;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1;
- (id)init;

@end


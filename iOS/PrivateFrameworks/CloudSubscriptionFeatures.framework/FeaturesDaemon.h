//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DaemonController;

@interface FeaturesDaemon : NSObject
{
    DaemonController *_controller;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) DaemonController *controller; // @synthesize controller=_controller;
- (void)start;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemonFoundation/HDAssertion.h>

@class NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _HDAlertSuppressorAssertion : HDAssertion
{
    NSString *_processBundleIdentifier;
    NSObject<OS_dispatch_source> *_keepaliveTimer;
}

- (void).cxx_destruct;

@end


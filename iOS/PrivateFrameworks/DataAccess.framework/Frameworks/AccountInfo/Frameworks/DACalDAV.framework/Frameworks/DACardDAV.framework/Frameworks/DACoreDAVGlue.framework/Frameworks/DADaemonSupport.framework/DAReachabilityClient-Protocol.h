//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DADaemonSupport/NSObject-Protocol.h>

@class DAReachability, NSString;

@protocol DAReachabilityClient <NSObject>
- (void)networkReachable;

@optional
- (NSString *)hostToObserveForDAReachability:(DAReachability *)arg1;
@end


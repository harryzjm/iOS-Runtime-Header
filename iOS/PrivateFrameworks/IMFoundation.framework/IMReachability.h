//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IMReachabilityDelegate, OS_dispatch_queue;

@interface IMReachability : NSObject
{
    _Bool _gettingFlags;
    id <IMReachabilityDelegate> _delegate;
    unsigned long long _flags;
    NSString *_description;
    void *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2;
+ (id)reachabilityWithRemoteAddress:(id)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
@property(nonatomic) void *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(retain, nonatomic) NSString *reachabilityDescription; // @synthesize reachabilityDescription=_description;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) _Bool gettingFlags; // @synthesize gettingFlags=_gettingFlags;
@property(nonatomic) __weak id <IMReachabilityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool connectionRequired;
- (void)_forceGetFlagsIfNecessary;
- (void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (id)_initWithReachabilityRef:(struct __SCNetworkReachability *)arg1 description:(id)arg2 delegate:(id)arg3;

@end


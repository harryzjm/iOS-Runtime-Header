//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPRestrictionsMonitor;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPRestrictionsMonitor : NSObject
{
    MPRestrictionsMonitor *_underlyingRestrictionsMonitor;
}

+ (id)allowsExplicitContentDidChangeNotification;
+ (id)sharedRestrictionsMonitor;
- (void).cxx_destruct;
- (void)_handleAllowsExplicitContentDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) _Bool allowsExplicitContent;
@property(readonly, nonatomic) _Bool allowsDeletion;
- (void)dealloc;
- (id)_initWithUnderlyingRestrictionsMonitor:(id)arg1;

@end


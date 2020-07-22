//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol UIStatusBarServerClient;

@interface UIStatusBarServer : NSObject
{
    id <UIStatusBarServerClient> _statusBar;
    struct __CFRunLoopSource *_source;
}

+ (id)getDoubleHeightStatusStringForStyle:(long long)arg1;
+ (_Bool)getGlowAnimationStateForStyle:(long long)arg1;
+ (double)getGlowAnimationEndTimeForStyle:(long long)arg1;
+ (int)getStyleOverrides;
+ (CDStruct_4529d5a7 *)getStatusBarOverrideData;
+ (const CDStruct_8a690d05 *)getStatusBarData;
+ (void)permanentizeStatusBarOverrideData;
+ (void)postStatusBarOverrideData:(CDStruct_4529d5a7 *)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)addStatusBarItem:(int)arg1;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2;
+ (void)postGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
+ (void)removeStyleOverrides:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;
+ (void)postStatusBarData:(const CDStruct_8a690d05 *)arg1 withActions:(int)arg2;
+ (unsigned int)_publisherPort;
+ (unsigned int)_serverPort;
+ (const char *)serviceName;
+ (void)runServer;
@property(retain, nonatomic) id <UIStatusBarServerClient> statusBar; // @synthesize statusBar=_statusBar;
- (void).cxx_destruct;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(long long)arg2;
- (void)_receivedGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)_receivedStatusBarData:(CDStruct_8a690d05 *)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithStatusBar:(id)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, NSMutableDictionary;
@protocol IKAppDeviceConfig;

@interface IKJSFoundation : NSObject
{
    IKAppContext *_appContext;
    NSMutableDictionary *_jsTimers;
    NSMutableDictionary *_dateFormatterCache;
    id <IKAppDeviceConfig> _deviceConfig;
}

@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
@property(retain, nonatomic) NSMutableDictionary *dateFormatterCache; // @synthesize dateFormatterCache=_dateFormatterCache;
@property(retain, nonatomic) NSMutableDictionary *jsTimers; // @synthesize jsTimers=_jsTimers;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (id)_stringForKey:(id)arg1 fromDict:(id)arg2;
- (void)clearCookies;
- (void)setCookie:(id)arg1 useSSCookieStorage:(_Bool)arg2;
- (id)getCookieForURL:(id)arg1 useSSCookieStorage:(_Bool)arg2;
- (void)_jsTimerFired:(id)arg1;
- (void)_clearTimer:(id)arg1;
- (id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(_Bool)arg3;
- (void)stopTimers;
- (void)clearTimeout:(id)arg1;
- (id)setTimeout:(id)arg1 time:(long long)arg2;
- (void)clearInterval:(id)arg1;
- (id)setInterval:(id)arg1 time:(long long)arg2;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICSLoggingDelegate;

@interface ICSLogger : NSObject
{
    int _logCount;
    id <ICSLoggingDelegate> _loggingDelegate;
}

+ (void)setDelegate:(id)arg1;
+ (void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;

@end


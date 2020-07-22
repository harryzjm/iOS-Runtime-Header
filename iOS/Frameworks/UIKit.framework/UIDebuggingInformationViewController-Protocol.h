//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSValue;
@protocol UIDebuggingInformationObserver;

@protocol UIDebuggingInformationViewController

@optional
- (void)removePropertyObserver:(id <UIDebuggingInformationObserver>)arg1 forKey:(NSString *)arg2;
- (void)addPropertyObserver:(id <UIDebuggingInformationObserver>)arg1 forKey:(NSString *)arg2;
- (void)addPropertyForKey:(NSString *)arg1 ofType:(long long)arg2 defaultValue:(NSValue *)arg3 minimumValue:(NSValue *)arg4 maximumValue:(NSValue *)arg5;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLPowerAssertion : NSObject
{
}

+ (id)powerAssertionStatus;
+ (void)setHasEnoughPower:(_Bool)arg1;
+ (void)enableSleep;
+ (void)disableSleep;
+ (void)_releaseAssertion;
+ (void)_retainAssertion;
+ (void)_doProtected:(CDUnknownBlockType)arg1;

@end


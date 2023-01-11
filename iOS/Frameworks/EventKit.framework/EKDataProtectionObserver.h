//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDBDataProtectionObserver;

@interface EKDataProtectionObserver : NSObject
{
    CDUnknownBlockType _stateChangedCallback;
    CDBDataProtectionObserver *_dataProtectionObserver;
}

+ (id)stateChangedNotificationName;
- (void).cxx_destruct;
@property(retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver; // @synthesize dataProtectionObserver=_dataProtectionObserver;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(readonly, nonatomic) _Bool dataIsAccessible;
- (void)_dataProtectionStateChanged;
- (id)init;

@end

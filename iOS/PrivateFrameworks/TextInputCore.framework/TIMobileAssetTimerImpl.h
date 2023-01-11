//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject
{
    CDUnknownBlockType _expirationHandler;
    NSTimer *_assetTimer;
}

+ (id)nextFireDateForDate:(id)arg1;
- (void).cxx_destruct;
- (void)updateAssetTimer;
- (void)assetTimerFired;
- (void)invalidate;
- (void)dealloc;
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1;

@end


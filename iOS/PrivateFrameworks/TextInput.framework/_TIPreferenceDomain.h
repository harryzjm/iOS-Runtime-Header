//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _TIPreferenceDomain : NSObject
{
    _Bool _needsGetSync;
    _Bool _needsSetSync;
    NSString *_domain;
    NSString *_notification;
    double _lastSynchronizedTime;
}

+ (id)domainWithName:(id)arg1 notification:(id)arg2;
@property(nonatomic) double lastSynchronizedTime; // @synthesize lastSynchronizedTime=_lastSynchronizedTime;
@property(nonatomic) _Bool needsSetSync; // @synthesize needsSetSync=_needsSetSync;
@property(nonatomic) _Bool needsGetSync; // @synthesize needsGetSync=_needsGetSync;
@property(retain, nonatomic) NSString *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)dealloc;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/NSCopying-Protocol.h>

@interface CCUIContentModulePresentationContext : NSObject <NSCopying>
{
    long long _environment;
}

+ (id)defaultAlertPresentationContext;
+ (id)defaultControlCenterPresentationContext;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnvironment:(long long)arg1;

@end

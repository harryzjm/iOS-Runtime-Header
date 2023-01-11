//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface URLTarget : NSObject
{
    unsigned int _applicationState;
    NSString *_bundleId;
    long long _defaultIndex;
    NSString *_normalScheme;
    NSString *_secureScheme;
}

+ (id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;
@property(retain, nonatomic) NSString *secureScheme; // @synthesize secureScheme=_secureScheme;
@property(retain, nonatomic) NSString *normalScheme; // @synthesize normalScheme=_normalScheme;
@property(nonatomic) long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
- (void).cxx_destruct;
- (id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;

@end


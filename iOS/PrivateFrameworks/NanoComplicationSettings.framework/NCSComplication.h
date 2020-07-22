//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoComplicationSettings/NSCopying-Protocol.h>

@class NSString;

@interface NCSComplication : NSObject <NSCopying>
{
    _Bool _cannotBeDisabled;
    _Bool _active;
    NSString *_name;
    NSString *_appBundleIdentifier;
    NSString *_complicationBundleIdentifier;
    NSString *_sockPuppetIdentifier;
    unsigned long long _installState;
}

@property(nonatomic) unsigned long long installState; // @synthesize installState=_installState;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool cannotBeDisabled; // @synthesize cannotBeDisabled=_cannotBeDisabled;
@property(copy, nonatomic) NSString *sockPuppetIdentifier; // @synthesize sockPuppetIdentifier=_sockPuppetIdentifier;
@property(copy, nonatomic) NSString *complicationBundleIdentifier; // @synthesize complicationBundleIdentifier=_complicationBundleIdentifier;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isInstalled;
- (id)description;
@property(readonly, nonatomic) NSString *complicationIdentifier;
- (id)initWithDictionary:(id)arg1;

@end


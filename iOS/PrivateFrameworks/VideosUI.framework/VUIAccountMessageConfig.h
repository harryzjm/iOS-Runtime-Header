//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIAccountMessageConfig : NSObject
{
    _Bool _alwaysForceOpenSidebarAnimated;
    _Bool _alwaysForceOpenSidebarNonAnimated;
    NSDictionary *_visibilityBehaviours;
    long long _fallbackVisibilityType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alwaysForceOpenSidebarNonAnimated; // @synthesize alwaysForceOpenSidebarNonAnimated=_alwaysForceOpenSidebarNonAnimated;
@property(nonatomic) _Bool alwaysForceOpenSidebarAnimated; // @synthesize alwaysForceOpenSidebarAnimated=_alwaysForceOpenSidebarAnimated;
@property(nonatomic) long long fallbackVisibilityType; // @synthesize fallbackVisibilityType=_fallbackVisibilityType;
@property(retain, nonatomic) NSDictionary *visibilityBehaviours; // @synthesize visibilityBehaviours=_visibilityBehaviours;
- (long long)_getFallbackVisibilityType;
- (id)_createVisibilityDictionary;
- (id)init;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SignpostSupportAnimationGraceTime;

__attribute__((visibility("hidden")))
@interface SignpostSupportGraceTimeOverrideEntry : NSObject
{
    NSMutableDictionary *_overrides;
    unsigned long long _entryLevel;
    SignpostSupportAnimationGraceTime *_defaultGraceTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SignpostSupportAnimationGraceTime *defaultGraceTime; // @synthesize defaultGraceTime=_defaultGraceTime;
@property(readonly) unsigned long long entryLevel; // @synthesize entryLevel=_entryLevel;
@property(readonly, nonatomic) NSMutableDictionary *overrides; // @synthesize overrides=_overrides;
- (id)debugDescriptionWithWhitespacePrefix:(id)arg1;
- (id)debugDescription;
- (id)initWithEntryLevel:(unsigned long long)arg1;

@end


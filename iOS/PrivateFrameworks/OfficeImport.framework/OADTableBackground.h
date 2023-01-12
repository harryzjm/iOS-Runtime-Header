//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, OADFill;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject
{
    OADFill *mFill;
    NSArray *mEffects;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (void)setFill:(id)arg1;
- (id)fill;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


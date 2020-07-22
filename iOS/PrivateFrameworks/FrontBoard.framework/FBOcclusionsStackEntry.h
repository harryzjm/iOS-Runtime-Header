//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSSet, NSString;

@interface FBOcclusionsStackEntry : NSObject
{
    NSString *_key;
    double _level;
    NSSet *_occlusions;
    NSOrderedSet *_orderedOcclusions;
}

@property(readonly, copy, nonatomic) NSOrderedSet *orderedOcclusions; // @synthesize orderedOcclusions=_orderedOcclusions;
@property(nonatomic) double level; // @synthesize level=_level;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
@property(copy, nonatomic) NSSet *occlusions;
- (void)dealloc;
- (id)initWithKey:(id)arg1;

@end


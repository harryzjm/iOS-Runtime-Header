//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sleep/BSDescriptionProviding-Protocol.h>
#import <Sleep/NSCopying-Protocol.h>
#import <Sleep/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface HKSPChangeSet : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>
{
    NSMutableDictionary *_changeDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *changeDictionary; // @synthesize changeDictionary=_changeDictionary;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (id)originalValueForPropertyIdentifier:(id)arg1;
- (id)changedValueForPropertyIdentifier:(id)arg1;
- (_Bool)hasChangeForPropertyIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *changes;
- (void)applyChangeSet:(id)arg1;
- (void)removeAllChanges;
- (void)addChange:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChangeDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

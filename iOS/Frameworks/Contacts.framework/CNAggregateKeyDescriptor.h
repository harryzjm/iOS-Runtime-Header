//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactKeyVector, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAggregateKeyDescriptor : NSObject
{
    NSArray *_keyDescriptors;
    NSString *_privateDescription;
    CNContactKeyVector *_unauthorizedKeys;
}

+ (_Bool)supportsSecureCoding;
+ (id)keyDescriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactKeyVector *unauthorizedKeys; // @synthesize unauthorizedKeys=_unauthorizedKeys;
@property(copy, nonatomic) NSString *privateDescription; // @synthesize privateDescription=_privateDescription;
@property(copy, nonatomic) NSArray *keyDescriptors; // @synthesize keyDescriptors=_keyDescriptors;
- (void)_cn_setUnauthorizedKeys:(id)arg1;
- (id)_cn_unauthorizedKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (id)_cn_ignorableKeys;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)_cn_recursiveDescriptionWithPrefix:(id)arg1;
- (id)_recursiveDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyDescriptors:(id)arg1 description:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


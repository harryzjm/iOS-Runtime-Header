//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSMutableCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface BKSHIDEventDiscreteDispatchingPredicate : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSSet *_senderDescriptors;
    NSSet *_descriptors;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSSet *descriptors; // @synthesize descriptors=_descriptors;
@property(readonly, copy, nonatomic) NSSet *senderDescriptors; // @synthesize senderDescriptors=_senderDescriptors;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)containsDescriptor:(id)arg1;
- (_Bool)specifiesDescriptor:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *displays; // @dynamic displays;
- (id)_initWithSourceDescriptors:(id)arg1 descriptors:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

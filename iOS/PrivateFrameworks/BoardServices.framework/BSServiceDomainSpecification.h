//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding>
{
    NSString *_identifier;
    NSString *_machName;
    NSDictionary *_servicesByIdentifier;
    NSOrderedSet *_orderedServices;
}

@property(readonly, copy, nonatomic) NSOrderedSet *_orderedServices; // @synthesize _orderedServices;
@property(readonly, copy, nonatomic) NSString *machName; // @synthesize machName=_machName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_domainWithAdditionalServices:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 machName:(id)arg2 servicesByIdentifier:(id)arg3;
- (id)serviceForIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *services;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

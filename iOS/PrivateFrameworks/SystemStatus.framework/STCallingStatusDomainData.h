//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/NSSecureCoding-Protocol.h>
#import <SystemStatus/STStatusDomainData-Protocol.h>
#import <SystemStatus/STStatusDomainDataDifferencing-Protocol.h>

@class NSSet, NSString, STActivityAttributionCatalog;

@interface STCallingStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>
{
    STActivityAttributionCatalog *_attributionCatalog;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) STActivityAttributionCatalog *attributionCatalog; // @synthesize attributionCatalog=_attributionCatalog;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)diffFromData:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *ringingVideoConferenceAttributions;
@property(readonly, copy, nonatomic) NSSet *activeVideoConferenceAttributions;
@property(readonly, copy, nonatomic) NSSet *ringingCallAttributions;
@property(readonly, copy, nonatomic) NSSet *activeCallAttributions;
- (id)_initWithAttributionCatalog:(id)arg1;
- (id)initWithAttributionCatalog:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

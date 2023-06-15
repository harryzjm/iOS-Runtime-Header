//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload : HMFObject
{
    NSUUID *_modelIdentifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)payloadCopy;
- (id)initWithPayload:(id)arg1;
- (id)initWithModelIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


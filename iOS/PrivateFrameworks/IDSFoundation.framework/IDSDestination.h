//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSDestinationProtocol-Protocol.h>
#import <IDSFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)sentinelSelfAliasDestination;
+ (id)defaultPairedDeviceDestination;
+ (id)destinationWithGroup:(id)arg1;
+ (id)destinationWithStrings:(id)arg1;
+ (id)destinationWithURI:(id)arg1;
+ (id)destinationWithString:(id)arg1;
+ (id)destinationWithDestinations:(id)arg1;
+ (id)destinationWithAlias:(id)arg1 pushToken:(id)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDestination:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupID;
- (id)destinationURIs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

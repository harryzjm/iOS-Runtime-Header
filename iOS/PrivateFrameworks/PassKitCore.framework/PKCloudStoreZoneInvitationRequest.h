//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKCloudStoreZoneInvitation, PKSharingDestination;

@interface PKCloudStoreZoneInvitationRequest : NSObject <NSSecureCoding>
{
    PKCloudStoreZoneInvitation *_invitation;
    PKSharingDestination *_destination;
}

+ (_Bool)supportsSecureCoding;
+ (id)cloudStoreZoneInvitationRequestWithProtobuf:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PKSharingDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) PKCloudStoreZoneInvitation *invitation; // @synthesize invitation=_invitation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;

@end

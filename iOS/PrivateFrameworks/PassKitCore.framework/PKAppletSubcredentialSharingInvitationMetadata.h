//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding>
{
    _Bool _shouldRequestInvitation;
    NSString *_anonymizationSalt;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRequestInvitation; // @synthesize shouldRequestInvitation=_shouldRequestInvitation;
@property(retain, nonatomic) NSString *anonymizationSalt; // @synthesize anonymizationSalt=_anonymizationSalt;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSDestination.h"

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination
{
    IDSURI *_destinationURI;
    _Bool _isGuest;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isDeviceURI:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isGuest; // @synthesize isGuest=_isGuest;
@property(retain, nonatomic) IDSURI *destinationURI; // @synthesize destinationURI=_destinationURI;
- (id)destinationURIs;
- (_Bool)isDevice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURI:(id)arg1 isGuest:(_Bool)arg2;
- (id)initWithDeviceURI:(id)arg1;
- (id)initWithIDSDeviceURI:(id)arg1;
- (id)initWithRapportPublicIdentifierURI:(id)arg1;

@end


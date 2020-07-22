//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup
{
    NSSet *_addressBookHomes;
    NSSet *_directoryGatewayURLs;
}

@property(readonly, nonatomic) NSSet *directoryGatewayURLs; // @synthesize directoryGatewayURLs=_directoryGatewayURLs;
@property(readonly, nonatomic) NSSet *addressBookHomes; // @synthesize addressBookHomes=_addressBookHomes;
- (void).cxx_destruct;
- (id)directoryGatewayURL;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (id)description;

@end

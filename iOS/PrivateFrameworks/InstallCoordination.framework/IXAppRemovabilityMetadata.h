//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSCopying-Protocol.h>

@interface IXAppRemovabilityMetadata : NSObject <NSCopying>
{
    unsigned long long _removability;
    unsigned long long _client;
}

@property(readonly, nonatomic) unsigned long long client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned long long removability; // @synthesize removability=_removability;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithRemovability:(unsigned long long)arg1 client:(unsigned long long)arg2;

@end

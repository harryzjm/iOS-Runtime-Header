//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SIServiceDeviceUploadInfo : PBCodable
{
    _Bool _hasRef_id;
    _Bool _hasNs_relative_to_boot;
    NSString *_ref_id;
    unsigned long long _ns_relative_to_boot;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasNs_relative_to_boot; // @synthesize hasNs_relative_to_boot=_hasNs_relative_to_boot;
@property(nonatomic) unsigned long long ns_relative_to_boot; // @synthesize ns_relative_to_boot=_ns_relative_to_boot;
@property(nonatomic) _Bool hasRef_id; // @synthesize hasRef_id=_hasRef_id;
@property(copy, nonatomic) NSString *ref_id; // @synthesize ref_id=_ref_id;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end

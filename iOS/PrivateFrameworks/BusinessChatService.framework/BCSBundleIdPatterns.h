//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSBundleIdPatterns : PBCodable
{
    NSString *_bundleId;
    NSMutableArray *_urlPatterns;
}

+ (Class)urlPatternsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *urlPatterns; // @synthesize urlPatterns=_urlPatterns;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)urlPatternsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlPatternsCount;
- (void)addUrlPatterns:(id)arg1;
- (void)clearUrlPatterns;
@property(readonly, nonatomic) _Bool hasBundleId;

@end


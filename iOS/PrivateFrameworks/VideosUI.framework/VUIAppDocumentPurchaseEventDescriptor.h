//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPurchaseEventDescriptor
{
    NSString *_canonicalID;
}

@property(copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCanonicalID:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1;

@end

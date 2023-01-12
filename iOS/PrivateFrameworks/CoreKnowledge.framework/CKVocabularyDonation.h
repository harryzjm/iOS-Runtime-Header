//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class CKVOriginApp, NSArray;

@interface CKVocabularyDonation : NSObject <NSCopying, NSSecureCoding>
{
    CKVOriginApp *_originApp;
    NSArray *_serializedItems;
    long long _itemType;
}

+ (_Bool)supportsSecureCoding;
+ (id)builderWithOriginApp:(id)arg1 itemClass:(Class)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) NSArray *serializedItems; // @synthesize serializedItems=_serializedItems;
@property(readonly, nonatomic) CKVOriginApp *originApp; // @synthesize originApp=_originApp;
- (unsigned long long)hash;
- (_Bool)isEqualToDonation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithOriginApp:(id)arg1 serializedItems:(id)arg2 itemType:(long long)arg3;

@end

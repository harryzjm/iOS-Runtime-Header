//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class CKVPriorInfo, NSString;

@interface CKVRawSpeechProfileEntityMetadata : NSObject <NSCopying>
{
    unsigned long long _categoryIndex;
    NSString *_itemId;
    CKVPriorInfo *_priorInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKVPriorInfo *priorInfo; // @synthesize priorInfo=_priorInfo;
@property(readonly, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, nonatomic) unsigned long long categoryIndex; // @synthesize categoryIndex=_categoryIndex;
- (unsigned long long)hash;
- (_Bool)isEqualToRawSpeechProfileEntityMetadata:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCategoryIndex:(unsigned long long)arg1 itemId:(id)arg2 priorInfo:(id)arg3;

@end

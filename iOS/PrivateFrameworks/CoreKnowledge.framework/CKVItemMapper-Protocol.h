//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/NSObject-Protocol.h>

@class NSData, NSObject;
@protocol CKVocabularyItem;

@protocol CKVItemMapper <NSObject>
+ (NSData *)itemBufferFromExternalVocabularyItem:(NSObject<CKVocabularyItem> *)arg1 error:(id *)arg2;
+ (long long)targetItemType;
@end

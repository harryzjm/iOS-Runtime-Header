//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/NSObject-Protocol.h>

@class CKVRawSpeechProfileEntityMetadata, KVItem, NSArray, NSString;

@protocol CKVRawSpeechProfileConverter <NSObject>
- (KVItem *)vocabularyItemFromSpeechWords:(NSArray *)arg1 metadata:(CKVRawSpeechProfileEntityMetadata *)arg2 speechNamespace:(NSString *)arg3 error:(id *)arg4;
- (NSString *)speechCategoryId;
@end


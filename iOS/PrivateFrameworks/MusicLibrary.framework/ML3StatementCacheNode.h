//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface ML3StatementCacheNode : NSObject
{
    NSObject<NSCopying> *_dictionaryKey;
    ML3StatementCacheNode *_next;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ML3StatementCacheNode *next; // @synthesize next=_next;
@property(copy, nonatomic) NSObject<NSCopying> *dictionaryKey; // @synthesize dictionaryKey=_dictionaryKey;
- (id)description;
- (id)initWithDictionaryKey:(id)arg1;

@end


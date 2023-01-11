//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TILRUDictionaryNode : NSObject
{
    id _key;
    id _object;
    TILRUDictionaryNode *next;
    TILRUDictionaryNode *prev;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end


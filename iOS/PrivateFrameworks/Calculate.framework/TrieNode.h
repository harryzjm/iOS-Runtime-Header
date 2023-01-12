//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TrieNode : NSObject
{
    NSMutableDictionary *_childNodes;
    id _object;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) NSMutableDictionary *childNodes; // @synthesize childNodes=_childNodes;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 create:(_Bool)arg2;
- (id)init;

@end


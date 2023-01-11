//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol SXJSONObjectMergerClassProviding;

@interface SXJSONObjectMerger : NSObject
{
    id <SXJSONObjectMergerClassProviding> _classProvider;
    NSArray *_exclusionKeys;
    NSMutableDictionary *_transformers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *transformers; // @synthesize transformers=_transformers;
@property(readonly, nonatomic) NSArray *exclusionKeys; // @synthesize exclusionKeys=_exclusionKeys;
@property(readonly, nonatomic) id <SXJSONObjectMergerClassProviding> classProvider; // @synthesize classProvider=_classProvider;
- (id)replaceLastKeyOfKeyPath:(id)arg1 withKey:(id)arg2;
- (id)appendKey:(id)arg1 keyPath:(id)arg2;
- (void)transformObject:(id)arg1 otherObject:(id)arg2 transformer:(id)arg3 key:(id)arg4 keyPath:(id)arg5 dictionary:(id)arg6;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2 keyPath:(id)arg3;
- (void)removeTransformerForKeyPath:(id)arg1;
- (void)addTransformer:(id)arg1 keyPath:(id)arg2;
- (id)mergeObjects:(id)arg1;
- (id)initWithClassProvider:(id)arg1 exclusionKeys:(id)arg2;
- (id)initWithObjectClass:(Class)arg1 exclusionKeys:(id)arg2;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFInvertedIndex, NSBundle, NSLock;

@interface EMFIndexManager : NSObject
{
    NSBundle *_searchEngineBundle;
    NSLock *_defaultIndexLock;
    NSLock *_stemmedIndexLock;
    _Bool _triedLoadingDefaultIndex;
    _Bool _triedLoadingStemmedIndex;
    EMFInvertedIndex *_defaultIndex;
    EMFInvertedIndex *_stemmedIndex;
}

- (void).cxx_destruct;
@property(copy, nonatomic) EMFInvertedIndex *stemmedIndex; // @synthesize stemmedIndex=_stemmedIndex;
@property(copy, nonatomic) EMFInvertedIndex *defaultIndex; // @synthesize defaultIndex=_defaultIndex;
- (void)preheatIndexes;
- (id)initWithBundle:(id)arg1;

@end

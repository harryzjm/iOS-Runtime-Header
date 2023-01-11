//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSPMutableLargeDictionarySegmentDelegate-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSPAbstractMutableLargeDictionary <TSPMutableLargeDictionarySegmentDelegate>
{
    unsigned long long _maxSegmentObjectCount;
    unsigned long long _maxSegmentSize;
    unsigned long long _count;
    NSMutableArray *_segments;
    vector_b5e32e34 _segmentRanges;
    long long _bisectedSegmentIdentifier;
    unsigned long long _bisectedSegmentIndex;
    unsigned long long _mergingSegmentIndex;
    _Bool _shouldDelayArchiving;
    unsigned int _delayedArchivingPriority;
    _Bool _storeOutsideObjectArchive;
}

+ (unsigned long long)hashForKey:(id)arg1;
+ (Class)dictionarySegmentClass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadFromLargeDictionaryMessage:(const struct LargeDictionary *)arg1 unarchiver:(id)arg2;
- (void)saveToLargeDictionaryMessage:(struct LargeDictionary *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) unsigned int delayedArchivingPriority;
@property(nonatomic) unsigned long long maxSegmentSize;
- (void)setMaxSegmentSize:(unsigned long long)arg1 willModify:(_Bool)arg2;
@property(nonatomic) unsigned long long maxSegmentObjectCount;
- (void)setMaxSegmentObjectCount:(unsigned long long)arg1 willModify:(_Bool)arg2;
- (id)segmentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long segmentCount;
- (id)segmentRanges;
- (void)removeLastRange;
- (void)addRange:(struct _NSRange)arg1;
- (void)insertRange:(struct _NSRange)arg1 atSegmentIndex:(unsigned long long)arg2;
- (void)removeRangeAtSegmentIndex:(unsigned long long)arg1;
- (void)setRange:(struct _NSRange)arg1 forSegmentIndex:(unsigned long long)arg2;
- (struct _NSRange)lastRange;
- (struct _NSRange)rangeOfSegmentIndex:(unsigned long long)arg1;
- (unsigned long long)segmentIndexForKeyHash:(unsigned long long)arg1;
- (unsigned long long)segmentIndexForKeyHash:(unsigned long long)arg1 firstSegmentIndex:(unsigned long long)arg2 lastSegmentIndex:(unsigned long long)arg3 segmentIndexGuess:(unsigned long long)arg4;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)largeDictionarySegmentDidBisectAtHash:(unsigned long long)arg1 segments:(id)arg2;
- (void)mergeSegmentIfNeededAtIndex:(unsigned long long)arg1;
- (void)bisectSegmentIfNeeded:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(readonly) unsigned long long count;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (id)initWithContext:(id)arg1 shouldDelayArchiving:(_Bool)arg2 delayedArchivingPriority:(unsigned int)arg3 storeOutsideObjectArchive:(_Bool)arg4;
- (id)initWithContext:(id)arg1 shouldDelayArchiving:(_Bool)arg2 storeOutsideObjectArchive:(_Bool)arg3;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)commonInit;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3 context:(id)arg4;
@property(readonly, nonatomic) _Bool hasMaxSegmentSize;
@property(readonly, nonatomic) _Bool hasMaxSegmentObjectCount;
@property(readonly, nonatomic) _Bool hasDelayedArchivingPriority;
- (id)createDictionarySegment;
- (id)convertObjectToSegmentObject:(id)arg1;
- (id)convertSegmentObjectToObject:(id)arg1;
@property(nonatomic) _Bool storeOutsideObjectArchive;
@property(nonatomic) _Bool shouldDelayArchiving;

@end


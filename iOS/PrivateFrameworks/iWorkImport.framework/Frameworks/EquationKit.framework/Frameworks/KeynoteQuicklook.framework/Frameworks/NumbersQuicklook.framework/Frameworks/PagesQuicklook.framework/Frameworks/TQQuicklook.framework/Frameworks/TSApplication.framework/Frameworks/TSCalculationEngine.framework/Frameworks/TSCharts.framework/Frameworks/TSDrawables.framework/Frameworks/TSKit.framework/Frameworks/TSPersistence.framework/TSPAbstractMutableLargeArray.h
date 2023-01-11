//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/NSFastEnumeration-Protocol.h>
#import <TSPersistence/TSPMutableLargeArraySegmentDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface TSPAbstractMutableLargeArray <NSFastEnumeration, TSPMutableLargeArraySegmentDelegate>
{
    unsigned long long _mutations;
    unsigned long long _maxSegmentElementCount;
    unsigned long long _maxSegmentSize;
    NSMutableArray *_segments;
    struct vector<_NSRange, std::__1::allocator<_NSRange>> _segmentRanges;
    long long _bisectedSegmentIdentifier;
    unsigned long long _bisectedSegmentIndex;
    unsigned long long _mergingSegmentIndex;
    _Bool _shouldDelayArchiving;
    unsigned int _delayedArchivingPriority;
    _Bool _storeOutsideObjectArchive;
    unsigned long long _estimatedByteSize;
}

+ (Class)arraySegmentClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long estimatedByteSize; // @synthesize estimatedByteSize=_estimatedByteSize;
- (void)loadFromLargeArrayMessage:(const struct LargeArray *)arg1 unarchiver:(id)arg2;
- (void)saveToLargeArrayMessage:(struct LargeArray *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) unsigned int delayedArchivingPriority;
- (id)peek;
- (id)pop;
- (void)push:(id)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (void)updateSegmentRangesAfterIndex:(unsigned long long)arg1;
- (id)segmentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSMutableArray *mutableArrayWrapper;
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) _Bool disableSegmentation;
@property(nonatomic) unsigned long long maxSegmentSize;
- (void)setMaxSegmentSize:(unsigned long long)arg1 willModify:(_Bool)arg2;
@property(nonatomic) unsigned long long maxSegmentElementCount;
- (void)largeArraySegmentDidBisectAtIndex:(unsigned long long)arg1 segments:(id)arg2;
- (void)mergeSegmentIfNeededAtIndex:(unsigned long long)arg1;
- (void)bisectSegmentIfNeeded:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)lastObject;
- (id)firstObject;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)removeAllObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
- (id)segmentRanges;
- (void)removeLastRange;
- (void)addRange:(struct _NSRange)arg1;
- (void)insertRange:(struct _NSRange)arg1 atSegmentIndex:(unsigned long long)arg2;
- (void)removeRangeAtSegmentIndex:(unsigned long long)arg1;
- (void)setRange:(struct _NSRange)arg1 forSegmentIndex:(unsigned long long)arg2;
- (struct _NSRange)lastRange;
- (struct _NSRange)rangeOfSegmentIndex:(unsigned long long)arg1;
- (unsigned long long)segmentIndexForElementIndex:(unsigned long long)arg1 segmentIndexGuess:(unsigned long long)arg2;
- (unsigned long long)segmentIndexForElementIndex:(unsigned long long)arg1 firstSegmentIndex:(unsigned long long)arg2 lastSegmentIndex:(unsigned long long)arg3 segmentIndexGuess:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned long long segmentCount;
- (unsigned long long)elementCount;
- (id)initWithContext:(id)arg1 shouldDelayArchiving:(_Bool)arg2 delayedArchivingPriority:(unsigned int)arg3 storeOutsideObjectArchive:(_Bool)arg4;
- (id)initWithContext:(id)arg1 shouldDelayArchiving:(_Bool)arg2 storeOutsideObjectArchive:(_Bool)arg3;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)commonInit;
- (id)initWithArray:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) _Bool hasMaxSegmentSize;
@property(readonly, nonatomic) _Bool hasMaxSegmentElementCount;
- (void)setMaxSegmentElementCount:(unsigned long long)arg1 willModify:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasDelayedArchivingPriority;
@property(readonly, nonatomic) NSString *packageLocatorForSegments;
- (id)createArraySegment;
- (id)convertElementToSegmentElement:(id)arg1;
- (id)convertSegmentElementToElement:(id)arg1;
@property(nonatomic) _Bool storeOutsideObjectArchive;
@property(nonatomic) _Bool shouldDelayArchiving;

@end

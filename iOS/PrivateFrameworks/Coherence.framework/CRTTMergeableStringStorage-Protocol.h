//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CRTTMergeableStringStorage;

@protocol CRTTMergeableStringStorage
- (id)cr_emptyCopy;
- (id)cr_storageFromRange:(struct _NSRange)arg1;
- (void)cr_mergeAttributesInRange:(struct _NSRange)arg1 withStorage:(id <CRTTMergeableStringStorage>)arg2 fromRange:(struct _NSRange)arg3;
- (void)cr_replaceStorageInRange:(struct _NSRange)arg1 withStorage:(id <CRTTMergeableStringStorage>)arg2 fromRange:(struct _NSRange)arg3;
- (void)cr_appendStorage:(id <CRTTMergeableStringStorage>)arg1 fromRange:(struct _NSRange)arg2;
- (void)cr_insertStorage:(id <CRTTMergeableStringStorage>)arg1 atIndex:(unsigned long long)arg2;
- (void)cr_removeObjectsInRange:(struct _NSRange)arg1;
@property(nonatomic, readonly) long long length;
- (id)mutableCopy;
@end


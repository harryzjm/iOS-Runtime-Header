//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (TSPSerialization)
- (void)tsp_skipArchivingObjectDuringSerialization:(id)arg1;
- (void)tsp_delayArchivingObjectDuringSerialization:(id)arg1;
- (void)tsp_addObject:(id)arg1 toArrayWithSerializationOptionKey:(id)arg2;
- (void)tsp_setSerializationObjectProxy:(id)arg1 forReferencedObject:(id)arg2;
- (void)tsp_skipArchivingObjectDuringDeepCopy:(id)arg1;
- (void)tsp_delayArchivingObjectDuringDeepCopy:(id)arg1;
- (void)tsp_addObject:(id)arg1 toArrayWithDeepCopyOptionKey:(id)arg2;
- (void)tsp_setDeepCopyObjectProxy:(id)arg1 forReferencedObject:(id)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject
{
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}

- (void).cxx_destruct;
- (void)applyProcessorsWithSheet:(id)arg1;
- (void)markObject:(id)arg1 processor:(Class)arg2;
- (void)removeAllObjects;
- (void)removeProcessorClass:(Class)arg1;
- (_Bool)hasProcessors;
- (void)addProcessorClass:(Class)arg1;
- (id)initWithWorkbook:(id)arg1;

@end


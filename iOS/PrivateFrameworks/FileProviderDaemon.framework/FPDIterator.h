//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPDIterator : NSObject
{
    _Bool _skipMaterializedTreeTraversal;
    _Bool _shouldDecorateItems;
    NSError *_error;
}

+ (id)hybridIteratorForItem:(id)arg1 domain:(id)arg2 enforceFPItem:(_Bool)arg3;
+ (id)iteratorForLocator:(id)arg1 wantsDisk:(_Bool)arg2 provider:(id)arg3;
+ (id)iteratorForLocator:(id)arg1 provider:(id)arg2;
+ (id)iteratorForLocator:(id)arg1 manager:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDecorateItems; // @synthesize shouldDecorateItems=_shouldDecorateItems;
@property(nonatomic) _Bool skipMaterializedTreeTraversal; // @synthesize skipMaterializedTreeTraversal=_skipMaterializedTreeTraversal;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long numFoldersPopped;
@property(readonly, nonatomic) _Bool done;
- (id)nextItem;
- (id)nextWithError:(id *)arg1;

@end


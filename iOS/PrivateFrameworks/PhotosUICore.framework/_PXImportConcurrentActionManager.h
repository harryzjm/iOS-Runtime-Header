//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _PXImportConcurrentActionManager : NSObject
{
    NSMutableArray *_operations;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface IXAppInstallObjectsMetadata : NSObject
{
    unsigned long long _count;
    NSHashTable *_instances;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *instances; // @synthesize instances=_instances;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)addObject:(id)arg1;
- (id)init;

@end


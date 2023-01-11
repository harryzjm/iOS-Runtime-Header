//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RMMetadataStore : NSObject
{
    NSMutableDictionary *__kvStore;
}

+ (void)removeValueForKey:(id)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (id)dateValueForKey:(id)arg1;
+ (id)dataValueForKey:(id)arg1;
+ (id)dictValueForKey:(id)arg1;
+ (id)stringValueForKey:(id)arg1;
+ (void)clear;
+ (void)refresh;
+ (id)sharedStore;
@property(retain, nonatomic) NSMutableDictionary *_kvStore; // @synthesize _kvStore=__kvStore;
- (void).cxx_destruct;
- (_Bool)writeMetadataWithError:(id *)arg1;
- (_Bool)readMetadataWithError:(id *)arg1;
- (id)metadataFilePath;

@end

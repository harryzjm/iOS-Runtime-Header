//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFAdjustmentSerialization : NSObject
{
}

+ (id)deserializeDictionaryFromData:(id)arg1 error:(id *)arg2;
+ (id)serializeDictionary:(id)arg1 error:(id *)arg2;
+ (id)deserializeAdjustmentsFromData:(id)arg1 error:(id *)arg2;
+ (id)serializeAdjustments:(id)arg1 error:(id *)arg2;
+ (_Bool)validateValue:(id)arg1 isOfType:(Class)arg2 errors:(id)arg3;
+ (_Bool)validateArchive:(id)arg1 containsEntryWithKey:(id)arg2 ofType:(Class)arg3 errors:(id)arg4;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TSPLazyReferenceArray;

@interface TSPKnownFieldReferencesHelper : NSObject
{
    struct RepeatedField<long long> _objectReferences;
    struct RepeatedField<long long> _dataReferences;
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
    NSArray *_datas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)processFieldsFromMessage:(const struct Message *)arg1 messageDescriptor:(const struct Descriptor *)arg2 reflection:(const struct Reflection *)arg3;
- (void)processFieldDescriptor:(const struct FieldDescriptor *)arg1 message:(const struct Message *)arg2 reflection:(const struct Reflection *)arg3;
- (id)initWithFieldDescriptor:(const struct FieldDescriptor *)arg1 message:(const struct Message *)arg2 reflection:(const struct Reflection *)arg3;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSPKnownFieldReferencesHelper;

@interface TSPKnownFieldRepeatedMessage
{
    TSPKnownFieldReferencesHelper *_referencesHelper;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithFieldDescriptor:(const void *)arg1 fieldInfo:(const void *)arg2 message:(const struct Message *)arg3 reflection:(const struct Reflection *)arg4;

@end


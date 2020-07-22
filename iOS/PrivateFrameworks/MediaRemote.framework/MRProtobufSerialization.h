//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MRProtobufSerialization : NSObject
{
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
    NSDictionary *_dictionaryKeyToProtobufKeyMapping;
    Class _protobufClass;
    CDUnknownBlockType _dictionaryValueToProtobufValueTransformer;
    CDUnknownBlockType _protobufValueToDictionaryValueTransformer;
}

@property(copy, nonatomic) CDUnknownBlockType protobufValueToDictionaryValueTransformer; // @synthesize protobufValueToDictionaryValueTransformer=_protobufValueToDictionaryValueTransformer;
@property(copy, nonatomic) CDUnknownBlockType dictionaryValueToProtobufValueTransformer; // @synthesize dictionaryValueToProtobufValueTransformer=_dictionaryValueToProtobufValueTransformer;
@property(retain, nonatomic) Class protobufClass; // @synthesize protobufClass=_protobufClass;
@property(copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping; // @synthesize dictionaryKeyToProtobufKeyMapping=_dictionaryKeyToProtobufKeyMapping;
- (void).cxx_destruct;
- (id)createProtobufFromDictionary:(id)arg1;
- (id)createDictionaryFromProtobuf:(id)arg1;

@end


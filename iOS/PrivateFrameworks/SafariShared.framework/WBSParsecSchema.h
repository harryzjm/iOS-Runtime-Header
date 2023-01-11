//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface WBSParsecSchema : NSObject
{
    _Bool _optional;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _specializedSchemaBlock;
    Class _expectedClass;
    NSError *_associatedError;
}

+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2;
+ (id)schemaWithExpectedClass:(Class)arg1;
+ (id)schemaForDictionaryWithStructure:(id)arg1;
+ (id)schemaForArrayWithElementSchema:(id)arg1;
+ (id)schemaWithConstantValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *associatedError; // @synthesize associatedError=_associatedError;
@property(retain, nonatomic) Class expectedClass; // @synthesize expectedClass=_expectedClass;
@property(nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(copy, nonatomic) CDUnknownBlockType specializedSchemaBlock; // @synthesize specializedSchemaBlock=_specializedSchemaBlock;
@property(copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
- (_Bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)validateObject:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (id)_initWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;

@end

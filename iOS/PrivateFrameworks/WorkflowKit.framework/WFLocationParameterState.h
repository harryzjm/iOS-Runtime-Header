//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFLocationParameterState
{
}

+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (Class)processingValueClass;
- (void)getContentItemFromValue:(id)arg1 withContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getContentCollectionWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)initWithValue:(id)arg1;

@end

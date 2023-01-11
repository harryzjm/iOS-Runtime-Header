//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class NSString, WFVariable;
@protocol NSObject;

@interface WFVariableSubstitutableParameterState : NSObject <WFParameterState>
{
    id <NSObject> _value;
    WFVariable *_variable;
}

+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (id)processingValueClasses;
+ (Class)processingValueClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
@property(readonly, nonatomic) id <NSObject> value; // @synthesize value=_value;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)willProcessToSameValue:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)containedVariables;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithVariable:(id)arg1;
- (id)initWithValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

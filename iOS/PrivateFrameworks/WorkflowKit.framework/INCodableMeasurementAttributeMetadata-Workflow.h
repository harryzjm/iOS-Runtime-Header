//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableMeasurementAttributeMetadata.h>

@class NSString;

@interface INCodableMeasurementAttributeMetadata (Workflow)
- (void)wf_updateWithParameterValue:(id)arg1;
- (void)wf_updateWithParameterState:(id)arg1;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (_Bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;
- (Class)wf_parameterClass;
- (Class)wf_objectClass;
@property(readonly, nonatomic) NSString *wf_measurementType;
@end


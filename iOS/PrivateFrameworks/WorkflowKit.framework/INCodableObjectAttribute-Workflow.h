//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableObjectAttribute.h>

@interface INCodableObjectAttribute (Workflow)
- (id)mediaTypeFromIntentMediaType:(long long)arg1;
- (id)wf_processedParameterValueForValue:(id)arg1;
- (id)wf_contentItemForValue:(id)arg1;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;
- (Class)wf_parameterClass;
- (Class)wf_objectClass;
- (Class)wf_facadeClass;
@end


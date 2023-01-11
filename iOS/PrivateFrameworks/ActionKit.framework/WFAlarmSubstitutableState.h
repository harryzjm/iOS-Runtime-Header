//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class NSString, SAAlarmObject;

@interface WFAlarmSubstitutableState : WFVariableSubstitutableParameterState
{
    NSString *_localizedTime;
}

+ (void)searchForAlarms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)alarmWithIdentifier:(id)arg1 label:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)localizedTimeForAlarm:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (Class)processingValueClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedTime; // @synthesize localizedTime=_localizedTime;
- (_Bool)willProcessToSameValue:(id)arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SAAlarmObject *value; // @dynamic value;

@end

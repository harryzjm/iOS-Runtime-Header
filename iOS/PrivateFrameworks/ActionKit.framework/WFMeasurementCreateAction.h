//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFMeasurementCreateAction : WFAction
{
}

- (id)currentUnitTypeState;
- (id)unitParameter;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)initializeParameters;
- (id)currentValue;
- (id)currentUnit;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

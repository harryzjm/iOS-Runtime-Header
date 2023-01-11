//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFArrayParameter, WFArrayParameterState;

@interface WFArrayParameterComponent
{
    WFArrayParameterState *_state;
    WFArrayParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (_Bool)standaloneVariablesAsContentItems;
+ (Class)stateClass;
- (void).cxx_destruct;
- (CDUnknownBlockType)updateBlock;
@property(readonly, nonatomic) __weak WFArrayParameter *parameter; // @synthesize parameter=_parameter;
- (void)arrayEditor:(id)arg1 confirmDeletion:(id)arg2;
- (void)notifyParameterObserverWithValues:(id)arg1 updateItem:(id)arg2;

@end

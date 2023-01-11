//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INIntentExecutionInfo;

@interface WFIntentResultUIAvailableResource
{
    _Bool _eligibleForWidgets;
    _Bool _hasSuccessResponseWithDialog;
    INIntentExecutionInfo *_executionInfo;
}

+ (_Bool)mustBeAvailableForDisplay;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasSuccessResponseWithDialog; // @synthesize hasSuccessResponseWithDialog=_hasSuccessResponseWithDialog;
@property(readonly, nonatomic, getter=isEligibleForWidgets) _Bool eligibleForWidgets; // @synthesize eligibleForWidgets=_eligibleForWidgets;
@property(readonly, nonatomic) INIntentExecutionInfo *executionInfo; // @synthesize executionInfo=_executionInfo;
- (void)refreshAvailability;
- (id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isEligibleForWidgets:(_Bool)arg3 hasSuccessResponseWithDialog:(_Bool)arg4;
- (id)initWithDefinition:(id)arg1;

@end

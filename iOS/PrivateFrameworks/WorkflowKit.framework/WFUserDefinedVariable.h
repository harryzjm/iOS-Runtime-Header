//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable
{
    id <WFVariableProvider> _variableProvider;
}

- (id)variableProvider;
- (void).cxx_destruct;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)possibleContentClassesWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)UUID;
- (_Bool)requiresModernVariableSupport;
- (_Bool)isAvailable;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;

@end

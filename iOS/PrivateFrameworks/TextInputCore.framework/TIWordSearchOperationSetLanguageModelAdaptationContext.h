//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TILanguageModelAdaptationContext, TIMecabraWrapper;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext
{
    TIMecabraWrapper *_mecabraWrapper;
    TILanguageModelAdaptationContext *_adaptationContext;
}

@property(copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // @synthesize adaptationContext=_adaptationContext;
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void).cxx_destruct;
- (void)perform;
- (void)cancel;
- (id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2;

@end


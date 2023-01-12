//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAFilter, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectFilterEntry : NSObject
{
    CAFilter *_filter;
    _Bool _useRelaxedDiffingRule;
    NSString *_filterType;
    NSDictionary *_configurationValues;
    NSDictionary *_requestedValues;
    NSDictionary *_identityValues;
    double _requestedScaleHint;
    double _identityScaleHint;
    NSString *_filterName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(nonatomic) _Bool useRelaxedDiffingRule; // @synthesize useRelaxedDiffingRule=_useRelaxedDiffingRule;
@property(nonatomic) double identityScaleHint; // @synthesize identityScaleHint=_identityScaleHint;
@property(nonatomic) double requestedScaleHint; // @synthesize requestedScaleHint=_requestedScaleHint;
@property(copy, nonatomic) NSDictionary *identityValues; // @synthesize identityValues=_identityValues;
@property(copy, nonatomic) NSDictionary *requestedValues; // @synthesize requestedValues=_requestedValues;
@property(copy, nonatomic) NSDictionary *configurationValues; // @synthesize configurationValues=_configurationValues;
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
@property(readonly, copy) NSString *description;
- (void)forceUniqueName;
- (void)convertToIdentity;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)scaleHintAsRequested:(_Bool)arg1;
- (id)valueAsRequested:(_Bool)arg1;
@property(readonly, nonatomic) CAFilter *filter;
- (id)initWithFilterType:(id)arg1 configurationValues:(id)arg2 requestedValues:(id)arg3 identityValues:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


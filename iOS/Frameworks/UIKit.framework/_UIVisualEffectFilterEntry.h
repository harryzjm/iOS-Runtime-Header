//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIVisualEffectDiffable-Protocol.h>

@class CAFilter, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable>
{
    CAFilter *_filter;
    NSDictionary *_requestedValues;
    NSDictionary *_identityValues;
    double _requestedScaleHint;
    double _identityScaleHint;
}

@property(nonatomic) double identityScaleHint; // @synthesize identityScaleHint=_identityScaleHint;
@property(nonatomic) double requestedScaleHint; // @synthesize requestedScaleHint=_requestedScaleHint;
@property(copy, nonatomic) NSDictionary *identityValues; // @synthesize identityValues=_identityValues;
@property(copy, nonatomic) NSDictionary *requestedValues; // @synthesize requestedValues=_requestedValues;
@property(retain, nonatomic) CAFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)scaleHintAsRequested:(_Bool)arg1;
- (id)valueAsRequested:(_Bool)arg1;
- (id)initWithFilter:(id)arg1 requestedValues:(id)arg2 identityValues:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


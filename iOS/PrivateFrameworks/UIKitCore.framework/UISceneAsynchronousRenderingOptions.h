//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface UISceneAsynchronousRenderingOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSArray *_renderTimes;
    double _renderPeriod;
    float _renderMaxAPL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float renderMaxAPL; // @synthesize renderMaxAPL=_renderMaxAPL;
@property(readonly, nonatomic) double renderPeriod; // @synthesize renderPeriod=_renderPeriod;
@property(readonly, copy, nonatomic) NSArray *renderTimes; // @synthesize renderTimes=_renderTimes;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

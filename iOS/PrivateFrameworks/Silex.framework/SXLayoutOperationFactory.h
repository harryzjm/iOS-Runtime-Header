//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutOperationFactory-Protocol.h>

@class NSString;
@protocol SXComponentSizerEngine, SXLayoutBlueprintFactory;

@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory>
{
    id <SXComponentSizerEngine> _componentSizerEngine;
    id <SXLayoutBlueprintFactory> _layoutBlueprintFactory;
}

@property(readonly, nonatomic) id <SXLayoutBlueprintFactory> layoutBlueprintFactory; // @synthesize layoutBlueprintFactory=_layoutBlueprintFactory;
@property(readonly, nonatomic) id <SXComponentSizerEngine> componentSizerEngine; // @synthesize componentSizerEngine=_componentSizerEngine;
- (void).cxx_destruct;
- (id)layoutOperationWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3;
- (id)initWithComponentSizerEngine:(id)arg1 layoutBlueprintFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

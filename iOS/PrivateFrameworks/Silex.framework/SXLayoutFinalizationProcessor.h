//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutProcessor-Protocol.h>

@class NSString;
@protocol SXUnitConverterFactory;

@interface SXLayoutFinalizationProcessor : NSObject <SXLayoutProcessor>
{
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
- (void).cxx_destruct;
- (void)finalizeLayoutBlueprint:(id)arg1 origin:(struct CGPoint)arg2 absoluteOrigin:(struct CGPoint)arg3;
- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;
- (id)initWithUnitConverterFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

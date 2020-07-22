//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesAxisAnnotation-Protocol.h>

@class NSMapTable, NSString;

@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation>
{
    _Bool _clearedPreviousAnnotations;
    NSMapTable *_seriesToAnnotations;
}

@property(nonatomic) _Bool clearedPreviousAnnotations; // @synthesize clearedPreviousAnnotations=_clearedPreviousAnnotations;
@property(retain, nonatomic) NSMapTable *seriesToAnnotations; // @synthesize seriesToAnnotations=_seriesToAnnotations;
- (void).cxx_destruct;
- (void)clearAxisAnnotations;
- (_Bool)applyAnnotationForSeries:(id)arg1 commonAxes:(id)arg2;
- (void)addAxisAnnotation:(id)arg1 forSeries:(id)arg2 textColor:(id)arg3 modelCoordinate:(id)arg4;
- (void)startAnnotationSequence;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

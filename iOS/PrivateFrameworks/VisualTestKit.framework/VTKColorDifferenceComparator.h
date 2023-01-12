//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VTKColorDifferenceStrategy;

__attribute__((visibility("hidden")))
@interface VTKColorDifferenceComparator : NSObject
{
    id <VTKColorDifferenceStrategy> _strategy;
    unsigned long long _comparisonOptions;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long comparisonOptions; // @synthesize comparisonOptions=_comparisonOptions;
@property(retain, nonatomic) id <VTKColorDifferenceStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, copy) NSString *description;
- (_Bool)_downscalesImages;
- (_Bool)_drawAAInResults;
- (_Bool)_ignoreAAInResults;
- (_Bool)_strategySupportsAA;
- (_Bool)_checkForAA;
- (id)compareImage:(id)arg1 withImage:(id)arg2;
- (id)initWithStrategy:(id)arg1 comparisonOptions:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


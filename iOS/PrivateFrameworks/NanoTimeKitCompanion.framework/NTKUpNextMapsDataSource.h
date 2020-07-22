//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKUpNextElementDataSource;

@interface NTKUpNextMapsDataSource
{
    NTKUpNextElementDataSource *_proxy;
}

+ (_Bool)wantsReloadForSignificantTimeChange;
+ (id)sampleContentElements;
+ (id)_homeCommuteElementWithDate:(id)arg1 headerTextProvider:(id)arg2 descriptionTextProvider:(id)arg3;
+ (id)bundleIdentifier;
- (void).cxx_destruct;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (void)resume;
- (void)pause;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)setState:(unsigned long long)arg1;
- (void)setRunning:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) NTKUpNextElementDataSource *proxy; // @synthesize proxy=_proxy;

@end


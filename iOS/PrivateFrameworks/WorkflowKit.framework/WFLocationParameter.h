//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFLocationParameter
{
    _Bool _allowsTextOnlyLocations;
    _Bool _allowsCurrentLocation;
    _Bool _skipsProcessingCurrentLocation;
    _Bool _defaultToCurrentLocation;
}

@property(readonly, nonatomic) _Bool defaultToCurrentLocation; // @synthesize defaultToCurrentLocation=_defaultToCurrentLocation;
@property(readonly, nonatomic) _Bool skipsProcessingCurrentLocation; // @synthesize skipsProcessingCurrentLocation=_skipsProcessingCurrentLocation;
@property(readonly, nonatomic) _Bool allowsCurrentLocation; // @synthesize allowsCurrentLocation=_allowsCurrentLocation;
@property(readonly, nonatomic) _Bool allowsTextOnlyLocations; // @synthesize allowsTextOnlyLocations=_allowsTextOnlyLocations;
- (id)defaultSerializedRepresentation;
@property(readonly, nonatomic) double currentLocationAccuracy;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

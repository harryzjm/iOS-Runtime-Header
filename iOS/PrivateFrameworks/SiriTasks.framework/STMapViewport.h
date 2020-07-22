//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/STSiriModelObject.h>

@class NSArray;

@interface STMapViewport : STSiriModelObject
{
    double _northLatitude;
    double _southLatitude;
    double _eastLongitude;
    double _westLongitude;
    double _timeSinceViewportChanged;
    double _timeSinceViewportEnteredForeground;
    NSArray *_viewportVertices;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *viewportVertices; // @synthesize viewportVertices=_viewportVertices;
@property(nonatomic) double timeSinceViewportEnteredForeground; // @synthesize timeSinceViewportEnteredForeground=_timeSinceViewportEnteredForeground;
@property(nonatomic) double timeSinceViewportChanged; // @synthesize timeSinceViewportChanged=_timeSinceViewportChanged;
@property(nonatomic) double westLongitude; // @synthesize westLongitude=_westLongitude;
@property(nonatomic) double eastLongitude; // @synthesize eastLongitude=_eastLongitude;
@property(nonatomic) double southLatitude; // @synthesize southLatitude=_southLatitude;
@property(nonatomic) double northLatitude; // @synthesize northLatitude=_northLatitude;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_aceContextObjectValue;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapsDestinationsWidget, GEOMapsNearbyWidget, GEOMapsTransitWidget;

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying>
{
    int _duration;
    int _endState;
    int _localDayOfWeek;
    int _localHour;
    GEOMapsDestinationsWidget *_mapsDestinationsWidget;
    GEOMapsNearbyWidget *_mapsNearbyWidget;
    GEOMapsTransitWidget *_mapsTransitWidget;
    int _mapsWidgetType;
    _Bool _lockedMode;
    struct {
        unsigned int duration:1;
        unsigned int endState:1;
        unsigned int localDayOfWeek:1;
        unsigned int localHour:1;
        unsigned int mapsWidgetType:1;
        unsigned int lockedMode:1;
    } _has;
}

@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int localDayOfWeek; // @synthesize localDayOfWeek=_localDayOfWeek;
@property(nonatomic) int localHour; // @synthesize localHour=_localHour;
@property(nonatomic) _Bool lockedMode; // @synthesize lockedMode=_lockedMode;
@property(retain, nonatomic) GEOMapsNearbyWidget *mapsNearbyWidget; // @synthesize mapsNearbyWidget=_mapsNearbyWidget;
@property(retain, nonatomic) GEOMapsTransitWidget *mapsTransitWidget; // @synthesize mapsTransitWidget=_mapsTransitWidget;
@property(retain, nonatomic) GEOMapsDestinationsWidget *mapsDestinationsWidget; // @synthesize mapsDestinationsWidget=_mapsDestinationsWidget;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasLocalDayOfWeek;
@property(nonatomic) _Bool hasLocalHour;
@property(nonatomic) _Bool hasLockedMode;
@property(readonly, nonatomic) _Bool hasMapsNearbyWidget;
@property(readonly, nonatomic) _Bool hasMapsTransitWidget;
@property(readonly, nonatomic) _Bool hasMapsDestinationsWidget;
- (int)StringAsEndState:(id)arg1;
- (id)endStateAsString:(int)arg1;
@property(nonatomic) _Bool hasEndState;
@property(nonatomic) int endState; // @synthesize endState=_endState;
- (int)StringAsMapsWidgetType:(id)arg1;
- (id)mapsWidgetTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapsWidgetType;
@property(nonatomic) int mapsWidgetType; // @synthesize mapsWidgetType=_mapsWidgetType;

@end


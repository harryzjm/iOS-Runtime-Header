//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NFLRecommendationWidgetTileInfo
{
    _Bool _defaultForYou;
    NSString *_identifier;
    long long _widgetType;
}

@property(readonly, nonatomic) _Bool defaultForYou; // @synthesize defaultForYou=_defaultForYou;
@property(readonly, nonatomic) long long widgetType; // @synthesize widgetType=_widgetType;
- (id)identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 widgetType:(long long)arg2 defaultForYou:(_Bool)arg3;
- (id)initWithWidgetType:(long long)arg1 defaultForYou:(_Bool)arg2;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>

@interface WFWeatherEventConfig : NSObject <NSCopying>
{
    _Bool _enabled;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 defaulEnabled:(_Bool)arg2;

@end

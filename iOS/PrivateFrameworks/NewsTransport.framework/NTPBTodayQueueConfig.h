//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBTodayQueueConfig : PBCodable <NSCopying>
{
    unsigned long long _widgetVisibleSectionsLimit;
    NSMutableArray *_todaySectionConfigs;
    struct {
        unsigned int widgetVisibleSectionsLimit:1;
    } _has;
}

+ (Class)todaySectionConfigsType;
@property(nonatomic) unsigned long long widgetVisibleSectionsLimit; // @synthesize widgetVisibleSectionsLimit=_widgetVisibleSectionsLimit;
@property(retain, nonatomic) NSMutableArray *todaySectionConfigs; // @synthesize todaySectionConfigs=_todaySectionConfigs;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasWidgetVisibleSectionsLimit;
- (id)todaySectionConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todaySectionConfigsCount;
- (void)addTodaySectionConfigs:(id)arg1;
- (void)clearTodaySectionConfigs;
- (void)dealloc;

@end

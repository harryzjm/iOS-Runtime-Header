//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSCopying-Protocol.h>

@class NSArray, NSNumber, VUIPlistMediaDatabaseShow;

@interface VUIPlistMediaDatabaseSeason <NSCopying>
{
    VUIPlistMediaDatabaseShow *_show;
    NSNumber *_seasonNumber;
    NSArray *_episodes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(copy, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(nonatomic) __weak VUIPlistMediaDatabaseShow *show; // @synthesize show=_show;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)isLocal;
- (id)episodeForIdentifier:(id)arg1;
- (id)initWithDictionary:(id)arg1 show:(id)arg2;
- (id)initWithIdentifier:(id)arg1 show:(id)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end

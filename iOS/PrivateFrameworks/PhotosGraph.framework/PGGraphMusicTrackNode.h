//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface PGGraphMusicTrackNode
{
    NSString *_title;
    double _durationInSeconds;
}

+ (id)musicTrackTitleSortDescriptors;
- (void).cxx_destruct;
@property(readonly) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
@property(readonly, nonatomic) NSSet *artistNodes;
@property(readonly, nonatomic) NSSet *genreNodes;
@property(readonly, nonatomic) NSSet *albumNodes;
- (void)enumerateArtistNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGenreNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAlbumNodesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned short)domain;
- (id)label;
- (id)propertyDictionary;
- (_Bool)hasProperties:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)init;

@end

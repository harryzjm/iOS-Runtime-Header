//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying>
{
    NSString *_backgroundGradientColor;
    NSString *_discoverMoreVideosSubtitle;
    NSString *_discoverMoreVideosTitle;
    NSString *_discoverMoreVideosURLString;
    NSString *_name;
    NSString *_nameColor;
    _Bool _displaysAsVideoPlaylist;
    _Bool _videoPlaysMutedByDefault;
    struct {
        unsigned int displaysAsVideoPlaylist:1;
        unsigned int videoPlaysMutedByDefault:1;
    } _has;
}

@property(nonatomic) _Bool videoPlaysMutedByDefault; // @synthesize videoPlaysMutedByDefault=_videoPlaysMutedByDefault;
@property(retain, nonatomic) NSString *discoverMoreVideosSubtitle; // @synthesize discoverMoreVideosSubtitle=_discoverMoreVideosSubtitle;
@property(retain, nonatomic) NSString *backgroundGradientColor; // @synthesize backgroundGradientColor=_backgroundGradientColor;
@property(retain, nonatomic) NSString *discoverMoreVideosURLString; // @synthesize discoverMoreVideosURLString=_discoverMoreVideosURLString;
@property(retain, nonatomic) NSString *discoverMoreVideosTitle; // @synthesize discoverMoreVideosTitle=_discoverMoreVideosTitle;
@property(nonatomic) _Bool displaysAsVideoPlaylist; // @synthesize displaysAsVideoPlaylist=_displaysAsVideoPlaylist;
@property(retain, nonatomic) NSString *nameColor; // @synthesize nameColor=_nameColor;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasVideoPlaysMutedByDefault;
@property(readonly, nonatomic) _Bool hasDiscoverMoreVideosSubtitle;
@property(readonly, nonatomic) _Bool hasBackgroundGradientColor;
@property(readonly, nonatomic) _Bool hasDiscoverMoreVideosURLString;
@property(readonly, nonatomic) _Bool hasDiscoverMoreVideosTitle;
@property(nonatomic) _Bool hasDisplaysAsVideoPlaylist;
@property(readonly, nonatomic) _Bool hasNameColor;
@property(readonly, nonatomic) _Bool hasName;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSUUID, PPLocation, PPSource;

@interface PPMutableLocationRecord
{
}

+ (id)new;
@property(nonatomic) double sentimentScore; // @dynamic sentimentScore;
@property(nonatomic) unsigned int extractionAssetVersion; // @dynamic extractionAssetVersion;
@property(retain, nonatomic) NSString *extractionOsBuild; // @dynamic extractionOsBuild;
@property(retain, nonatomic) NSArray *contextualNamedEntities; // @dynamic contextualNamedEntities;
@property(nonatomic) double decayRate; // @dynamic decayRate;
@property(nonatomic) double initialScore; // @dynamic initialScore;
@property(nonatomic) unsigned short algorithm; // @dynamic algorithm;
@property(retain, nonatomic) PPSource *source; // @dynamic source;
@property(retain, nonatomic) PPLocation *location; // @dynamic location;
@property(retain, nonatomic) NSUUID *uuid; // @dynamic uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

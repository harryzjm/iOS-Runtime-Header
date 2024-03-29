//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3AlbumGroupingIdentifier : NSObject
{
    _Bool _compilation;
    long long _albumArtistPersistentID;
    NSData *_groupingKey;
    NSString *_feedURL;
    long long _seasonNumber;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool compilation; // @synthesize compilation=_compilation;
@property(readonly, nonatomic) long long seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, nonatomic) NSString *feedURL; // @synthesize feedURL=_feedURL;
@property(readonly, nonatomic) NSData *groupingKey; // @synthesize groupingKey=_groupingKey;
@property(readonly, nonatomic) long long albumArtistPersistentID; // @synthesize albumArtistPersistentID=_albumArtistPersistentID;
@property(readonly, nonatomic) NSData *keyValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(_Bool)arg5;

@end


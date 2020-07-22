//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface KNBuildChunkIdentifier : NSObject <NSCopying>
{
    NSUUID *_buildUUID;
    int _chunkID;
}

+ (id)emptyIdentifier;
@property(readonly, nonatomic) int chunkID; // @synthesize chunkID=_chunkID;
@property(readonly, nonatomic) NSUUID *buildUUID; // @synthesize buildUUID=_buildUUID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)resolveToChunkOnSlide:(id)arg1;
- (id)resolveToChunkUsingContext:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBuild:(id)arg1 chunkID:(int)arg2;
- (id)initEmptyIdentifier;
- (void)saveToMessage:(struct BuildChunkIdentifierArchive *)arg1;
- (id)initWithMessage:(const struct BuildChunkIdentifierArchive *)arg1;

@end

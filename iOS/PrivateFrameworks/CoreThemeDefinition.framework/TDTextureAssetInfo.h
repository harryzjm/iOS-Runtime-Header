//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class NSURL;

@interface TDTextureAssetInfo : NSObject <NSCopying>
{
    _Bool _flipped;
    NSURL *_fileURL;
    unsigned long long _mipLevel;
    long long _textureFace;
}

@property(nonatomic) _Bool flipped; // @synthesize flipped=_flipped;
@property(nonatomic) long long textureFace; // @synthesize textureFace=_textureFace;
@property(nonatomic) unsigned long long mipLevel; // @synthesize mipLevel=_mipLevel;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSURL *mipsURL;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

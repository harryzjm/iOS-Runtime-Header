//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKCharacterTexture : NSObject
{
    unsigned int _gid;
    const void *_data;
    int _length;
}

@property(readonly, nonatomic) int length; // @synthesize length=_length;
@property(readonly, nonatomic) const void *data; // @synthesize data=_data;
@property(nonatomic) unsigned int gid; // @synthesize gid=_gid;
- (id)initWithData:(const void *)arg1 length:(int)arg2;

@end


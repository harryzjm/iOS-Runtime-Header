//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface PathObject : NSObject
{
    int _len;
    char *_path;
}

+ (id)pathObjectWithPath:(const char *)arg1 component:(const char *)arg2;
@property(readonly) int len; // @synthesize len=_len;
@property(readonly) char *path; // @synthesize path=_path;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(const char *)arg1 component:(const char *)arg2;

@end

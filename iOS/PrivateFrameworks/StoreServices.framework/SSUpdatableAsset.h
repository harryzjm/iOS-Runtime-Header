//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SSUpdatableAsset : NSObject
{
    NSURL *_cacheURL;
    NSString *_md5;
    NSString *_name;
    NSURL *_serverURL;
    NSString *_version;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setVersion:) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic, setter=_setServerURL:) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic, setter=_setName:) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic, setter=_setMD5:) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic, setter=_setCacheURL:) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;

@end

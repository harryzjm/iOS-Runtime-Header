//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSEnumeratedBundleInfo : NSObject
{
    _Bool _isPlaceholder;
    NSString *_bundleID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 isPlaceholder:(_Bool)arg2;

@end


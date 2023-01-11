//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>

@class NSString;

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_processName;
    NSString *_clientIdentifier;
    NSString *_clientVersion;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
}

+ (id)defaultInfo;
@property(readonly, copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (void).cxx_destruct;
- (id)_clientInfoCopyWithClass:(Class)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end


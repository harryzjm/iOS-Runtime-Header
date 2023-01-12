//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileInstallation/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MICandidateContainer : NSObject <NSCopying>
{
    NSURL *_rootURL;
    NSString *_identifier;
    NSDictionary *_metadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isAppleApp;
@property(readonly, nonatomic) long long estimatedSize;
- (id)initWithContainerURL:(id)arg1 identifier:(id)arg2 metadata:(id)arg3;

@end

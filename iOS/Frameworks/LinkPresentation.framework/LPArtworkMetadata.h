//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>
#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface LPArtworkMetadata : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _version;
    NSURL *_URL;
    NSDictionary *_colors;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *colors; // @synthesize colors=_colors;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class NSURL;

@interface PCNativeAssetInfo : NSObject <NSSecureCoding>
{
    _Bool _autoloop;
    long long _contentType;
    long long _width;
    long long _height;
    NSURL *_url;
    long long _length;
    double _bitrate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool autoloop; // @synthesize autoloop=_autoloop;
@property(nonatomic) double bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

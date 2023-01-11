//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Search/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString, NSURL;

@interface SPApplication : NSObject <NSSecureCoding>
{
    NSString *_longDisplayName;
    _Bool _isWebClip;
    NSString *_displayIdentifier;
    NSMutableArray *_keywords;
    NSURL *_URL;
    NSString *_shortVersion;
    NSString *_displayNameInternal;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSString *displayNameInternal; // @synthesize displayNameInternal=_displayNameInternal;
@property(nonatomic) _Bool isWebClip; // @synthesize isWebClip=_isWebClip;
@property(retain, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *longDisplayName;
- (void)copySearchFoundationResult:(id)arg1;
@property(retain, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool displayNameLoaded;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


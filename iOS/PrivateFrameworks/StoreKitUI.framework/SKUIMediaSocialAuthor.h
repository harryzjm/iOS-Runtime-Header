//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SKUIMediaSocialAuthor : NSObject <NSCopying>
{
    NSString *_authorType;
    NSString *_dsid;
    NSString *_identifier;
    NSString *_name;
    NSArray *_permissions;
    NSDictionary *_storePlatformData;
    NSURL *_thumbnailImageURL;
}

@property(copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSDictionary *storePlatformData; // @synthesize storePlatformData=_storePlatformData;
@property(copy, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *authorType; // @synthesize authorType=_authorType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAuthorDictionary:(id)arg1;

@end


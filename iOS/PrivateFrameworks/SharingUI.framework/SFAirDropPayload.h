//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, UIImage;

@interface SFAirDropPayload : NSObject
{
    _Bool _wasString;
    NSURL *_URL;
    NSData *_data;
    NSString *_type;
    UIImage *_previewImage;
    NSString *_payloadDescription;
    long long _identifer;
}

+ (id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4;
+ (id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5;
@property(nonatomic) long long identifer; // @synthesize identifer=_identifer;
@property(copy, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool wasString; // @synthesize wasString=_wasString;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

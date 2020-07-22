//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAppLink-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@interface SFAppLink : NSObject <SFAppLink, NSSecureCoding, NSCopying>
{
    CDStruct_9f571ec0 _has;
    int _imageAlign;
    NSString *_title;
    SFPunchout *_appPunchout;
    SFImage *_image;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(retain, nonatomic) SFPunchout *appPunchout; // @synthesize appPunchout=_appPunchout;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasImageAlign;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


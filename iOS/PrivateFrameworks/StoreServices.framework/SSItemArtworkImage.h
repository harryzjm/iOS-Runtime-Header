//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying>
{
    NSMutableDictionary *_dictionary;
    NSString *_imageKind;
}

@property(copy, nonatomic) NSString *imageKind; // @synthesize imageKind=_imageKind;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSString *URLString;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
@property(retain, nonatomic) NSURL *URL;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)initWithArtworkDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic) long long width;
@property(readonly, nonatomic, getter=isPrerendered) _Bool prerendered;
@property(readonly, nonatomic) double imageScale;
@property(readonly, nonatomic) long long imageOrientation;
@property(readonly, nonatomic) long long height;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

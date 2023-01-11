//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUI/NSLocking-Protocol.h>

@class CUIRenditionKey, CUIThemeRendition, NSString;

@interface CUINamedLookup : NSObject <NSLocking>
{
    NSString *_name;
    CUIRenditionKey *_key;
    NSString *_signature;
    unsigned long long _storageRef;
    unsigned int _distilledInVersion;
    struct os_unfair_lock_s _lock;
    unsigned int _odContent:1;
}

@property(nonatomic) unsigned long long storageRef; // @synthesize storageRef=_storageRef;
@property(copy, nonatomic) CUIRenditionKey *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long appearanceIdentifier;
@property(readonly, nonatomic) NSString *appearance;
@property(readonly, nonatomic) long long layoutDirection;
@property(readonly, nonatomic) long long displayGamut;
@property(readonly, nonatomic) long long graphicsClass;
@property(readonly, nonatomic) long long memoryClass;
@property(readonly, nonatomic) long long sizeClassVertical;
@property(readonly, nonatomic) long long sizeClassHorizontal;
@property(readonly, nonatomic) unsigned long long subtype;
@property(readonly, nonatomic) long long idiom;
@property(readonly, nonatomic) unsigned int _distilledInVersion;
- (_Bool)isTintable;
- (void)setRepresentsOnDemandContent:(_Bool)arg1;
@property(readonly, nonatomic) _Bool representsOnDemandContent;
@property(readonly, nonatomic) CUIRenditionKey *renditionKey;
@property(readonly, nonatomic) NSString *renditionName;
@property(readonly, nonatomic) CUIThemeRendition *_rendition;
@property(readonly, nonatomic) NSString *keySignature;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool _cacheRenditionProperties;
- (void)unlock;
- (void)lock;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

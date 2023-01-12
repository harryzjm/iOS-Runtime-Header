//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorResourceProvider-Protocol.h>

@class IFSymbol, ISCustomRecipe, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, NSUUID;
@protocol ISCompositorResource;

@interface ISResourceProvider : NSObject <ISCompositorResourceProvider>
{
    _Bool _isGenericProvider;
    unsigned long long _lsDatabaseSequenceNumber;
    NSUUID *_lsDatabaseUUID;
    NSData *_resourceToken;
    id <ISCompositorResource> _templateIconResource;
    NSDictionary *_decorationResources;
    unsigned long long _iconShape;
    NSArray *_sourceRecordIdentifiers;
    unsigned long long _options;
    NSMutableDictionary *_resourcesByResourceKey;
    ISCustomRecipe *_customRecipe;
}

+ (id)resourceProviderWithTypeIdentifier:(id)arg1 options:(unsigned long long)arg2;
+ (id)resourceProviderWithLSIconReource:(id)arg1;
+ (id)resourceProviderWithRecord:(id)arg1 options:(unsigned long long)arg2;
+ (id)defaultIconResourceProvider;
+ (id)resourceWithTypeCode:(unsigned int)arg1 options:(unsigned long long)arg2;
+ (id)resourceWithTypeIdentifier:(id)arg1 options:(unsigned long long)arg2;
+ (id)resourceWithBundleURL:(id)arg1 iconDictionary:(id)arg2 options:(unsigned long long)arg3;
+ (id)resourceWithRecord:(id)arg1 options:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain) ISCustomRecipe *customRecipe; // @synthesize customRecipe=_customRecipe;
@property(readonly) NSMutableDictionary *resourcesByResourceKey; // @synthesize resourcesByResourceKey=_resourcesByResourceKey;
@property unsigned long long options; // @synthesize options=_options;
@property(retain) NSArray *sourceRecordIdentifiers; // @synthesize sourceRecordIdentifiers=_sourceRecordIdentifiers;
@property _Bool isGenericProvider; // @synthesize isGenericProvider=_isGenericProvider;
@property unsigned long long iconShape; // @synthesize iconShape=_iconShape;
@property(retain) NSDictionary *decorationResources; // @synthesize decorationResources=_decorationResources;
@property(readonly) id <ISCompositorResource> templateIconResource; // @synthesize templateIconResource=_templateIconResource;
@property(retain) NSData *resourceToken; // @synthesize resourceToken=_resourceToken;
@property(retain) NSUUID *lsDatabaseUUID; // @synthesize lsDatabaseUUID=_lsDatabaseUUID;
@property unsigned long long lsDatabaseSequenceNumber; // @synthesize lsDatabaseSequenceNumber=_lsDatabaseSequenceNumber;
- (_Bool)_isAppleResource;
@property(readonly) IFSymbol *symbol; // @dynamic symbol;
@property(readonly) NSData *validationToken; // @dynamic validationToken;
- (id)resourceNamed:(id)arg1;
- (id)resourceForKey:(id)arg1;
@property(retain) id <ISCompositorResource> iconResource; // @dynamic iconResource;
- (id)initWithResources:(id)arg1;
- (id)initWithResource:(id)arg1 templateResource:(id)arg2;
- (id)init;
@property(readonly) _Bool isDocumentBadge;
@property(readonly) _Bool isPrecomposed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

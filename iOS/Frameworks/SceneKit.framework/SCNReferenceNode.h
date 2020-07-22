//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSURL;

@interface SCNReferenceNode
{
    NSURL *_referenceURL;
    _Bool _loaded;
    NSMutableDictionary *_overrides;
    long long _loadingPolicy;
    NSURL *_catalogURL;
    NSURL *_sourceDocumentURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)referenceNodeWithURL:(id)arg1;
@property(nonatomic) long long loadingPolicy; // @synthesize loadingPolicy=_loadingPolicy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)_loadWithURL:(id)arg1 catalog:(id)arg2;
- (void)_loadWithURL:(id)arg1;
- (void)_loadWithCatalog:(id)arg1;
- (id)_loadReferencedSceneWithURL:(id)arg1 catalog:(id)arg2;
- (void)load;
@property(readonly, getter=isLoaded) _Bool loaded;
- (void)unload;
- (id)_resolveURL;
- (id)_catalog;
@property(copy, nonatomic) NSURL *referenceURL;
- (_Bool)_isAReference;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)_applyOverrides;
- (void)_applyUnsharing:(id)arg1 alreadyShared:(id)arg2;
- (void)_applyOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)setOverrides:(id)arg1;
- (id)overrides;
- (void)removeAllOverrides;
- (void)removeForKeyPath:(id)arg1;
- (void)addOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)collectOverrides;
- (void)_diffNode:(id)arg1 with:(id)arg2 path:(id)arg3;
- (_Bool)_isNameUnique:(id)arg1;
- (void)_diffObject:(id)arg1 with:(id)arg2 path:(id)arg3;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end


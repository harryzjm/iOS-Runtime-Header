//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICAbstractCatalogItem, NSData, NSString;
@protocol NSCopying;

@interface IBICManifestPropertyMutator
{
    CDUnknownBlockType _getter;
    CDUnknownBlockType _setter;
    id <NSCopying> _value;
    id <NSCopying> _originalValue;
    IBICAbstractCatalogItem *_item;
    NSData *_pendingManifestData;
    NSString *_pendingManifestPath;
    NSString *_propertyName;
}

- (void).cxx_destruct;
- (id)inverseMutator;
- (id)mutationDescription;
- (void)applyToDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyToModel;
- (id)initWithItem:(id)arg1 propertyName:(id)arg2 value:(id)arg3 getter:(CDUnknownBlockType)arg4 setter:(CDUnknownBlockType)arg5;
- (id)initWithItem:(id)arg1 andValue:(id)arg2 forKeyPath:(id)arg3;

@end


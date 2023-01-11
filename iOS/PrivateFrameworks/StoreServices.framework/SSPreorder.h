//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSDate, NSNumber, NSString, SSItemImageCollection;

@interface SSPreorder : NSObject <SSXPCCoding>
{
    NSNumber *_accountID;
    NSString *_artistName;
    SSItemImageCollection *_imageCollection;
    unsigned long long _itemID;
    NSString *_itemKind;
    double _releaseDate;
    NSString *_releaseDateString;
    long long _pid;
    unsigned long long _preorderID;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long storePreorderIdentifier; // @synthesize storePreorderIdentifier=_preorderID;
@property(readonly, nonatomic) unsigned long long storeItemIdentifier; // @synthesize storeItemIdentifier=_itemID;
@property(readonly, nonatomic) NSNumber *storeAccountIdentifier; // @synthesize storeAccountIdentifier=_accountID;
@property(readonly, nonatomic) NSString *releaseDateString; // @synthesize releaseDateString=_releaseDateString;
@property(readonly, nonatomic) long long persistentIdentifier; // @synthesize persistentIdentifier=_pid;
@property(readonly, nonatomic) NSString *itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) SSItemImageCollection *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_setTitle:(id)arg1;
- (void)_setStorePreorderIdentifier:(long long)arg1;
- (void)_setStoreItemIdentifier:(long long)arg1;
- (void)_setStoreAccountIdentifier:(id)arg1;
- (void)_setReleaseDateString:(id)arg1;
- (void)_setReleaseDate:(id)arg1;
- (void)_setItemKind:(id)arg1;
- (void)_setImageCollection:(id)arg1;
- (void)_setArtistName:(id)arg1;
@property(readonly, nonatomic) NSDate *releaseDate;
- (id)copyReleaseDateStringWithStyle:(long long)arg1;
- (void)dealloc;
- (id)_initWithPersistentIdentifier:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

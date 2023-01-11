//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTIDStorage-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface MTIDFileStorage : NSObject <MTIDStorage>
{
    _Bool _shouldDisableChangeNotifications;
    NSString *_path;
    NSMutableDictionary *_namespaceFiles;
    NSArray *_entitledNamespaces;
}

@property(nonatomic) _Bool shouldDisableChangeNotifications; // @synthesize shouldDisableChangeNotifications=_shouldDisableChangeNotifications;
@property(retain, nonatomic) NSArray *entitledNamespaces; // @synthesize entitledNamespaces=_entitledNamespaces;
@property(retain, nonatomic) NSMutableDictionary *namespaceFiles; // @synthesize namespaceFiles=_namespaceFiles;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (_Bool)isEntitledNamespace:(id)arg1;
- (id)fileForNamespace:(id)arg1 error:(id *)arg2;
- (id)fileNameForNamespace:(id)arg1;
- (id)deleteNamespace:(id)arg1;
- (id)optionsForNamespace:(id)arg1 cachePolicy:(long long)arg2;
- (id)updateNamespace:(id)arg1 options:(id)arg2 resetSeed:(_Bool)arg3;
- (id)initWithPath:(id)arg1 shouldDisableChangeNotifications:(_Bool)arg2;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

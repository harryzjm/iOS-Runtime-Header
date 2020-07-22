//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPIdentifiedDataRepresentation-Protocol.h>

@class NSString, SFUDataRepresentation;

__attribute__((visibility("hidden")))
@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation>
{
    long long _identifier;
    NSString *_fileStateIdentifier;
    SFUDataRepresentation *_objectData;
    set_713dd2e1 *_ownedIds;
    int _classType;
    unsigned int _version;
    NSString *_relativeDataPath;
}

@property(copy, nonatomic) NSString *relativeDataPath; // @synthesize relativeDataPath=_relativeDataPath;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) int classType; // @synthesize classType=_classType;
- (void).cxx_destruct;
- (_Bool)isLoaded;
- (id)dataRepresentation;
- (void)setOwnedIds:(const set_713dd2e1 *)arg1;
- (const set_713dd2e1 *)ownedIds;
- (_Bool)setDataRepresentation:(id)arg1 shouldCopy:(_Bool)arg2 error:(id *)arg3;
- (void)setFileStateIdentifier:(id)arg1;
- (id)fileStateIdentifier;
- (long long)identifier;
- (void)dealloc;
- (id)initWithIdentifier:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


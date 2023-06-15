//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionSelector : NSObject
{
    id <VCConnectionProtocol> _primaryConnection;
    _Bool _isMultiwaySession;
    CDStruct_155bd25f _connectionSelectionPolicy;
    NSArray *_linkPreferenceOrder;
    CDStruct_f24b774a _serverLinks;
    CDStruct_f24b774a _endToEndLinks;
    _Bool _canUseP2PLinks;
    id <VCConnectionProtocol> _secondaryConnection;
    id <VCConnectionProtocol> _connectionForDuplication;
    id <VCConnectionProtocol> _connectionForDuplicationNonProbingVersion;
    id <VCConnectionProtocol> _lastPrimaryConnectionInUse;
}

@property _Bool canUseP2PLinks; // @synthesize canUseP2PLinks=_canUseP2PLinks;
@property(readonly) CDStruct_f24b774a serverLinks; // @synthesize serverLinks=_serverLinks;
@property(copy, nonatomic) NSArray *linkPreferenceOrder; // @synthesize linkPreferenceOrder=_linkPreferenceOrder;
@property(retain, nonatomic) id <VCConnectionProtocol> lastPrimaryConnectionInUse; // @synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse;
@property(retain, nonatomic) id <VCConnectionProtocol> connectionForDuplicationNonProbingVersion; // @synthesize connectionForDuplicationNonProbingVersion=_connectionForDuplicationNonProbingVersion;
@property(retain, nonatomic) id <VCConnectionProtocol> connectionForDuplication; // @synthesize connectionForDuplication=_connectionForDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> secondaryConnection; // @synthesize secondaryConnection=_secondaryConnection;
- (_Bool)isPrimaryConnectionSameAsConnection:(id)arg1;
- (id)connectionForGroupType:(unsigned char)arg1 isPrimary:(_Bool)arg2;
- (void)selectConnectionForGroupType:(unsigned char)arg1 fromConnectionArray:(id)arg2 asPrimary:(_Bool)arg3;
- (void)updateSelectedConnectionsForGroupType:(unsigned char)arg1 connectionRemoved:(id)arg2 connectionArray:(id)arg3;
- (void)updateSelectedConnectionsForGroupType:(unsigned char)arg1 connectionAdded:(id)arg2;
- (void)updateConnectionSelectionPolicyWithPreferRelayOverP2P:(_Bool)arg1 preferNonVPN:(_Bool)arg2 preferE2E:(_Bool)arg3;
- (CDStruct_155bd25f *)getConnectionSelectionPolicy;
- (void)useConnectionAsPrimary:(id)arg1;
- (_Bool)selectPrimaryAndSecondaryWithConnection:(id)arg1 isEndToEnd:(_Bool)arg2;
- (void)updateSecondaryWithConnection:(id)arg1;
- (void)updatePrimaryWithConnection:(id)arg1;
- (void)dealloc;
- (id)initWithMultiwayEnabled:(_Bool)arg1;

@end

